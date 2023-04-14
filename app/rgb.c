#include "rgb.h"

static const double GAMMA = 2.2;
static const uint32_t CLK_PERIOD = 8;

static DMA_Channel_TypeDef *const DUR_DMA_CHANNEL = (&(DMA[0].CH[4]));
static DMA_Channel_TypeDef *const DAT_DMA_CHANNEL = (&(DMA[0].CH[2]));
static DMA_Channel_TypeDef *const ADR_DMA_CHANNEL = (&(DMA[0].CH[1]));
static TIMER_TypeDef *const CLK_TIMER = TIMER2;
static TIMER_TypeDef *const MST_TIMER = TIMER0;

static const uint32_t DAT_TIME = CLK_PERIOD*(CLM_MAX + 1);
static const uint32_t ENB_RISE = DAT_TIME + 4;
static const uint32_t ENB_FALL = ENB_RISE + 6;
static const uint32_t LAT_RISE = (ENB_FALL + ENB_RISE)/2;

static const uint32_t DIS_TIME = ENB_FALL - ENB_RISE;
static const uint32_t ENB_TIME = CLK_PERIOD*(CLM_MAX + 3) - DIS_TIME;

static uint16_t Duration[8];
static uint8_t  Address[8];
static uint8_t  Correction[256];
static uint8_t  Display[sizeof(Duration)/sizeof(Duration[0])][sizeof(Address)/sizeof(Address[0])][CLM_MAX + 1];

// Initialization
void rgb_init()
{
	rgb_free();

	/* Test */
	Display[0][0][0] = 0x3E;
	Display[0][0][1] = 0x3D;
	Display[0][0][2] = 0x3B;
	Display[0][7][31] = 0x07;
	for (uint_fast8_t i = 0; i < sizeof(Duration)/sizeof(Duration[0]); i++)
	{
		Display[i][2][15] = 0x07;
	}

	/* Fill the duration array */
	for (uint_fast8_t i = 0; i < sizeof(Duration)/sizeof(Duration[0]); i++)
	{
		Duration[i] = (ENB_TIME << i) + DIS_TIME - 1;
	}

	/* Fill the address array */
	for (uint_fast8_t i = 0; i < sizeof(Address)/sizeof(Address[0]); i++)
	{
		Address[i] = ~i;
	}

	/* Fill the correction array */
	for (uint_fast16_t i = 0; i < sizeof(Correction)/sizeof(Correction[0]); i++)
	{
		Correction[i] = round(255*pow((double)i/255, GAMMA));
	}

	/* Enable the I/O compensation cell */
	gpio_compensation_config(GPIO_COMPENSATION_ENABLE);

	/* Enable clocks */
	RCU->AHBEN  |= RCU_AHBEN_DMA0EN;
	RCU->APB2EN |= RCU_APB2EN_TIMER0EN | RCU_APB2EN_PBEN | RCU_APB2EN_PAEN | RCU_APB2EN_AFEN;
	RCU->APB1EN |= RCU_APB1EN_TIMER2EN;

	/* Initialize data pins */
	gpio_init(GPIOA, GPIO_MODE_OUT_PP, GPIO_OSPEED_MAX,
		GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5);
	/* Initialize address pins */
	gpio_init(GPIOB, GPIO_MODE_OUT_PP, GPIO_OSPEED_MAX, GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10);
	/* Initialize the enable pin as TIMER0_CH1_ON */
	gpio_init(GPIOB, GPIO_MODE_AF_PP, GPIO_OSPEED_MAX, GPIO_PIN_14);
	/* Initialize the latch pin as TIMER0_CH2_ON */
	gpio_init(GPIOB, GPIO_MODE_AF_PP, GPIO_OSPEED_MAX, GPIO_PIN_15);
	/* Initialize the clock pin as TIMER2_CH0 */
	gpio_init(GPIOA, GPIO_MODE_AF_PP, GPIO_OSPEED_MAX, GPIO_PIN_6);

	/* Initialize the data DMA */
	DAT_DMA_CHANNEL->CNT   = sizeof(Display);
	DAT_DMA_CHANNEL->PADDR = (uint32_t)&(GPIO_OCTL(GPIOA));
	DAT_DMA_CHANNEL->MADDR = (uint32_t)Display;
	DAT_DMA_CHANNEL->CTL   = 0
		| (0x0UL << DMA_CHxCTL_M2M_Pos)    // disable memory to memory mode
		| (0x0UL << DMA_CHxCTL_PRIO_Pos)   // low priority level
		| (0x0UL << DMA_CHxCTL_MWIDTH_Pos) // transfer data size of memory: 8-bit
		| (0x0UL << DMA_CHxCTL_PWIDTH_Pos) // transfer data size of peripheral: 8-bit
		| DMA_CHxCTL_MNAGA                 // increasing memory address mode
		| (0x0UL << DMA_CHxCTL_PNAGA_Pos)  // fixed peripheral address mode
		| DMA_CHxCTL_CMEN                  // enable circular mode
		| DMA_CHxCTL_DIR                   // read from memory and write to peripheral
		| (0x0UL << DMA_CHxCTL_ERRIE_Pos)  // disable the channel error interrupt
		| (0x0UL << DMA_CHxCTL_HTFIE_Pos)  // disable channel half transfer finish interrupt
		| (0x0UL << DMA_CHxCTL_FTFIE_Pos)  // disable channel full transfer finish interrupt
		| DMA_CHxCTL_CHEN                  // enable channel
		;

	/* Initialize the address DMA */
	ADR_DMA_CHANNEL->CNT   = sizeof(Address)/sizeof(Address[0]);
	ADR_DMA_CHANNEL->PADDR = (uint32_t)&(GPIO_OCTL(GPIOB)) + 2UL;
	ADR_DMA_CHANNEL->MADDR = (uint32_t)Address;
	ADR_DMA_CHANNEL->CTL   = 0
		| (0x0UL << DMA_CHxCTL_M2M_Pos)    // disable memory to memory mode
		| (0x1UL << DMA_CHxCTL_PRIO_Pos)   // medium priority level
		| (0x0UL << DMA_CHxCTL_MWIDTH_Pos) // transfer data size of memory: 8-bit
		| (0x0UL << DMA_CHxCTL_PWIDTH_Pos) // transfer data size of peripheral: 8-bit
		| DMA_CHxCTL_MNAGA                 // increasing memory address mode
		| (0x0UL << DMA_CHxCTL_PNAGA_Pos)  // fixed peripheral address mode
		| DMA_CHxCTL_CMEN                  // enable circular mode
		| DMA_CHxCTL_DIR                   // read from memory and write to peripheral
		| (0x0UL << DMA_CHxCTL_ERRIE_Pos)  // disable the channel error interrupt
		| (0x0UL << DMA_CHxCTL_HTFIE_Pos)  // disable channel half transfer finish interrupt
		| (0x0UL << DMA_CHxCTL_FTFIE_Pos)  // disable channel full transfer finish interrupt
		| DMA_CHxCTL_CHEN                  // enable channel
		;

	/* Initialize the duration DMA */
	DUR_DMA_CHANNEL->CNT   = sizeof(Duration)/sizeof(Duration[0]);
	DUR_DMA_CHANNEL->PADDR = (uint32_t)&(MST_TIMER->CAR);
	DUR_DMA_CHANNEL->MADDR = (uint32_t)Duration;
	DUR_DMA_CHANNEL->CTL   = 0
		| (0x0UL << DMA_CHxCTL_M2M_Pos)    // disable memory to memory mode
		| (0x0UL << DMA_CHxCTL_PRIO_Pos)   // low priority level
		| (0x1UL << DMA_CHxCTL_MWIDTH_Pos) // transfer data size of memory: 16-bit
		| (0x1UL << DMA_CHxCTL_PWIDTH_Pos) // transfer data size of peripheral: 16-bit
		| DMA_CHxCTL_MNAGA                 // increasing memory address mode
		| (0x0UL << DMA_CHxCTL_PNAGA_Pos)  // fixed peripheral address mode
		| DMA_CHxCTL_CMEN                  // enable circular mode
		| DMA_CHxCTL_DIR                   // read from memory and write to peripheral
		| (0x0UL << DMA_CHxCTL_ERRIE_Pos)  // disable the channel error interrupt
		| (0x0UL << DMA_CHxCTL_HTFIE_Pos)  // disable channel half transfer finish interrupt
		| (0x0UL << DMA_CHxCTL_FTFIE_Pos)  // disable channel full transfer finish interrupt
		| DMA_CHxCTL_CHEN                  // enable channel
		;

	/* Initialize the master timer */
	MST_TIMER->CTL0     = (0x2UL << TIMER_CTL0_CKDIV_Pos); // f_DTS = f_CK_TIMER / 4
	MST_TIMER->CTL1     = (0x4UL << TIMER_CTL1_MMC_Pos);   // master mode control: compare source is from O0CPRE
	MST_TIMER->DMAINTEN = 0
		| TIMER_DMAINTEN_CH0DEN // enable channel 0 capture/compare DMA request
		| TIMER_DMAINTEN_UPDEN  // enable update DMA request
		;
	MST_TIMER->CHCTL0   = 0
		| (0x6UL << TIMER_CHCTL0_CH0COMCTL_Pos) // PWM mode0 on channel 0
		| (0x7UL << TIMER_CHCTL0_CH1COMCTL_Pos) // PWM mode0 on channel 1
		;
	MST_TIMER->CHCTL1   = (0x6UL << TIMER_CHCTL0_CH0COMCTL_Pos); // PWM mode0 on channel 2
	MST_TIMER->CHCTL2   = 0
		| TIMER_CHCTL2_CH2NEN // enable channel 2 complementary output
		| TIMER_CHCTL2_CH1NP  // channel 1 complementary output low level is active level
		| TIMER_CHCTL2_CH1NEN // enable channel 1 complementary output
		| TIMER_CHCTL2_CH1EN  // enable channel 1 function
		;
	MST_TIMER->CNT      = LAT_RISE;
	MST_TIMER->CAR      = Duration[0];
	MST_TIMER->CREP     = sizeof(Address)/sizeof(Address[0]) - 1;
	MST_TIMER->CH0CV    = DAT_TIME;
	MST_TIMER->CH1CV    = ENB_FALL;
	MST_TIMER->CH2CV    = LAT_RISE;
	MST_TIMER->CCHP     = 0
		| TIMER_CCHP_POEN // primary output enable
		| ((ENB_RISE/4) << TIMER_CCHP_DTCFG_Pos)
		;

	/* Initialize the clock timer */
	CLK_TIMER->SMCFG    = 0
		| (0x0UL << TIMER_SMCFG_TRGS_Pos) // trigger selection: ITI0 (TIMER0_TRGO)
		| (0x5UL << TIMER_SMCFG_SMC_Pos)  // pause mode
		;
	CLK_TIMER->DMAINTEN = TIMER_DMAINTEN_CH3DEN;  // enable channel 3 capture/compare DMA request
	CLK_TIMER->CHCTL0   = TIMER_CHCTL0_CH0COMCTL; // PWM mode1 on channel 0
	CLK_TIMER->CHCTL2   = TIMER_CHCTL2_CH0EN;     // enable channel 0 function
	CLK_TIMER->CAR      = CLK_PERIOD - 1;
	CLK_TIMER->CH0CV    = CLK_PERIOD/2;
	CLK_TIMER->CH3CV    = CLK_PERIOD - 1;
	CLK_TIMER->CCHP     = TIMER_CCHP_POEN;  // primary output enable
	CLK_TIMER->SWEVG    = TIMER_SWEVG_CH3G; // generate a channel 3 capture or compare event
	CLK_TIMER->CTL0     = TIMER_CTL0_CEN;   // enable counter

	/* Run process */
	MST_TIMER->CTL0 |= TIMER_CTL0_CEN; // enable counter
}

// Clear screen
void rgb_free()
{
	memset(Display, 0x3F, sizeof(Display));
}

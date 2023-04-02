#include "rgb.h"

static const double GAMMA = 2.2;
static const uint32_t CLK_PERIOD = 10;
static DMA_Channel_TypeDef *const DAT_DMA_CHANNEL = (&(DMA[0].CH[2]));
static TIMER_TypeDef *const CLK_TIMER = TIMER2;
static TIMER_TypeDef *const LAT_TIMER = TIMER0;

static uint8_t Address[8];
static uint8_t Correction[256];
static uint8_t Display[1][sizeof(Address)][CLM_MAX + 1];

// Initialization
void rgb_init()
{
	rgb_free();

	/* Test */
	Display[0][0][0] = 0x00;
	Display[0][0][2] = 0x00;

	/* Fill the address array */
	for (uint_fast8_t i = 0; i < sizeof(Address); i++)
	{
		Address[i] = i;
	}

	/* Fill the correction array */
	for (uint_fast16_t i = 0; i < 256; i++)
	{
		Correction[i] = round(255*pow((double)i/255, GAMMA));
	}

	/* Enable the I/O compensation cell */
	gpio_compensation_config(GPIO_COMPENSATION_ENABLE);

	/* Enable clocks */
	rcu_periph_clock_enable(RCU_GPIOA);
	rcu_periph_clock_enable(RCU_GPIOB);
	rcu_periph_clock_enable(RCU_TIMER0);
	rcu_periph_clock_enable(RCU_TIMER2);
	rcu_periph_clock_enable(RCU_DMA0);

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

	/* Initialize DMA */
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

	/* Initialize the enable and latch timer */
	LAT_TIMER->CNT      = TIMER_CNT_CNT;
	LAT_TIMER->CTL1     = (0x4UL << TIMER_CTL1_MMC_Pos); // master mode control: compare source is from O0CPRE
	LAT_TIMER->CHCTL0   = 0
		| (0x6UL << TIMER_CHCTL0_CH0COMCTL_Pos) // PWM mode0 on channel 0
		| (0x6UL << TIMER_CHCTL0_CH1COMCTL_Pos) // PWM mode0 on channel 1
		;
	LAT_TIMER->CHCTL1   = (0x6UL << TIMER_CHCTL0_CH0COMCTL_Pos); // PWM mode0 on channel 2
	LAT_TIMER->CHCTL2   = 0
		| TIMER_CHCTL2_CH2NEN // enable channel 2 function
		| TIMER_CHCTL2_CH1NEN // enable channel 1 function
		;
	LAT_TIMER->CAR      = CLK_PERIOD*(CLM_MAX + 4) - 1;
	LAT_TIMER->CH0CV    = CLK_PERIOD*(CLM_MAX + 1);
	LAT_TIMER->CH1CV    = CLK_PERIOD*(CLM_MAX + 1);
	LAT_TIMER->CH2CV    = CLK_PERIOD*(CLM_MAX + 3);
	LAT_TIMER->CCHP     = TIMER_CCHP_POEN; // primary output enable

	/* Initialize the clock timer */
	CLK_TIMER->DMAINTEN = TIMER_DMAINTEN_UPDEN;   // enable update DMA request
	CLK_TIMER->CHCTL0   = TIMER_CHCTL0_CH0COMCTL; // PWM mode1 on channel 0
	CLK_TIMER->CHCTL2   = TIMER_CHCTL2_CH0EN;     // enable channel 0 function
	CLK_TIMER->SMCFG    = 0
		// | TIMER_SMCFG_MSM // enable master-slave mode
		| (0x0UL << TIMER_SMCFG_TRGS_Pos) // trigger selection: ITI0 (TIMER0_TRGO)
		| (0x5UL << TIMER_SMCFG_SMC_Pos)  // pause mode
		;
	CLK_TIMER->CAR      = CLK_PERIOD - 1;
	CLK_TIMER->CH0CV    = CLK_PERIOD/2;
	CLK_TIMER->CCHP     = TIMER_CCHP_POEN; // primary output enable
	CLK_TIMER->SWEVG    = TIMER_SWEVG_UPG; // generate an update event
	CLK_TIMER->CTL0     = TIMER_CTL0_CEN;  // enable counter

	/* Run process */
	LAT_TIMER->CTL0     = TIMER_CTL0_CEN;  // enable counter
}

// Clear screen
void rgb_free()
{
	memset(Display, 0x3F, sizeof(Display));
}

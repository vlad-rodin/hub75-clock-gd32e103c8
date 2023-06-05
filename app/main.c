#include "libraries.h"
#include "index.h"
#include "random.h"
#include "rcu.h"
#include "rgb.h"

void SystemInit()
{
	/* Enable hardware FPU */
	#if (__FPU_PRESENT == 1) && (__FPU_USED == 1)
		SCB->CPACR |= 0
			| (3UL << 10*2) // set CP10 Full Access
			| (3UL << 11*2) // set CP11 Full Access
			;
	#endif

	/* Enable all GPIO and AFIO clocks */
	RCU->APB2EN |= 0
		| RCU_APB2EN_PEEN
		| RCU_APB2EN_PDEN
		| RCU_APB2EN_PCEN
		| RCU_APB2EN_PBEN
		| RCU_APB2EN_PAEN
		| RCU_APB2EN_AFEN
		;

	/* Enable the I/O compensation cell */
	AFIO->CPSCTL = AFIO_CPSCTL_CPS_EN;

	/* Set very high output speed when MDx is 0b11 */
	for (uint_fast8_t x = 0; x <= 4; x++)
	{
		GPIO[x].SPD = 0xFFFF;
	}
}

int main(void)
{
	__disable_irq();

	rcu_init();

	rgb_init();
	rnd_init();

	for (uint_fast8_t Row = 0; Row <= ROW_MAX; Row++)
	{
		for (uint_fast8_t Column = 0; Column <= CLM_MAX; Column++)
		{
			idx_set_pixel(Row, Column, true);
		}
	}

	__enable_irq();

	while (1)
	{
		idx_main();
	}
}

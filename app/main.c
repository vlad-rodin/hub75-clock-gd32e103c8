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

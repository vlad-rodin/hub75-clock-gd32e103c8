#include "libraries.h"
#include "index.h"
#include "random.h"
#include "rcu.h"
#include "rgb.h"

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

#include "libraries.h"
#include "rgb.h"

int main(void)
{
	__disable_irq();

	rgb_init();

	__enable_irq();

	while (1)
	{
		volatile uint32_t i;
		i--;
		volatile uint32_t A[1];
		A[0] = i;
	}
}

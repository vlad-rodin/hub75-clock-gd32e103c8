#include "random.h"
#include "palette.h"

static TIMER_TypeDef *const RND_TIMER = TIMER5;

void rnd_init()
{
	RCU->APB1EN    |= RCU_APB1EN_TIMER5EN;
	RND_TIMER->CAR  = sizeof(PALETTE)/sizeof(PALETTE[0]) - 1;
	RND_TIMER->CTL0 = TIMER_CTL0_CEN;
}

uint32_t rnd_color()
{
	return *((uint32_t *)PALETTE[RND_TIMER->CNT]) & 0xFFFFFF;
}

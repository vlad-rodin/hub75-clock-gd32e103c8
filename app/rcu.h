#ifndef RCU_H_
#define RCU_H_

#include "libraries.h"

#define CK_HXTAL ((uint32_t)8000000)
#define CK_PLL   (CK_HXTAL/2*30)
#define CK_SYS   (CK_PLL)
#define CK_AHB   (CK_SYS)
#define CK_APB1  (CK_AHB/2)
#define CK_APB2  (CK_AHB)

static inline void rcu_init()
{
	RCU->CTL  = RCU_CTL_HXTALEN;          // enable high speed crystal oscillator

	while (~RCU->CTL & RCU_CTL_HXTALSTB); // wait for HXTAL clock stabilization

	RCU->CFG0 = 0
		| RCU_CFG0_PLLMF30                // PLL source clock x 30
		| RCU_CFG0_PREDV0_LSB             // PREDV0 input source clock divided by 2
		| RCU_CFG0_PLLSEL                 // HXTAL selected as source clock of PLL
		| RCU_CFG0_APB1PSC_DIV2           // CK_APB1 = CK_AHB / 2
		;
	RCU->CTL |= RCU_CTL_PLLEN;            // enable PLL
	FMC->WS  |= (3U << FMC_WS_WSCNT_Pos); // 3 wait state added

	while (~RCU->CTL & RCU_CTL_PLLSTB);   // wait for PLL clock stabilization

	RCU->CFG0 |= RCU_CFG0_SCS_PLL;        // CK_SYS = CK_PLL
}

#endif // RCU_H_

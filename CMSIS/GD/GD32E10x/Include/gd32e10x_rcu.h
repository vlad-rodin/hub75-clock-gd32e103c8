#ifndef GD32E10X_RCU_H_
#define GD32E10X_RCU_H_

/* RCU struct */
typedef struct
{
  __IO uint32_t CTL;           /*!< RCU control register,                    Address offset: 0x00 */
  __IO uint32_t CFG0;          /*!< RCU clock configuration register 0,      Address offset: 0x04 */
  __IO uint32_t INT;           /*!< RCU clock interrupt register,            Address offset: 0x08 */
  __IO uint32_t APB2RST;       /*!< RCU APB2 reset register,                 Address offset: 0x0C */
  __IO uint32_t APB1RST;       /*!< RCU APB1 reset register,                 Address offset: 0x10 */
  __IO uint32_t AHBEN;         /*!< RCU AHB1 enable register,                Address offset: 0x14 */
  __IO uint32_t APB2EN;        /*!< RCU APB2 enable register,                Address offset: 0x18 */
  __IO uint32_t APB1EN;        /*!< RCU APB1 enable register,                Address offset: 0x1C */
  __IO uint32_t BDCTL;         /*!< RCU backup domain control register,      Address offset: 0x20 */
  __IO uint32_t RSTSCK;        /*!< RCU reset source / clock register,       Address offset: 0x24 */
  __IO uint32_t AHBRST;        /*!< RCU AHB reset register,                  Address offset: 0x28 */
  __IO uint32_t CFG1;          /*!< RCU clock configuration register 1,      Address offset: 0x2C */
       uint32_t RESERVED0;     /*!< Reserved */
  __IO uint32_t DSV;           /*!< RCU deep-sleep mode voltage register,    Address offset: 0x34 */
       uint32_t RESERVED1[34]; /*!< Reserved */
  __IO uint32_t ADDCTL;        /*!< RCU Additional clock control register,   Address offset: 0xC0 */
       uint32_t RESERVED2[2];  /*!< Reserved */
  __IO uint32_t ADDINT;        /*!< RCU Additional clock interrupt register, Address offset: 0xCC */
       uint32_t RESERVED3[4];  /*!< Reserved */
  __IO uint32_t ADDAPB1RST;    /*!< RCU APB1 additional reset register,      Address offset: 0xE0 */
  __IO uint32_t ADDAPB1EN;     /*!< RCU APB1 additional enable register,     Address offset: 0xE4 */
} RCU_TypeDef;

/* RCU definitions */
#define RCU                            ((RCU_TypeDef *) RCU_BASE)            /*!< RCU base address */

/* bits definitions */
/* RCU_CTL */
#define RCU_CTL_IRC8MEN_Pos            (0U)
#define RCU_CTL_IRC8MEN_Msk            (0x1UL << RCU_CTL_IRC8MEN_Pos)        /*!< 0x00000001 */
#define RCU_CTL_IRC8MEN                RCU_CTL_IRC8MEN_Msk                   /*!< Internal high speed oscillator enable */
#define RCU_CTL_IRC8MSTB_Pos           (1U)
#define RCU_CTL_IRC8MSTB_Msk           (0x1UL << RCU_CTL_IRC8MSTB_Pos)       /*!< 0x00000002 */
#define RCU_CTL_IRC8MSTB               RCU_CTL_IRC8MSTB_Msk                  /*!< IRC8M high speed internal oscillator stabilization flag */

#define RCU_CTL_IRC8MADJ_Pos           (3U)
#define RCU_CTL_IRC8MADJ_Msk           (0x1FUL << RCU_CTL_IRC8MADJ_Pos)      /*!< 0x000000F8 */
#define RCU_CTL_IRC8MADJ               RCU_CTL_IRC8MADJ_Msk                  /*!< High speed internal oscillator clock trim adjust value */
#define RCU_CTL_IRC8MADJ_0             (0x01UL << RCU_CTL_IRC8MADJ_Pos)      /*!< 0x00000008 */
#define RCU_CTL_IRC8MADJ_1             (0x02UL << RCU_CTL_IRC8MADJ_Pos)      /*!< 0x00000010 */
#define RCU_CTL_IRC8MADJ_2             (0x04UL << RCU_CTL_IRC8MADJ_Pos)      /*!< 0x00000020 */
#define RCU_CTL_IRC8MADJ_3             (0x08UL << RCU_CTL_IRC8MADJ_Pos)      /*!< 0x00000040 */
#define RCU_CTL_IRC8MADJ_4             (0x10UL << RCU_CTL_IRC8MADJ_Pos)      /*!< 0x00000080 */

#define RCU_CTL_IRC8MCALIB_Pos         (8U)
#define RCU_CTL_IRC8MCALIB_Msk         (0xFFUL << RCU_CTL_IRC8MCALIB_Pos)    /*!< 0x0000FF00 */
#define RCU_CTL_IRC8MCALIB             RCU_CTL_IRC8MCALIB_Msk                /*!< High speed internal oscillator calibration value register */
#define RCU_CTL_IRC8MCALIB_0           (0x01UL << RCU_CTL_IRC8MCALIB_Pos)    /*!< 0x00000100 */
#define RCU_CTL_IRC8MCALIB_1           (0x02UL << RCU_CTL_IRC8MCALIB_Pos)    /*!< 0x00000200 */
#define RCU_CTL_IRC8MCALIB_2           (0x04UL << RCU_CTL_IRC8MCALIB_Pos)    /*!< 0x00000400 */
#define RCU_CTL_IRC8MCALIB_3           (0x08UL << RCU_CTL_IRC8MCALIB_Pos)    /*!< 0x00000800 */
#define RCU_CTL_IRC8MCALIB_4           (0x10UL << RCU_CTL_IRC8MCALIB_Pos)    /*!< 0x00001000 */
#define RCU_CTL_IRC8MCALIB_5           (0x20UL << RCU_CTL_IRC8MCALIB_Pos)    /*!< 0x00002000 */
#define RCU_CTL_IRC8MCALIB_6           (0x40UL << RCU_CTL_IRC8MCALIB_Pos)    /*!< 0x00004000 */
#define RCU_CTL_IRC8MCALIB_7           (0x80UL << RCU_CTL_IRC8MCALIB_Pos)    /*!< 0x00008000 */

#define RCU_CTL_HXTALEN_Pos            (16U)
#define RCU_CTL_HXTALEN_Msk            (0x1UL << RCU_CTL_HXTALEN_Pos)        /*!< 0x00010000 */
#define RCU_CTL_HXTALEN                RCU_CTL_HXTALEN_Msk                   /*!< External high speed oscillator enable */
#define RCU_CTL_HXTALSTB_Pos           (17U)
#define RCU_CTL_HXTALSTB_Msk           (0x1UL << RCU_CTL_HXTALSTB_Pos)       /*!< 0x00020000 */
#define RCU_CTL_HXTALSTB               RCU_CTL_HXTALSTB_Msk                  /*!< External crystal oscillator clock stabilization flag */
#define RCU_CTL_HXTALBPS_Pos           (18U)
#define RCU_CTL_HXTALBPS_Msk           (0x1UL << RCU_CTL_HXTALBPS_Pos)       /*!< 0x00040000 */
#define RCU_CTL_HXTALBPS               RCU_CTL_HXTALBPS_Msk                  /*!< External crystal oscillator clock bypass mode enable */
#define RCU_CTL_CKMEN_Pos              (19U)
#define RCU_CTL_CKMEN_Msk              (0x1UL << RCU_CTL_CKMEN_Pos)          /*!< 0x00080000 */
#define RCU_CTL_CKMEN                  RCU_CTL_CKMEN_Msk                     /*!< HXTAL clock monitor enable */
#define RCU_CTL_PLLEN_Pos              (24U)
#define RCU_CTL_PLLEN_Msk              (0x1UL << RCU_CTL_PLLEN_Pos)          /*!< 0x01000000 */
#define RCU_CTL_PLLEN                  RCU_CTL_PLLEN_Msk                     /*!< PLL enable */
#define RCU_CTL_PLLSTB_Pos             (25U)
#define RCU_CTL_PLLSTB_Msk             (0x1UL << RCU_CTL_PLLSTB_Pos)         /*!< 0x02000000 */
#define RCU_CTL_PLLSTB                 RCU_CTL_PLLSTB_Msk                    /*!< PLL clock stabilization flag */
#define RCU_CTL_PLL1EN_Pos             (26U)
#define RCU_CTL_PLL1EN_Msk             (0x1UL << RCU_CTL_PLL1EN_Pos)         /*!< 0x04000000 */
#define RCU_CTL_PLL1EN                 RCU_CTL_PLL1EN_Msk                    /*!< PLL1 enable */
#define RCU_CTL_PLL1STB_Pos            (27U)
#define RCU_CTL_PLL1STB_Msk            (0x1UL << RCU_CTL_PLL1STB_Pos)        /*!< 0x08000000 */
#define RCU_CTL_PLL1STB                RCU_CTL_PLL1STB_Msk                   /*!< PLL1 clock stabilization flag */
#define RCU_CTL_PLL2EN_Pos             (28U)
#define RCU_CTL_PLL2EN_Msk             (0x1UL << RCU_CTL_PLL2EN_Pos)         /*!< 0x10000000 */
#define RCU_CTL_PLL2EN                 RCU_CTL_PLL2EN_Msk                    /*!< PLL2 enable */
#define RCU_CTL_PLL2STB_Pos            (29U)
#define RCU_CTL_PLL2STB_Msk            (0x1UL << RCU_CTL_PLL2STB_Pos)        /*!< 0x20000000 */
#define RCU_CTL_PLL2STB                RCU_CTL_PLL2STB_Msk                   /*!< PLL2 clock stabilization flag */

/* RCU_CFG0 */
#define RCU_CFG0_SCS_Pos               (0U)
#define RCU_CFG0_SCS_Msk               (0x3UL << RCU_CFG0_SCS_Pos)           /*!< 0x00000003 */
#define RCU_CFG0_SCS                   RCU_CFG0_SCS_Msk                      /*!< SCS[1:0] bits (System clock Switch) */
#define RCU_CFG0_SCS_0                 (0x1UL << RCU_CFG0_SCS_Pos)           /*!< 0x00000001 */
#define RCU_CFG0_SCS_1                 (0x2UL << RCU_CFG0_SCS_Pos)           /*!< 0x00000002 */
#define RCU_CFG0_SCS_IRC8M             (0x0UL << RCU_CFG0_SCS_Pos)           /*!< Select CK_IRC8M as the CK_SYS source */
#define RCU_CFG0_SCS_HXTAL             (0x1UL << RCU_CFG0_SCS_Pos)           /*!< Select CK_HXTAL as the CK_SYS source */
#define RCU_CFG0_SCS_PLL               (0x2UL << RCU_CFG0_SCS_Pos)           /*!< Select CK_PLL as the CK_SYS source */

#define RCU_CFG0_SCSS_Pos              (2U)
#define RCU_CFG0_SCSS_Msk              (0x3UL << RCU_CFG0_SCSS_Pos)          /*!< 0x0000000C */
#define RCU_CFG0_SCSS                  RCU_CFG0_SCSS_Msk                     /*!< SCSS[1:0] bits (System Clock Switch Status) */
#define RCU_CFG0_SCSS_0                (0x1UL << RCU_CFG0_SCSS_Pos)          /*!< 0x00000004 */
#define RCU_CFG0_SCSS_1                (0x2UL << RCU_CFG0_SCSS_Pos)          /*!< 0x00000008 */
#define RCU_CFG0_SCSS_IRC8M            (0x0UL << RCU_CFG0_SCSS_Pos)          /*!< Select CK_IRC8M as the CK_SYS source */
#define RCU_CFG0_SCSS_HXTAL            (0x1UL << RCU_CFG0_SCSS_Pos)          /*!< Select CK_HXTAL as the CK_SYS source */
#define RCU_CFG0_SCSS_PLL              (0x2UL << RCU_CFG0_SCSS_Pos)          /*!< Select CK_PLL as the CK_SYS source */

#define RCU_CFG0_AHBPSC_Pos            (4U)
#define RCU_CFG0_AHBPSC_Msk            (0xFUL << RCU_CFG0_AHBPSC_Pos)        /*!< 0x000000F0 */
#define RCU_CFG0_AHBPSC                RCU_CFG0_AHBPSC_Msk                   /*!< AHBPSC[3:0] bits (AHB prescaler selection) */
#define RCU_CFG0_AHBPSC_0              (0x1UL << RCU_CFG0_AHBPSC_Pos)        /*!< 0x00000010 */
#define RCU_CFG0_AHBPSC_1              (0x2UL << RCU_CFG0_AHBPSC_Pos)        /*!< 0x00000020 */
#define RCU_CFG0_AHBPSC_2              (0x4UL << RCU_CFG0_AHBPSC_Pos)        /*!< 0x00000040 */
#define RCU_CFG0_AHBPSC_3              (0x8UL << RCU_CFG0_AHBPSC_Pos)        /*!< 0x00000080 */
#define RCU_CFG0_AHBPSC_DIV1           (0x0UL << RCU_CFG0_AHBPSC_Pos)        /*!< CK_SYS not divided */
#define RCU_CFG0_AHBPSC_DIV2           (0x8UL << RCU_CFG0_AHBPSC_Pos)        /*!< CK_SYS divided by 2 */
#define RCU_CFG0_AHBPSC_DIV4           (0x9UL << RCU_CFG0_AHBPSC_Pos)        /*!< CK_SYS divided by 4 */
#define RCU_CFG0_AHBPSC_DIV8           (0xAUL << RCU_CFG0_AHBPSC_Pos)        /*!< CK_SYS divided by 8 */
#define RCU_CFG0_AHBPSC_DIV16          (0xBUL << RCU_CFG0_AHBPSC_Pos)        /*!< CK_SYS divided by 16 */
#define RCU_CFG0_AHBPSC_DIV64          (0xCUL << RCU_CFG0_AHBPSC_Pos)        /*!< CK_SYS divided by 64 */
#define RCU_CFG0_AHBPSC_DIV128         (0xDUL << RCU_CFG0_AHBPSC_Pos)        /*!< CK_SYS divided by 128 */
#define RCU_CFG0_AHBPSC_DIV256         (0xEUL << RCU_CFG0_AHBPSC_Pos)        /*!< CK_SYS divided by 256 */
#define RCU_CFG0_AHBPSC_DIV512         (0xFUL << RCU_CFG0_AHBPSC_Pos)        /*!< CK_SYS divided by 512 */

#define RCU_CFG0_APB1PSC_Pos           (8U)
#define RCU_CFG0_APB1PSC_Msk           (0x7UL << RCU_CFG0_APB1PSC_Pos)       /*!< 0x00000700 */
#define RCU_CFG0_APB1PSC               RCU_CFG0_APB1PSC_Msk                  /*!< APB1PSC[2:0] bits (APB1 prescaler selection) */
#define RCU_CFG0_APB1PSC_0             (0x1UL << RCU_CFG0_APB1PSC_Pos)       /*!< 0x00000100 */
#define RCU_CFG0_APB1PSC_1             (0x2UL << RCU_CFG0_APB1PSC_Pos)       /*!< 0x00000200 */
#define RCU_CFG0_APB1PSC_2             (0x4UL << RCU_CFG0_APB1PSC_Pos)       /*!< 0x00000400 */
#define RCU_CFG0_APB1PSC_DIV1          (0x0UL << RCU_CFG0_APB1PSC_Pos)       /*!< CK_AHB not divided */
#define RCU_CFG0_APB1PSC_DIV2          (0x4UL << RCU_CFG0_APB1PSC_Pos)       /*!< CK_AHB divided by 2 */
#define RCU_CFG0_APB1PSC_DIV4          (0x5UL << RCU_CFG0_APB1PSC_Pos)       /*!< CK_AHB divided by 4 */
#define RCU_CFG0_APB1PSC_DIV8          (0x6UL << RCU_CFG0_APB1PSC_Pos)       /*!< CK_AHB divided by 8 */
#define RCU_CFG0_APB1PSC_DIV16         (0x7UL << RCU_CFG0_APB1PSC_Pos)       /*!< CK_AHB divided by 16 */

#define RCU_CFG0_APB2PSC_Pos           (11U)
#define RCU_CFG0_APB2PSC_Msk           (0x7UL << RCU_CFG0_APB2PSC_Pos)       /*!< 0x00003800 */
#define RCU_CFG0_APB2PSC               RCU_CFG0_APB2PSC_Msk                  /*!< APB2PSC[2:0] bits (APB2 prescaler selection) */
#define RCU_CFG0_APB2PSC_0             (0x1UL << RCU_CFG0_APB2PSC_Pos)       /*!< 0x00000800 */
#define RCU_CFG0_APB2PSC_1             (0x2UL << RCU_CFG0_APB2PSC_Pos)       /*!< 0x00001000 */
#define RCU_CFG0_APB2PSC_2             (0x4UL << RCU_CFG0_APB2PSC_Pos)       /*!< 0x00002000 */
#define RCU_CFG0_APB2PSC_DIV1          (0x0UL << RCU_CFG0_APB2PSC_Pos)       /*!< CK_AHB not divided */
#define RCU_CFG0_APB2PSC_DIV2          (0x4UL << RCU_CFG0_APB2PSC_Pos)       /*!< CK_AHB divided by 2 */
#define RCU_CFG0_APB2PSC_DIV4          (0x5UL << RCU_CFG0_APB2PSC_Pos)       /*!< CK_AHB divided by 4 */
#define RCU_CFG0_APB2PSC_DIV8          (0x6UL << RCU_CFG0_APB2PSC_Pos)       /*!< CK_AHB divided by 8 */
#define RCU_CFG0_APB2PSC_DIV16         (0x7UL << RCU_CFG0_APB2PSC_Pos)       /*!< CK_AHB divided by 16 */

#define RCU_CFG0_ADCPSC_0              (0x1UL << 14U)                        /*!< 0x00004000 */
#define RCU_CFG0_ADCPSC_1              (0x2UL << 14U)                        /*!< 0x00008000 */
#define RCU_CFG0_ADCPSC_2              (0x1UL << 28U)                        /*!< 0x10000000 */
#define RCU_CFG0_ADCPSC_Msk            (0x1000C000UL)                        /*!< 0x1000C000 */
#define RCU_CFG0_ADCPSC                RCU_CFG0_ADCPSC_Msk                   /*!< ADCPSC[2:0] bits (ADC prescaler selection) */

#define RCU_CFG0_PLLSEL_Pos            (16U)
#define RCU_CFG0_PLLSEL_Msk            (0x1UL << RCU_CFG0_PLLSEL_Pos)        /*!< 0x00010000 */
#define RCU_CFG0_PLLSEL                RCU_CFG0_PLLSEL_Msk                   /*!< PLL clock source selection */

#define RCU_CFG0_PREDV0_LSB_Pos        (17U)
#define RCU_CFG0_PREDV0_LSB_Msk        (0x1UL << RCU_CFG0_PREDV0_LSB_Pos)    /*!< 0x00020000 */
#define RCU_CFG0_PREDV0_LSB            RCU_CFG0_PREDV0_LSB_Msk               /*!< The LSB of PREDV0 division factor */

#define RCU_CFG0_PLLMF_0               (0x1UL << 18U)                        /*!< 0x00040000 */
#define RCU_CFG0_PLLMF_1               (0x2UL << 18U)                        /*!< 0x00080000 */
#define RCU_CFG0_PLLMF_2               (0x4UL << 18U)                        /*!< 0x00100000 */
#define RCU_CFG0_PLLMF_3               (0x8UL << 18U)                        /*!< 0x00200000 */
#define RCU_CFG0_PLLMF_4               (0x1UL << 29U)                        /*!< 0x20000000 */
#define RCU_CFG0_PLLMF_Msk             (0x203C0000UL)                        /*!< 0x203C0000 */
#define RCU_CFG0_PLLMF                 RCU_CFG0_PLLMF_Msk                    /*!< PLLMF[4:0] bits (The PLL clock multiplication factor) */
#define RCU_CFG0_PLLMF2                ((0x0UL << 29U) | (0x0UL << 18U))     /*!< PLL source clock x 2 */
#define RCU_CFG0_PLLMF3                ((0x0UL << 29U) | (0x1UL << 18U))     /*!< PLL source clock x 3 */
#define RCU_CFG0_PLLMF4                ((0x0UL << 29U) | (0x2UL << 18U))     /*!< PLL source clock x 4 */
#define RCU_CFG0_PLLMF5                ((0x0UL << 29U) | (0x3UL << 18U))     /*!< PLL source clock x 5 */
#define RCU_CFG0_PLLMF6                ((0x0UL << 29U) | (0x4UL << 18U))     /*!< PLL source clock x 6 */
#define RCU_CFG0_PLLMF7                ((0x0UL << 29U) | (0x5UL << 18U))     /*!< PLL source clock x 7 */
#define RCU_CFG0_PLLMF8                ((0x0UL << 29U) | (0x6UL << 18U))     /*!< PLL source clock x 8 */
#define RCU_CFG0_PLLMF9                ((0x0UL << 29U) | (0x7UL << 18U))     /*!< PLL source clock x 9 */
#define RCU_CFG0_PLLMF10               ((0x0UL << 29U) | (0x8UL << 18U))     /*!< PLL source clock x 10 */
#define RCU_CFG0_PLLMF11               ((0x0UL << 29U) | (0x9UL << 18U))     /*!< PLL source clock x 11 */
#define RCU_CFG0_PLLMF12               ((0x0UL << 29U) | (0xAUL << 18U))     /*!< PLL source clock x 12 */
#define RCU_CFG0_PLLMF13               ((0x0UL << 29U) | (0xBUL << 18U))     /*!< PLL source clock x 13 */
#define RCU_CFG0_PLLMF14               ((0x0UL << 29U) | (0xCUL << 18U))     /*!< PLL source clock x 14 */
#define RCU_CFG0_PLLMF6_5              ((0x0UL << 29U) | (0xDUL << 18U))     /*!< PLL source clock x 6.5 */
#define RCU_CFG0_PLLMF16               ((0x0UL << 29U) | (0xEUL << 18U))     /*!< PLL source clock x 16 */
#define RCU_CFG0_PLLMF17               ((0x1UL << 29U) | (0x0UL << 18U))     /*!< PLL source clock x 17 */
#define RCU_CFG0_PLLMF18               ((0x1UL << 29U) | (0x1UL << 18U))     /*!< PLL source clock x 18 */
#define RCU_CFG0_PLLMF19               ((0x1UL << 29U) | (0x2UL << 18U))     /*!< PLL source clock x 19 */
#define RCU_CFG0_PLLMF20               ((0x1UL << 29U) | (0x3UL << 18U))     /*!< PLL source clock x 20 */
#define RCU_CFG0_PLLMF21               ((0x1UL << 29U) | (0x4UL << 18U))     /*!< PLL source clock x 21 */
#define RCU_CFG0_PLLMF22               ((0x1UL << 29U) | (0x5UL << 18U))     /*!< PLL source clock x 22 */
#define RCU_CFG0_PLLMF23               ((0x1UL << 29U) | (0x6UL << 18U))     /*!< PLL source clock x 23 */
#define RCU_CFG0_PLLMF24               ((0x1UL << 29U) | (0x7UL << 18U))     /*!< PLL source clock x 24 */
#define RCU_CFG0_PLLMF25               ((0x1UL << 29U) | (0x8UL << 18U))     /*!< PLL source clock x 25 */
#define RCU_CFG0_PLLMF26               ((0x1UL << 29U) | (0x9UL << 18U))     /*!< PLL source clock x 26 */
#define RCU_CFG0_PLLMF27               ((0x1UL << 29U) | (0xAUL << 18U))     /*!< PLL source clock x 27 */
#define RCU_CFG0_PLLMF28               ((0x1UL << 29U) | (0xBUL << 18U))     /*!< PLL source clock x 28 */
#define RCU_CFG0_PLLMF29               ((0x1UL << 29U) | (0xCUL << 18U))     /*!< PLL source clock x 29 */
#define RCU_CFG0_PLLMF30               ((0x1UL << 29U) | (0xDUL << 18U))     /*!< PLL source clock x 30 */
#define RCU_CFG0_PLLMF31               ((0x1UL << 29U) | (0xEUL << 18U))     /*!< PLL source clock x 31 */

#define RCU_CFG0_USBFSPSC_0            (0x1UL << 22U)                        /*!< 0x00400000 */
#define RCU_CFG0_USBFSPSC_1            (0x2UL << 22U)                        /*!< 0x00800000 */
#define RCU_CFG0_USBFSPSC_2            (0x1UL << 31U)                        /*!< 0x80000000 */
#define RCU_CFG0_USBFSPSC_Msk          (0x80C00000UL)                        /*!< 0x80C00000 */
#define RCU_CFG0_USBFSPSC              RCU_CFG0_USBFSPSC_Msk                 /*!< USBFSPSC[2:0] bits (USBFS clock prescaler selection) */

#define RCU_CFG0_CKOUT0SEL_Pos         (24U)
#define RCU_CFG0_CKOUT0SEL_Msk         (0xFUL << RCU_CFG0_CKOUT0SEL_Pos)     /*!< 0x0F000000 */
#define RCU_CFG0_CKOUT0SEL             RCU_CFG0_CKOUT0SEL_Msk                /*!< CKOUT0SEL[3:0] bits (CKOUT0 clock source selection) */
#define RCU_CFG0_CKOUT0SEL_0           (0x1UL << RCU_CFG0_CKOUT0SEL_Pos)     /*!< 0x01000000 */
#define RCU_CFG0_CKOUT0SEL_1           (0x2UL << RCU_CFG0_CKOUT0SEL_Pos)     /*!< 0x02000000 */
#define RCU_CFG0_CKOUT0SEL_2           (0x4UL << RCU_CFG0_CKOUT0SEL_Pos)     /*!< 0x04000000 */
#define RCU_CFG0_CKOUT0SEL_3           (0x8UL << RCU_CFG0_CKOUT0SEL_Pos)     /*!< 0x08000000 */
#define RCU_CFG0_CKOUT0SEL_NOCLOCK     (0x1UL << RCU_CFG0_CKOUT0SEL_Pos)     /*!< No clock */
#define RCU_CFG0_CKOUT0SEL_SYS         (0x4UL << RCU_CFG0_CKOUT0SEL_Pos)     /*!< System clock selected as CKOUT0SEL source */
#define RCU_CFG0_CKOUT0SEL_IRC8M       (0x5UL << RCU_CFG0_CKOUT0SEL_Pos)     /*!< High speed 8M Internal oscillator clock selected as CKOUT0SEL source */
#define RCU_CFG0_CKOUT0SEL_HXTAL       (0x6UL << RCU_CFG0_CKOUT0SEL_Pos)     /*!< External high speed oscillator clock selected as CKOUT0SEL source  */
#define RCU_CFG0_CKOUT0SEL_PLL_DIV2    (0x7UL << RCU_CFG0_CKOUT0SEL_Pos)     /*!< (CK_PLL / 2) clock selected as CKOUT0SEL source */
#define RCU_CFG0_CKOUT0SEL_PLL1        (0x8UL << RCU_CFG0_CKOUT0SEL_Pos)     /*!< CK_PLL1 clock selected as CKOUT0SEL source */
#define RCU_CFG0_CKOUT0SEL_PLL2_DIV2   (0x9UL << RCU_CFG0_CKOUT0SEL_Pos)     /*!< (CK_PLL2 / 2) clock selected as CKOUT0SEL source */
#define RCU_CFG0_CKOUT0SEL_PLL2        (0xBUL << RCU_CFG0_CKOUT0SEL_Pos)     /*!< CK_PLL2 clock selected as CKOUT0SEL source */
#define RCU_CFG0_CKOUT0SEL_IRC48M      (0xCUL << RCU_CFG0_CKOUT0SEL_Pos)     /*!< CK_IRC48M clock selected as CKOUT0SEL source */
#define RCU_CFG0_CKOUT0SEL_IRC48M_DIV8 (0xDUL << RCU_CFG0_CKOUT0SEL_Pos)     /*!< (CK_IRC48M / 8) clock selected as CKOUT0SEL source */

/* RCU_INT */
#define RCU_INT_IRC40KSTBIF_Pos        (0U)
#define RCU_INT_IRC40KSTBIF_Msk        (0x1UL << RCU_INT_IRC40KSTBIF_Pos)    /*!< 0x00000001 */
#define RCU_INT_IRC40KSTBIF            RCU_INT_IRC40KSTBIF_Msk               /*!< IRC40K stabilization interrupt flag */
#define RCU_INT_LXTALSTBIF_Pos         (1U)
#define RCU_INT_LXTALSTBIF_Msk         (0x1UL << RCU_INT_LXTALSTBIF_Pos)     /*!< 0x00000002 */
#define RCU_INT_LXTALSTBIF             RCU_INT_LXTALSTBIF_Msk                /*!< LXTAL stabilization interrupt flag */
#define RCU_INT_IRC8MSTBIF_Pos         (2U)
#define RCU_INT_IRC8MSTBIF_Msk         (0x1UL << RCU_INT_IRC8MSTBIF_Pos)     /*!< 0x00000004 */
#define RCU_INT_IRC8MSTBIF             RCU_INT_IRC8MSTBIF_Msk                /*!< IRC8M stabilization interrupt flag */
#define RCU_INT_HXTALSTBIF_Pos         (3U)
#define RCU_INT_HXTALSTBIF_Msk         (0x1UL << RCU_INT_HXTALSTBIF_Pos)     /*!< 0x00000008 */
#define RCU_INT_HXTALSTBIF             RCU_INT_HXTALSTBIF_Msk                /*!< HXTAL stabilization interrupt flag */
#define RCU_INT_PLLSTBIF_Pos           (4U)
#define RCU_INT_PLLSTBIF_Msk           (0x1UL << RCU_INT_PLLSTBIF_Pos)       /*!< 0x00000010 */
#define RCU_INT_PLLSTBIF               RCU_INT_PLLSTBIF_Msk                  /*!< PLL stabilization interrupt flag */
#define RCU_INT_PLL1STBIF_Pos          (5U)
#define RCU_INT_PLL1STBIF_Msk          (0x1UL << RCU_INT_PLL1STBIF_Pos)      /*!< 0x00000020 */
#define RCU_INT_PLL1STBIF              RCU_INT_PLL1STBIF_Msk                 /*!< PLL1 stabilization interrupt flag */
#define RCU_INT_PLL2STBIF_Pos          (6U)
#define RCU_INT_PLL2STBIF_Msk          (0x1UL << RCU_INT_PLL2STBIF_Pos)      /*!< 0x00000040 */
#define RCU_INT_PLL2STBIF              RCU_INT_PLL2STBIF_Msk                 /*!< PLL2 stabilization interrupt flag */
#define RCU_INT_CKMIF_Pos              (7U)
#define RCU_INT_CKMIF_Msk              (0x1UL << RCU_INT_CKMIF_Pos)          /*!< 0x00000080 */
#define RCU_INT_CKMIF                  RCU_INT_CKMIF_Msk                     /*!< HXTAL clock stuck interrupt flag */
#define RCU_INT_IRC40KSTBIE_Pos        (8U)
#define RCU_INT_IRC40KSTBIE_Msk        (0x1UL << RCU_INT_IRC40KSTBIE_Pos)    /*!< 0x00000100 */
#define RCU_INT_IRC40KSTBIE            RCU_INT_IRC40KSTBIE_Msk               /*!< IRC40K stabilization interrupt enable */
#define RCU_INT_LXTALSTBIE_Pos         (9U)
#define RCU_INT_LXTALSTBIE_Msk         (0x1UL << RCU_INT_LXTALSTBIE_Pos)     /*!< 0x00000200 */
#define RCU_INT_LXTALSTBIE             RCU_INT_LXTALSTBIE_Msk                /*!< LXTAL stabilization interrupt enable */
#define RCU_INT_IRC8MSTBIE_Pos         (10U)
#define RCU_INT_IRC8MSTBIE_Msk         (0x1UL << RCU_INT_IRC8MSTBIE_Pos)     /*!< 0x00000400 */
#define RCU_INT_IRC8MSTBIE             RCU_INT_IRC8MSTBIE_Msk                /*!< IRC8M stabilization interrupt enable */
#define RCU_INT_HXTALSTBIE_Pos         (11U)
#define RCU_INT_HXTALSTBIE_Msk         (0x1UL << RCU_INT_HXTALSTBIE_Pos)     /*!< 0x00000800 */
#define RCU_INT_HXTALSTBIE             RCU_INT_HXTALSTBIE_Msk                /*!< HXTAL stabilization interrupt enable */
#define RCU_INT_PLLSTBIE_Pos           (12U)
#define RCU_INT_PLLSTBIE_Msk           (0x1UL << RCU_INT_PLLSTBIE_Pos)       /*!< 0x00001000 */
#define RCU_INT_PLLSTBIE               RCU_INT_PLLSTBIE_Msk                  /*!< PLL stabilization interrupt enable */
#define RCU_INT_PLL1STBIE_Pos          (13U)
#define RCU_INT_PLL1STBIE_Msk          (0x1UL << RCU_INT_PLL1STBIE_Pos)      /*!< 0x00002000 */
#define RCU_INT_PLL1STBIE              RCU_INT_PLL1STBIE_Msk                 /*!< PLL1 stabilization interrupt enable */
#define RCU_INT_PLL2STBIE_Pos          (14U)
#define RCU_INT_PLL2STBIE_Msk          (0x1UL << RCU_INT_PLL2STBIE_Pos)      /*!< 0x00004000 */
#define RCU_INT_PLL2STBIE              RCU_INT_PLL2STBIE_Msk                 /*!< PLL2 stabilization interrupt enable */
#define RCU_INT_IRC40KSTBIC_Pos        (16U)
#define RCU_INT_IRC40KSTBIC_Msk        (0x1UL << RCU_INT_IRC40KSTBIC_Pos)    /*!< 0x00010000 */
#define RCU_INT_IRC40KSTBIC            RCU_INT_IRC40KSTBIC_Msk               /*!< IRC40K stabilization interrupt Clear */
#define RCU_INT_LXTALSTBIC_Pos         (17U)
#define RCU_INT_LXTALSTBIC_Msk         (0x1UL << RCU_INT_LXTALSTBIC_Pos)     /*!< 0x00020000 */
#define RCU_INT_LXTALSTBIC             RCU_INT_LXTALSTBIC_Msk                /*!< LXTAL stabilization interrupt Clear */
#define RCU_INT_IRC8MSTBIC_Pos         (18U)
#define RCU_INT_IRC8MSTBIC_Msk         (0x1UL << RCU_INT_IRC8MSTBIC_Pos)     /*!< 0x00040000 */
#define RCU_INT_IRC8MSTBIC             RCU_INT_IRC8MSTBIC_Msk                /*!< IRC8M stabilization interrupt Clear */
#define RCU_INT_HXTALSTBIC_Pos         (19U)
#define RCU_INT_HXTALSTBIC_Msk         (0x1UL << RCU_INT_HXTALSTBIC_Pos)     /*!< 0x00080000 */
#define RCU_INT_HXTALSTBIC             RCU_INT_HXTALSTBIC_Msk                /*!< HXTAL stabilization interrupt Clear */
#define RCU_INT_PLLSTBIC_Pos           (20U)
#define RCU_INT_PLLSTBIC_Msk           (0x1UL << RCU_INT_PLLSTBIC_Pos)       /*!< 0x00100000 */
#define RCU_INT_PLLSTBIC               RCU_INT_PLLSTBIC_Msk                  /*!< PLL stabilization interrupt Clear */
#define RCU_INT_PLL1STBIC_Pos          (21U)
#define RCU_INT_PLL1STBIC_Msk          (0x1UL << RCU_INT_PLL1STBIC_Pos)      /*!< 0x00200000 */
#define RCU_INT_PLL1STBIC              RCU_INT_PLL1STBIC_Msk                 /*!< PLL1 stabilization interrupt Clear */
#define RCU_INT_PLL2STBIC_Pos          (22U)
#define RCU_INT_PLL2STBIC_Msk          (0x1UL << RCU_INT_PLL2STBIC_Pos)      /*!< 0x00400000 */
#define RCU_INT_PLL2STBIC              RCU_INT_PLL2STBIC_Msk                 /*!< PLL2 stabilization interrupt Clear */
#define RCU_INT_CKMIC_Pos              (23U)
#define RCU_INT_CKMIC_Msk              (0x1UL << RCU_INT_CKMIC_Pos)          /*!< 0x00800000 */
#define RCU_INT_CKMIC                  RCU_INT_CKMIC_Msk                     /*!< HXTAL clock stuck interrupt Clear */

/* RCU_APB2RST */
#define RCU_APB2RST_AFRST_Pos          (0U)
#define RCU_APB2RST_AFRST_Msk          (0x1UL << RCU_APB2RST_AFRST_Pos)      /*!< 0x00000001 */
#define RCU_APB2RST_AFRST              RCU_APB2RST_AFRST_Msk                 /*!< Alternate function I/O reset */
#define RCU_APB2RST_PARST_Pos          (2U)
#define RCU_APB2RST_PARST_Msk          (0x1UL << RCU_APB2RST_PARST_Pos)      /*!< 0x00000004 */
#define RCU_APB2RST_PARST              RCU_APB2RST_PARST_Msk                 /*!< GPIO port A reset */
#define RCU_APB2RST_PBRST_Pos          (3U)
#define RCU_APB2RST_PBRST_Msk          (0x1UL << RCU_APB2RST_PBRST_Pos)      /*!< 0x00000008 */
#define RCU_APB2RST_PBRST              RCU_APB2RST_PBRST_Msk                 /*!< GPIO port B reset */
#define RCU_APB2RST_PCRST_Pos          (4U)
#define RCU_APB2RST_PCRST_Msk          (0x1UL << RCU_APB2RST_PCRST_Pos)      /*!< 0x00000010 */
#define RCU_APB2RST_PCRST              RCU_APB2RST_PCRST_Msk                 /*!< GPIO port C reset */
#define RCU_APB2RST_PDRST_Pos          (5U)
#define RCU_APB2RST_PDRST_Msk          (0x1UL << RCU_APB2RST_PDRST_Pos)      /*!< 0x00000020 */
#define RCU_APB2RST_PDRST              RCU_APB2RST_PDRST_Msk                 /*!< GPIO port D reset */
#define RCU_APB2RST_PERST_Pos          (6U)
#define RCU_APB2RST_PERST_Msk          (0x1UL << RCU_APB2RST_PERST_Pos)      /*!< 0x00000040 */
#define RCU_APB2RST_PERST              RCU_APB2RST_PERST_Msk                 /*!< GPIO port E reset */
#define RCU_APB2RST_ADC0RST_Pos        (9U)
#define RCU_APB2RST_ADC0RST_Msk        (0x1UL << RCU_APB2RST_ADC0RST_Pos)    /*!< 0x00000200 */
#define RCU_APB2RST_ADC0RST            RCU_APB2RST_ADC0RST_Msk               /*!< ADC0 reset */
#define RCU_APB2RST_ADC1RST_Pos        (10U)
#define RCU_APB2RST_ADC1RST_Msk        (0x1UL << RCU_APB2RST_ADC1RST_Pos)    /*!< 0x00000400 */
#define RCU_APB2RST_ADC1RST            RCU_APB2RST_ADC1RST_Msk               /*!< ADC1 reset */
#define RCU_APB2RST_TIMER0RST_Pos      (11U)
#define RCU_APB2RST_TIMER0RST_Msk      (0x1UL << RCU_APB2RST_TIMER0RST_Pos)  /*!< 0x00000800 */
#define RCU_APB2RST_TIMER0RST          RCU_APB2RST_TIMER0RST_Msk             /*!< TIMER0 reset */
#define RCU_APB2RST_SPI0RST_Pos        (12U)
#define RCU_APB2RST_SPI0RST_Msk        (0x1UL << RCU_APB2RST_SPI0RST_Pos)    /*!< 0x00001000 */
#define RCU_APB2RST_SPI0RST            RCU_APB2RST_SPI0RST_Msk               /*!< SPI0 reset */
#define RCU_APB2RST_TIMER7RST_Pos      (13U)
#define RCU_APB2RST_TIMER7RST_Msk      (0x1UL << RCU_APB2RST_TIMER7RST_Pos)  /*!< 0x00000800 */
#define RCU_APB2RST_TIMER7RST          RCU_APB2RST_TIMER7RST_Msk             /*!< TIMER7 reset */
#define RCU_APB2RST_USART0RST_Pos      (14U)
#define RCU_APB2RST_USART0RST_Msk      (0x1UL << RCU_APB2RST_USART0RST_Pos)  /*!< 0x00004000 */
#define RCU_APB2RST_USART0RST          RCU_APB2RST_USART0RST_Msk             /*!< USART0 reset */
#define RCU_APB2RST_TIMER8RST_Pos      (19U)
#define RCU_APB2RST_TIMER8RST_Msk      (0x1UL << RCU_APB2RST_TIMER8RST_Pos)  /*!< 0x00000800 */
#define RCU_APB2RST_TIMER8RST          RCU_APB2RST_TIMER8RST_Msk             /*!< TIMER8 reset */
#define RCU_APB2RST_TIMER9RST_Pos      (20U)
#define RCU_APB2RST_TIMER9RST_Msk      (0x1UL << RCU_APB2RST_TIMER9RST_Pos)  /*!< 0x00000800 */
#define RCU_APB2RST_TIMER9RST          RCU_APB2RST_TIMER9RST_Msk             /*!< TIMER9 reset */
#define RCU_APB2RST_TIMER10RST_Pos     (21U)
#define RCU_APB2RST_TIMER10RST_Msk     (0x1UL << RCU_APB2RST_TIMER10RST_Pos) /*!< 0x00000800 */
#define RCU_APB2RST_TIMER10RST         RCU_APB2RST_TIMER10RST_Msk            /*!< TIMER10 reset */

/* RCU_APB1RST */
#define RCU_APB1RST_TIMER1RST_Pos      (0U)
#define RCU_APB1RST_TIMER1RST_Msk      (0x1UL << RCU_APB1RST_TIMER1RST_Pos)  /*!< 0x00000001 */
#define RCU_APB1RST_TIMER1RST          RCU_APB1RST_TIMER1RST_Msk             /*!< TIMER1 reset */
#define RCU_APB1RST_TIMER2RST_Pos      (1U)
#define RCU_APB1RST_TIMER2RST_Msk      (0x1UL << RCU_APB1RST_TIMER2RST_Pos)  /*!< 0x00000002 */
#define RCU_APB1RST_TIMER2RST          RCU_APB1RST_TIMER2RST_Msk             /*!< TIMER2 reset */
#define RCU_APB1RST_TIMER3RST_Pos      (2U)
#define RCU_APB1RST_TIMER3RST_Msk      (0x1UL << RCU_APB1RST_TIMER3RST_Pos)  /*!< 0x00000004 */
#define RCU_APB1RST_TIMER3RST          RCU_APB1RST_TIMER3RST_Msk             /*!< TIMER3 reset */
#define RCU_APB1RST_TIMER4RST_Pos      (3U)
#define RCU_APB1RST_TIMER4RST_Msk      (0x1UL << RCU_APB1RST_TIMER4RST_Pos)  /*!< 0x00000008 */
#define RCU_APB1RST_TIMER4RST          RCU_APB1RST_TIMER4RST_Msk             /*!< TIMER4 reset */
#define RCU_APB1RST_TIMER5RST_Pos      (4U)
#define RCU_APB1RST_TIMER5RST_Msk      (0x1UL << RCU_APB1RST_TIMER5RST_Pos)  /*!< 0x00000010 */
#define RCU_APB1RST_TIMER5RST          RCU_APB1RST_TIMER5RST_Msk             /*!< TIMER5 reset */
#define RCU_APB1RST_TIMER6RST_Pos      (5U)
#define RCU_APB1RST_TIMER6RST_Msk      (0x1UL << RCU_APB1RST_TIMER6RST_Pos)  /*!< 0x00000020 */
#define RCU_APB1RST_TIMER6RST          RCU_APB1RST_TIMER6RST_Msk             /*!< TIMER6 reset */
#define RCU_APB1RST_TIMER11RST_Pos     (6U)
#define RCU_APB1RST_TIMER11RST_Msk     (0x1UL << RCU_APB1RST_TIMER11RST_Pos) /*!< 0x00000040 */
#define RCU_APB1RST_TIMER11RST         RCU_APB1RST_TIMER11RST_Msk            /*!< TIMER11 reset */
#define RCU_APB1RST_TIMER12RST_Pos     (7U)
#define RCU_APB1RST_TIMER12RST_Msk     (0x1UL << RCU_APB1RST_TIMER12RST_Pos) /*!< 0x00000080 */
#define RCU_APB1RST_TIMER12RST         RCU_APB1RST_TIMER12RST_Msk            /*!< TIMER12 reset */
#define RCU_APB1RST_TIMER13RST_Pos     (8U)
#define RCU_APB1RST_TIMER13RST_Msk     (0x1UL << RCU_APB1RST_TIMER13RST_Pos) /*!< 0x00000100 */
#define RCU_APB1RST_TIMER13RST         RCU_APB1RST_TIMER13RST_Msk            /*!< TIMER13 reset */
#define RCU_APB1RST_WWDGTRST_Pos       (11U)
#define RCU_APB1RST_WWDGTRST_Msk       (0x1UL << RCU_APB1RST_WWDGTRST_Pos)   /*!< 0x00000800 */
#define RCU_APB1RST_WWDGTRST           RCU_APB1RST_WWDGTRST_Msk              /*!< WWDGT reset */
#define RCU_APB1RST_SPI1RST_Pos        (14U)
#define RCU_APB1RST_SPI1RST_Msk        (0x1UL << RCU_APB1RST_SPI1RST_Pos)    /*!< 0x00004000 */
#define RCU_APB1RST_SPI1RST            RCU_APB1RST_SPI1RST_Msk               /*!< SPI1 reset */
#define RCU_APB1RST_SPI2RST_Pos        (15U)
#define RCU_APB1RST_SPI2RST_Msk        (0x1UL << RCU_APB1RST_SPI2RST_Pos)    /*!< 0x00008000 */
#define RCU_APB1RST_SPI2RST            RCU_APB1RST_SPI2RST_Msk               /*!< SPI2 reset */
#define RCU_APB1RST_USART1RST_Pos      (17U)
#define RCU_APB1RST_USART1RST_Msk      (0x1UL << RCU_APB1RST_USART1RST_Pos)  /*!< 0x00020000 */
#define RCU_APB1RST_USART1RST          RCU_APB1RST_USART1RST_Msk             /*!< USART1 reset */
#define RCU_APB1RST_USART2RST_Pos      (18U)
#define RCU_APB1RST_USART2RST_Msk      (0x1UL << RCU_APB1RST_USART2RST_Pos)  /*!< 0x00040000 */
#define RCU_APB1RST_USART2RST          RCU_APB1RST_USART2RST_Msk             /*!< USART2 reset */
#define RCU_APB1RST_UART3RST_Pos       (19U)
#define RCU_APB1RST_UART3RST_Msk       (0x1UL << RCU_APB1RST_UART3RST_Pos)   /*!< 0x00080000 */
#define RCU_APB1RST_UART3RST           RCU_APB1RST_UART3RST_Msk              /*!< UART3 reset */
#define RCU_APB1RST_UART4RST_Pos       (20U)
#define RCU_APB1RST_UART4RST_Msk       (0x1UL << RCU_APB1RST_UART4RST_Pos)   /*!< 0x00100000 */
#define RCU_APB1RST_UART4RST           RCU_APB1RST_UART4RST_Msk              /*!< UART4 reset */
#define RCU_APB1RST_I2C0RST_Pos        (21U)
#define RCU_APB1RST_I2C0RST_Msk        (0x1UL << RCU_APB1RST_I2C0RST_Pos)    /*!< 0x00200000 */
#define RCU_APB1RST_I2C0RST            RCU_APB1RST_I2C0RST_Msk               /*!< I2C0 reset */
#define RCU_APB1RST_I2C1RST_Pos        (22U)
#define RCU_APB1RST_I2C1RST_Msk        (0x1UL << RCU_APB1RST_I2C1RST_Pos)    /*!< 0x00400000 */
#define RCU_APB1RST_I2C1RST            RCU_APB1RST_I2C1RST_Msk               /*!< I2C1 reset */
#define RCU_APB1RST_BKPIRST_Pos        (27U)
#define RCU_APB1RST_BKPIRST_Msk        (0x1UL << RCU_APB1RST_BKPIRST_Pos)    /*!< 0x08000000 */
#define RCU_APB1RST_BKPIRST            RCU_APB1RST_BKPIRST_Msk               /*!< Backup interface reset */
#define RCU_APB1RST_PMURST_Pos         (28U)
#define RCU_APB1RST_PMURST_Msk         (0x1UL << RCU_APB1RST_PMURST_Pos)     /*!< 0x10000000 */
#define RCU_APB1RST_PMURST             RCU_APB1RST_PMURST_Msk                /*!< PMU reset */
#define RCU_APB1RST_DACRST_Pos         (29U)
#define RCU_APB1RST_DACRST_Msk         (0x1UL << RCU_APB1RST_DACRST_Pos)     /*!< 0x20000000 */
#define RCU_APB1RST_DACRST             RCU_APB1RST_DACRST_Msk                /*!< DAC reset */

/* RCU_AHBEN */
#define RCU_AHBEN_DMA0EN_Pos           (0U)
#define RCU_AHBEN_DMA0EN_Msk           (0x1UL << RCU_AHBEN_DMA0EN_Pos)       /*!< 0x00000001 */
#define RCU_AHBEN_DMA0EN               RCU_AHBEN_DMA0EN_Msk                  /*!< DMA0 clock enable */
#define RCU_AHBEN_DMA1EN_Pos           (1U)
#define RCU_AHBEN_DMA1EN_Msk           (0x1UL << RCU_AHBEN_DMA1EN_Pos)       /*!< 0x00000002 */
#define RCU_AHBEN_DMA1EN               RCU_AHBEN_DMA1EN_Msk                  /*!< DMA1 clock enable */
#define RCU_AHBEN_SRAMSEN_Pos          (2U)
#define RCU_AHBEN_SRAMSEN_Msk          (0x1UL << RCU_AHBEN_SRAMSEN_Pos)      /*!< 0x00000004 */
#define RCU_AHBEN_SRAMSEN              RCU_AHBEN_SRAMSEN_Msk                 /*!< SRAM clock enable when sleep mode */
#define RCU_AHBEN_FMCSPEN_Pos          (4U)
#define RCU_AHBEN_FMCSPEN_Msk          (0x1UL << RCU_AHBEN_FMCSPEN_Pos)      /*!< 0x00000010 */
#define RCU_AHBEN_FMCSPEN              RCU_AHBEN_FMCSPEN_Msk                 /*!< FMC clock enable when sleep mode */
#define RCU_AHBEN_CRCEN_Pos            (6U)
#define RCU_AHBEN_CRCEN_Msk            (0x1UL << RCU_AHBEN_CRCEN_Pos)        /*!< 0x00000040 */
#define RCU_AHBEN_CRCEN                RCU_AHBEN_CRCEN_Msk                   /*!< CRC clock enable */
#define RCU_AHBEN_EXMCEN_Pos           (8U)
#define RCU_AHBEN_EXMCEN_Msk           (0x1UL << RCU_AHBEN_EXMCEN_Pos)       /*!< 0x00000100 */
#define RCU_AHBEN_EXMCEN               RCU_AHBEN_EXMCEN_Msk                  /*!< EXMC clock enable */
#define RCU_AHBEN_USBFSEN_Pos          (12U)
#define RCU_AHBEN_USBFSEN_Msk          (0x1UL << RCU_AHBEN_USBFSEN_Pos)      /*!< 0x00001000 */
#define RCU_AHBEN_USBFSEN              RCU_AHBEN_USBFSEN_Msk                 /*!< USBFS clock enable */

/* RCU_APB2EN */
#define RCU_APB2EN_AFEN_Pos            (0U)
#define RCU_APB2EN_AFEN_Msk            (0x1UL << RCU_APB2EN_AFEN_Pos)        /*!< 0x00000001 */
#define RCU_APB2EN_AFEN                RCU_APB2EN_AFEN_Msk                   /*!< Alternate function I/O enable */
#define RCU_APB2EN_PAEN_Pos            (2U)
#define RCU_APB2EN_PAEN_Msk            (0x1UL << RCU_APB2EN_PAEN_Pos)        /*!< 0x00000004 */
#define RCU_APB2EN_PAEN                RCU_APB2EN_PAEN_Msk                   /*!< GPIO port A enable */
#define RCU_APB2EN_PBEN_Pos            (3U)
#define RCU_APB2EN_PBEN_Msk            (0x1UL << RCU_APB2EN_PBEN_Pos)        /*!< 0x00000008 */
#define RCU_APB2EN_PBEN                RCU_APB2EN_PBEN_Msk                   /*!< GPIO port B enable */
#define RCU_APB2EN_PCEN_Pos            (4U)
#define RCU_APB2EN_PCEN_Msk            (0x1UL << RCU_APB2EN_PCEN_Pos)        /*!< 0x00000010 */
#define RCU_APB2EN_PCEN                RCU_APB2EN_PCEN_Msk                   /*!< GPIO port C enable */
#define RCU_APB2EN_PDEN_Pos            (5U)
#define RCU_APB2EN_PDEN_Msk            (0x1UL << RCU_APB2EN_PDEN_Pos)        /*!< 0x00000020 */
#define RCU_APB2EN_PDEN                RCU_APB2EN_PDEN_Msk                   /*!< GPIO port D enable */
#define RCU_APB2EN_PEEN_Pos            (6U)
#define RCU_APB2EN_PEEN_Msk            (0x1UL << RCU_APB2EN_PEEN_Pos)        /*!< 0x00000040 */
#define RCU_APB2EN_PEEN                RCU_APB2EN_PEEN_Msk                   /*!< GPIO port E enable */
#define RCU_APB2EN_ADC0EN_Pos          (9U)
#define RCU_APB2EN_ADC0EN_Msk          (0x1UL << RCU_APB2EN_ADC0EN_Pos)      /*!< 0x00000200 */
#define RCU_APB2EN_ADC0EN              RCU_APB2EN_ADC0EN_Msk                 /*!< ADC0 enable */
#define RCU_APB2EN_ADC1EN_Pos          (10U)
#define RCU_APB2EN_ADC1EN_Msk          (0x1UL << RCU_APB2EN_ADC1EN_Pos)      /*!< 0x00000400 */
#define RCU_APB2EN_ADC1EN              RCU_APB2EN_ADC1EN_Msk                 /*!< ADC1 enable */
#define RCU_APB2EN_TIMER0EN_Pos        (11U)
#define RCU_APB2EN_TIMER0EN_Msk        (0x1UL << RCU_APB2EN_TIMER0EN_Pos)    /*!< 0x00000800 */
#define RCU_APB2EN_TIMER0EN            RCU_APB2EN_TIMER0EN_Msk               /*!< TIMER0 enable */
#define RCU_APB2EN_SPI0EN_Pos          (12U)
#define RCU_APB2EN_SPI0EN_Msk          (0x1UL << RCU_APB2EN_SPI0EN_Pos)      /*!< 0x00001000 */
#define RCU_APB2EN_SPI0EN              RCU_APB2EN_SPI0EN_Msk                 /*!< SPI0 enable */
#define RCU_APB2EN_TIMER7EN_Pos        (13U)
#define RCU_APB2EN_TIMER7EN_Msk        (0x1UL << RCU_APB2EN_TIMER7EN_Pos)    /*!< 0x00000800 */
#define RCU_APB2EN_TIMER7EN            RCU_APB2EN_TIMER7EN_Msk               /*!< TIMER7 enable */
#define RCU_APB2EN_USART0EN_Pos        (14U)
#define RCU_APB2EN_USART0EN_Msk        (0x1UL << RCU_APB2EN_USART0EN_Pos)    /*!< 0x00004000 */
#define RCU_APB2EN_USART0EN            RCU_APB2EN_USART0EN_Msk               /*!< USART0 enable */
#define RCU_APB2EN_TIMER8EN_Pos        (19U)
#define RCU_APB2EN_TIMER8EN_Msk        (0x1UL << RCU_APB2EN_TIMER8EN_Pos)    /*!< 0x00000800 */
#define RCU_APB2EN_TIMER8EN            RCU_APB2EN_TIMER8EN_Msk               /*!< TIMER8 enable */
#define RCU_APB2EN_TIMER9EN_Pos        (20U)
#define RCU_APB2EN_TIMER9EN_Msk        (0x1UL << RCU_APB2EN_TIMER9EN_Pos)    /*!< 0x00000800 */
#define RCU_APB2EN_TIMER9EN            RCU_APB2EN_TIMER9EN_Msk               /*!< TIMER9 enable */
#define RCU_APB2EN_TIMER10EN_Pos       (21U)
#define RCU_APB2EN_TIMER10EN_Msk       (0x1UL << RCU_APB2EN_TIMER10EN_Pos)   /*!< 0x00000800 */
#define RCU_APB2EN_TIMER10EN           RCU_APB2EN_TIMER10EN_Msk              /*!< TIMER10 enable */

/* RCU_APB1EN */
#define RCU_APB1EN_TIMER1EN_Pos        (0U)
#define RCU_APB1EN_TIMER1EN_Msk        (0x1UL << RCU_APB1EN_TIMER1EN_Pos)    /*!< 0x00000001 */
#define RCU_APB1EN_TIMER1EN            RCU_APB1EN_TIMER1EN_Msk               /*!< TIMER1 enable */
#define RCU_APB1EN_TIMER2EN_Pos        (1U)
#define RCU_APB1EN_TIMER2EN_Msk        (0x1UL << RCU_APB1EN_TIMER2EN_Pos)    /*!< 0x00000002 */
#define RCU_APB1EN_TIMER2EN            RCU_APB1EN_TIMER2EN_Msk               /*!< TIMER2 enable */
#define RCU_APB1EN_TIMER3EN_Pos        (2U)
#define RCU_APB1EN_TIMER3EN_Msk        (0x1UL << RCU_APB1EN_TIMER3EN_Pos)    /*!< 0x00000004 */
#define RCU_APB1EN_TIMER3EN            RCU_APB1EN_TIMER3EN_Msk               /*!< TIMER3 enable */
#define RCU_APB1EN_TIMER4EN_Pos        (3U)
#define RCU_APB1EN_TIMER4EN_Msk        (0x1UL << RCU_APB1EN_TIMER4EN_Pos)    /*!< 0x00000008 */
#define RCU_APB1EN_TIMER4EN            RCU_APB1EN_TIMER4EN_Msk               /*!< TIMER4 enable */
#define RCU_APB1EN_TIMER5EN_Pos        (4U)
#define RCU_APB1EN_TIMER5EN_Msk        (0x1UL << RCU_APB1EN_TIMER5EN_Pos)    /*!< 0x00000010 */
#define RCU_APB1EN_TIMER5EN            RCU_APB1EN_TIMER5EN_Msk               /*!< TIMER5 enable */
#define RCU_APB1EN_TIMER6EN_Pos        (5U)
#define RCU_APB1EN_TIMER6EN_Msk        (0x1UL << RCU_APB1EN_TIMER6EN_Pos)    /*!< 0x00000020 */
#define RCU_APB1EN_TIMER6EN            RCU_APB1EN_TIMER6EN_Msk               /*!< TIMER6 enable */
#define RCU_APB1EN_TIMER11EN_Pos       (6U)
#define RCU_APB1EN_TIMER11EN_Msk       (0x1UL << RCU_APB1EN_TIMER11EN_Pos)   /*!< 0x00000040 */
#define RCU_APB1EN_TIMER11EN           RCU_APB1EN_TIMER11EN_Msk              /*!< TIMER11 enable */
#define RCU_APB1EN_TIMER12EN_Pos       (7U)
#define RCU_APB1EN_TIMER12EN_Msk       (0x1UL << RCU_APB1EN_TIMER12EN_Pos)   /*!< 0x00000080 */
#define RCU_APB1EN_TIMER12EN           RCU_APB1EN_TIMER12EN_Msk              /*!< TIMER12 enable */
#define RCU_APB1EN_TIMER13EN_Pos       (8U)
#define RCU_APB1EN_TIMER13EN_Msk       (0x1UL << RCU_APB1EN_TIMER13EN_Pos)   /*!< 0x00000100 */
#define RCU_APB1EN_TIMER13EN           RCU_APB1EN_TIMER13EN_Msk              /*!< TIMER13 enable */
#define RCU_APB1EN_WWDGTEN_Pos         (11U)
#define RCU_APB1EN_WWDGTEN_Msk         (0x1UL << RCU_APB1EN_WWDGTEN_Pos)     /*!< 0x00000800 */
#define RCU_APB1EN_WWDGTEN             RCU_APB1EN_WWDGTEN_Msk                /*!< WWDGT enable */
#define RCU_APB1EN_SPI1EN_Pos          (14U)
#define RCU_APB1EN_SPI1EN_Msk          (0x1UL << RCU_APB1EN_SPI1EN_Pos)      /*!< 0x00004000 */
#define RCU_APB1EN_SPI1EN              RCU_APB1EN_SPI1EN_Msk                 /*!< SPI1 enable */
#define RCU_APB1EN_SPI2EN_Pos          (15U)
#define RCU_APB1EN_SPI2EN_Msk          (0x1UL << RCU_APB1EN_SPI2EN_Pos)      /*!< 0x00008000 */
#define RCU_APB1EN_SPI2EN              RCU_APB1EN_SPI2EN_Msk                 /*!< SPI2 enable */
#define RCU_APB1EN_USART1EN_Pos        (17U)
#define RCU_APB1EN_USART1EN_Msk        (0x1UL << RCU_APB1EN_USART1EN_Pos)    /*!< 0x00020000 */
#define RCU_APB1EN_USART1EN            RCU_APB1EN_USART1EN_Msk               /*!< USART1 enable */
#define RCU_APB1EN_USART2EN_Pos        (18U)
#define RCU_APB1EN_USART2EN_Msk        (0x1UL << RCU_APB1EN_USART2EN_Pos)    /*!< 0x00040000 */
#define RCU_APB1EN_USART2EN            RCU_APB1EN_USART2EN_Msk               /*!< USART2 enable */
#define RCU_APB1EN_UART3EN_Pos         (19U)
#define RCU_APB1EN_UART3EN_Msk         (0x1UL << RCU_APB1EN_UART3EN_Pos)     /*!< 0x00080000 */
#define RCU_APB1EN_UART3EN             RCU_APB1EN_UART3EN_Msk                /*!< UART3 enable */
#define RCU_APB1EN_UART4EN_Pos         (20U)
#define RCU_APB1EN_UART4EN_Msk         (0x1UL << RCU_APB1EN_UART4EN_Pos)     /*!< 0x00100000 */
#define RCU_APB1EN_UART4EN             RCU_APB1EN_UART4EN_Msk                /*!< UART4 enable */
#define RCU_APB1EN_I2C0EN_Pos          (21U)
#define RCU_APB1EN_I2C0EN_Msk          (0x1UL << RCU_APB1EN_I2C0EN_Pos)      /*!< 0x00200000 */
#define RCU_APB1EN_I2C0EN              RCU_APB1EN_I2C0EN_Msk                 /*!< I2C0 enable */
#define RCU_APB1EN_I2C1EN_Pos          (22U)
#define RCU_APB1EN_I2C1EN_Msk          (0x1UL << RCU_APB1EN_I2C1EN_Pos)      /*!< 0x00400000 */
#define RCU_APB1EN_I2C1EN              RCU_APB1EN_I2C1EN_Msk                 /*!< I2C1 enable */
#define RCU_APB1EN_BKPIEN_Pos          (27U)
#define RCU_APB1EN_BKPIEN_Msk          (0x1UL << RCU_APB1EN_BKPIEN_Pos)      /*!< 0x08000000 */
#define RCU_APB1EN_BKPIEN              RCU_APB1EN_BKPIEN_Msk                 /*!< Backup interface enable */
#define RCU_APB1EN_PMUEN_Pos           (28U)
#define RCU_APB1EN_PMUEN_Msk           (0x1UL << RCU_APB1EN_PMUEN_Pos)       /*!< 0x10000000 */
#define RCU_APB1EN_PMUEN               RCU_APB1EN_PMUEN_Msk                  /*!< PMU enable */
#define RCU_APB1EN_DACEN_Pos           (29U)
#define RCU_APB1EN_DACEN_Msk           (0x1UL << RCU_APB1EN_DACEN_Pos)       /*!< 0x20000000 */
#define RCU_APB1EN_DACEN               RCU_APB1EN_DACEN_Msk                  /*!< DAC enable */

/* RCU_BDCTL */
#define RCU_BDCTL_LXTALEN_Pos          (0U)
#define RCU_BDCTL_LXTALEN_Msk          (0x1UL << RCU_BDCTL_LXTALEN_Pos)      /*!< 0x00000001 */
#define RCU_BDCTL_LXTALEN              RCU_BDCTL_LXTALEN_Msk                 /*!< LXTAL enable */
#define RCU_BDCTL_LXTALSTB_Pos         (1U)
#define RCU_BDCTL_LXTALSTB_Msk         (0x1UL << RCU_BDCTL_LXTALSTB_Pos)     /*!< 0x00000002 */
#define RCU_BDCTL_LXTALSTB             RCU_BDCTL_LXTALSTB_Msk                /*!< LXTAL stabilization flag */
#define RCU_BDCTL_LXTALBPS_Pos         (2U)
#define RCU_BDCTL_LXTALBPS_Msk         (0x1UL << RCU_BDCTL_LXTALBPS_Pos)     /*!< 0x00000004 */
#define RCU_BDCTL_LXTALBPS             RCU_BDCTL_LXTALBPS_Msk                /*!< LXTAL bypass mode enable */

#define RCU_BDCTL_LXTALDRI_Pos         (3U)
#define RCU_BDCTL_LXTALDRI_Msk         (0x3UL << RCU_BDCTL_LXTALDRI_Pos)     /*!< 0x00000018 */
#define RCU_BDCTL_LXTALDRI             RCU_BDCTL_LXTALDRI_Msk                /*!< LXTALDRI[1:0] bits (LXTAL drive capability) */
#define RCU_BDCTL_LXTALDRI_0           (0x1UL << RCU_BDCTL_LXTALDRI_Pos)     /*!< 0x00000008 */
#define RCU_BDCTL_LXTALDRI_1           (0x2UL << RCU_BDCTL_LXTALDRI_Pos)     /*!< 0x00000010 */

#define RCU_BDCTL_RTCSRC_Pos           (8U)
#define RCU_BDCTL_RTCSRC_Msk           (0x3UL << RCU_BDCTL_RTCSRC_Pos)       /*!< 0x00000300 */
#define RCU_BDCTL_RTCSRC               RCU_BDCTL_RTCSRC_Msk                  /*!< RTCSRC[1:0] bits (RTC clock entry selection) */
#define RCU_BDCTL_RTCSRC_0             (0x1UL << RCU_BDCTL_RTCSRC_Pos)       /*!< 0x00000100 */
#define RCU_BDCTL_RTCSRC_1             (0x2UL << RCU_BDCTL_RTCSRC_Pos)       /*!< 0x00000200 */

#define RCU_BDCTL_RTCEN_Pos            (15U)
#define RCU_BDCTL_RTCEN_Msk            (0x1UL << RCU_BDCTL_RTCEN_Pos)        /*!< 0x00008000 */
#define RCU_BDCTL_RTCEN                RCU_BDCTL_RTCEN_Msk                   /*!< RTC clock enable */
#define RCU_BDCTL_BKPRST_Pos           (16U)
#define RCU_BDCTL_BKPRST_Msk           (0x1UL << RCU_BDCTL_BKPRST_Pos)       /*!< 0x00010000 */
#define RCU_BDCTL_BKPRST               RCU_BDCTL_BKPRST_Msk                  /*!< Backup domain reset  */

/* RCU_RSTSCK */
#define RCU_RSTSCK_IRC40KEN_Pos        (0U)
#define RCU_RSTSCK_IRC40KEN_Msk        (0x1UL << RCU_RSTSCK_IRC40KEN_Pos)    /*!< 0x00000001 */
#define RCU_RSTSCK_IRC40KEN            RCU_RSTSCK_IRC40KEN_Msk               /*!< IRC40K enable */
#define RCU_RSTSCK_IRC40KSTB_Pos       (1U)
#define RCU_RSTSCK_IRC40KSTB_Msk       (0x1UL << RCU_RSTSCK_IRC40KSTB_Pos)   /*!< 0x00000002 */
#define RCU_RSTSCK_IRC40KSTB           RCU_RSTSCK_IRC40KSTB_Msk              /*!< IRC40K stabilization flag */
#define RCU_RSTSCK_RSTFC_Pos           (24U)
#define RCU_RSTSCK_RSTFC_Msk           (0x1UL << RCU_RSTSCK_RSTFC_Pos)       /*!< 0x01000000 */
#define RCU_RSTSCK_RSTFC               RCU_RSTSCK_RSTFC_Msk                  /*!< Reset flag clear */
#define RCU_RSTSCK_EPRSTF_Pos          (26U)
#define RCU_RSTSCK_EPRSTF_Msk          (0x1UL << RCU_RSTSCK_EPRSTF_Pos)      /*!< 0x04000000 */
#define RCU_RSTSCK_EPRSTF              RCU_RSTSCK_EPRSTF_Msk                 /*!< External PIN reset flag */
#define RCU_RSTSCK_PORRSTF_Pos         (27U)
#define RCU_RSTSCK_PORRSTF_Msk         (0x1UL << RCU_RSTSCK_PORRSTF_Pos)     /*!< 0x08000000 */
#define RCU_RSTSCK_PORRSTF             RCU_RSTSCK_PORRSTF_Msk                /*!< Power reset flag */
#define RCU_RSTSCK_SWRSTF_Pos          (28U)
#define RCU_RSTSCK_SWRSTF_Msk          (0x1UL << RCU_RSTSCK_SWRSTF_Pos)      /*!< 0x10000000 */
#define RCU_RSTSCK_SWRSTF              RCU_RSTSCK_SWRSTF_Msk                 /*!< Software reset flag */
#define RCU_RSTSCK_FWDGTRSTF_Pos       (29U)
#define RCU_RSTSCK_FWDGTRSTF_Msk       (0x1UL << RCU_RSTSCK_FWDGTRSTF_Pos)   /*!< 0x20000000 */
#define RCU_RSTSCK_FWDGTRSTF           RCU_RSTSCK_FWDGTRSTF_Msk              /*!< Free watchdog timer reset flag */
#define RCU_RSTSCK_WWDGTRSTF_Pos       (30U)
#define RCU_RSTSCK_WWDGTRSTF_Msk       (0x1UL << RCU_RSTSCK_WWDGTRSTF_Pos)   /*!< 0x40000000 */
#define RCU_RSTSCK_WWDGTRSTF           RCU_RSTSCK_WWDGTRSTF_Msk              /*!< Window watchdog timer reset flag */
#define RCU_RSTSCK_LPRSTF_Pos          (31U)
#define RCU_RSTSCK_LPRSTF_Msk          (0x1UL << RCU_RSTSCK_LPRSTF_Pos)      /*!< 0x80000000 */
#define RCU_RSTSCK_LPRSTF              RCU_RSTSCK_LPRSTF_Msk                 /*!< Low-power reset flag */

/* RCU_AHBRST */
#define RCU_AHBRST_USBFSRST_Pos        (12U)
#define RCU_AHBRST_USBFSRST_Msk        (0x1UL << RCU_AHBRST_USBFSRST_Pos)    /*!< 0x00001000 */
#define RCU_AHBRST_USBFSRST            RCU_AHBRST_USBFSRST_Msk               /*!< USBFS reset */

/* RCU_CFG1 */
#define RCU_CFG1_PREDV0_Pos            (0U)
#define RCU_CFG1_PREDV0_Msk            (0xFUL << RCU_CFG1_PREDV0_Pos)        /*!< 0x0000000F */
#define RCU_CFG1_PREDV0                RCU_CFG1_PREDV0_Msk                   /*!< PREDV0[3:0] bits (PREDV0 division factor) */
#define RCU_CFG1_PREDV0_0              (0x1UL << RCU_CFG1_PREDV0_Pos)        /*!< 0x00000001 */
#define RCU_CFG1_PREDV0_1              (0x2UL << RCU_CFG1_PREDV0_Pos)        /*!< 0x00000002 */
#define RCU_CFG1_PREDV0_2              (0x4UL << RCU_CFG1_PREDV0_Pos)        /*!< 0x00000004 */
#define RCU_CFG1_PREDV0_3              (0x8UL << RCU_CFG1_PREDV0_Pos)        /*!< 0x00000008 */

#define RCU_CFG1_PREDV1_Pos            (4U)
#define RCU_CFG1_PREDV1_Msk            (0xFUL << RCU_CFG1_PREDV1_Pos)        /*!< 0x000000F0 */
#define RCU_CFG1_PREDV1                RCU_CFG1_PREDV1_Msk                   /*!< PREDV1[3:0] bits (PREDV1 division factor) */
#define RCU_CFG1_PREDV1_0              (0x1UL << RCU_CFG1_PREDV1_Pos)        /*!< 0x00000010 */
#define RCU_CFG1_PREDV1_1              (0x2UL << RCU_CFG1_PREDV1_Pos)        /*!< 0x00000020 */
#define RCU_CFG1_PREDV1_2              (0x4UL << RCU_CFG1_PREDV1_Pos)        /*!< 0x00000040 */
#define RCU_CFG1_PREDV1_3              (0x8UL << RCU_CFG1_PREDV1_Pos)        /*!< 0x00000080 */

#define RCU_CFG1_PLL1MF_Pos            (8U)
#define RCU_CFG1_PLL1MF_Msk            (0xFUL << RCU_CFG1_PLL1MF_Pos)        /*!< 0x00000F00 */
#define RCU_CFG1_PLL1MF                RCU_CFG1_PLL1MF_Msk                   /*!< PLL1MF[3:0] bits (PLL1 clock multiplication factor) */
#define RCU_CFG1_PLL1MF_0              (0x1UL << RCU_CFG1_PLL1MF_Pos)        /*!< 0x00000100 */
#define RCU_CFG1_PLL1MF_1              (0x2UL << RCU_CFG1_PLL1MF_Pos)        /*!< 0x00000200 */
#define RCU_CFG1_PLL1MF_2              (0x4UL << RCU_CFG1_PLL1MF_Pos)        /*!< 0x00000400 */
#define RCU_CFG1_PLL1MF_3              (0x8UL << RCU_CFG1_PLL1MF_Pos)        /*!< 0x00000800 */

#define RCU_CFG1_PLL2MF_Pos            (12U)
#define RCU_CFG1_PLL2MF_Msk            (0xFUL << RCU_CFG1_PLL2MF_Pos)        /*!< 0x0000F000 */
#define RCU_CFG1_PLL2MF                RCU_CFG1_PLL2MF_Msk                   /*!< PLL2MF[3:0] bits (PLL2 clock multiplication factor) */
#define RCU_CFG1_PLL2MF_0              (0x1UL << RCU_CFG1_PLL2MF_Pos)        /*!< 0x00001000 */
#define RCU_CFG1_PLL2MF_1              (0x2UL << RCU_CFG1_PLL2MF_Pos)        /*!< 0x00002000 */
#define RCU_CFG1_PLL2MF_2              (0x4UL << RCU_CFG1_PLL2MF_Pos)        /*!< 0x00004000 */
#define RCU_CFG1_PLL2MF_3              (0x8UL << RCU_CFG1_PLL2MF_Pos)        /*!< 0x00008000 */

#define RCU_CFG1_PREDV0SEL_Pos         (16U)
#define RCU_CFG1_PREDV0SEL_Msk         (0x1UL << RCU_CFG1_PREDV0SEL_Pos)     /*!< 0x00010000 */
#define RCU_CFG1_PREDV0SEL             RCU_CFG1_PREDV0SEL_Msk                /*!< PREDV0 input clock source selection */
#define RCU_CFG1_I2S1SEL_Pos           (17U)
#define RCU_CFG1_I2S1SEL_Msk           (0x1UL << RCU_CFG1_I2S1SEL_Pos)       /*!< 0x00020000 */
#define RCU_CFG1_I2S1SEL               RCU_CFG1_I2S1SEL_Msk                  /*!< I2S1 clock source selection */
#define RCU_CFG1_I2S2SEL_Pos           (18U)
#define RCU_CFG1_I2S2SEL_Msk           (0x1UL << RCU_CFG1_I2S2SEL_Pos)       /*!< 0x00040000 */
#define RCU_CFG1_I2S2SEL               RCU_CFG1_I2S2SEL_Msk                  /*!< I2S2 clock source selection */
#define RCU_CFG1_ADCPSC_3_Pos          (29U)
#define RCU_CFG1_ADCPSC_3_Msk          (0x1UL << RCU_CFG1_ADCPSC_3_Pos)      /*!< 0x20000000 */
#define RCU_CFG1_ADCPSC_3              RCU_CFG1_ADCPSC_3_Msk                 /*!< Bit 4 of ADCPSC */
#define RCU_CFG1_PLLPRESEL_Pos         (30U)
#define RCU_CFG1_PLLPRESEL_Msk         (0x1UL << RCU_CFG1_PLLPRESEL_Pos)     /*!< 0x40000000 */
#define RCU_CFG1_PLLPRESEL             RCU_CFG1_PLLPRESEL_Msk                /*!< PLL clock source selection */

/* RCU_DSV */
#define RCU_DSV_DSLPVS_Pos             (0U)
#define RCU_DSV_DSLPVS_Msk             (0x3UL << RCU_DSV_DSLPVS_Pos)         /*!< 0x00000003 */
#define RCU_DSV_DSLPVS                 RCU_DSV_DSLPVS_Msk                    /*!< DSLPVS[1:0] bits (Deep-sleep mode voltage select) */
#define RCU_DSV_DSLPVS_0               (0x1UL << RCU_DSV_DSLPVS_Pos)         /*!< 0x00000001 */
#define RCU_DSV_DSLPVS_1               (0x2UL << RCU_DSV_DSLPVS_Pos)         /*!< 0x00000002 */

/* RCU_ADDCTL */
#define RCU_ADDCTL_CK48MSEL_Pos        (0U)
#define RCU_ADDCTL_CK48MSEL_Msk        (0x1UL << RCU_ADDCTL_CK48MSEL_Pos)    /*!< 0x00000001 */
#define RCU_ADDCTL_CK48MSEL            RCU_ADDCTL_CK48MSEL_Msk               /*!< 48MHz clock selection */
#define RCU_ADDCTL_IRC48MEN_Pos        (16U)
#define RCU_ADDCTL_IRC48MEN_Msk        (0x1UL << RCU_ADDCTL_IRC48MEN_Pos)    /*!< 0x00010000 */
#define RCU_ADDCTL_IRC48MEN            RCU_ADDCTL_IRC48MEN_Msk               /*!< Internal 48MHz RC oscillator enable */
#define RCU_ADDCTL_IRC48MSTB_Pos       (17U)
#define RCU_ADDCTL_IRC48MSTB_Msk       (0x1UL << RCU_ADDCTL_IRC48MSTB_Pos)   /*!< 0x00020000 */
#define RCU_ADDCTL_IRC48MSTB           RCU_ADDCTL_IRC48MSTB_Msk              /*!< Internal 48MHz RC oscillator clock stabilization flag */

#define RCU_ADDCTL_IRC48MCAL_Pos       (24U)
#define RCU_ADDCTL_IRC48MCAL_Msk       (0xFFUL << RCU_ADDCTL_IRC48MCAL_Pos)  /*!< 0xFF000000 */
#define RCU_ADDCTL_IRC48MCAL           RCU_ADDCTL_IRC48MCAL_Msk              /*!< IRC48MCALIB[7:0] (Internal 48MHz RC oscillator calibration value register) */
#define RCU_ADDCTL_IRC48MCAL_0         (0x01UL << RCU_ADDCTL_IRC48MCAL_Pos)  /*!< 0x01000000 */
#define RCU_ADDCTL_IRC48MCAL_1         (0x02UL << RCU_ADDCTL_IRC48MCAL_Pos)  /*!< 0x02000000 */
#define RCU_ADDCTL_IRC48MCAL_2         (0x04UL << RCU_ADDCTL_IRC48MCAL_Pos)  /*!< 0x04000000 */
#define RCU_ADDCTL_IRC48MCAL_3         (0x08UL << RCU_ADDCTL_IRC48MCAL_Pos)  /*!< 0x08000000 */
#define RCU_ADDCTL_IRC48MCAL_4         (0x10UL << RCU_ADDCTL_IRC48MCAL_Pos)  /*!< 0x10000000 */
#define RCU_ADDCTL_IRC48MCAL_5         (0x20UL << RCU_ADDCTL_IRC48MCAL_Pos)  /*!< 0x20000000 */
#define RCU_ADDCTL_IRC48MCAL_6         (0x40UL << RCU_ADDCTL_IRC48MCAL_Pos)  /*!< 0x40000000 */
#define RCU_ADDCTL_IRC48MCAL_7         (0x80UL << RCU_ADDCTL_IRC48MCAL_Pos)  /*!< 0x80000000 */

/* RCU_ADDINT */
#define RCU_ADDINT_IRC48MSTBIF_Pos     (6U)
#define RCU_ADDINT_IRC48MSTBIF_Msk     (0x1UL << RCU_ADDINT_IRC48MSTBIF_Pos) /*!< 0x00000040 */
#define RCU_ADDINT_IRC48MSTBIF         RCU_ADDINT_IRC48MSTBIF_Msk            /*!< Internal 48 MHz RC oscillator stabilization interrupt flag */
#define RCU_ADDINT_IRC48MSTBIE_Pos     (14U)
#define RCU_ADDINT_IRC48MSTBIE_Msk     (0x1UL << RCU_ADDINT_IRC48MSTBIE_Pos) /*!< 0x00004000 */
#define RCU_ADDINT_IRC48MSTBIE         RCU_ADDINT_IRC48MSTBIE_Msk            /*!< Internal 48 MHz RC oscillator stabilization interrupt enable */
#define RCU_ADDINT_IRC48MSTBIC_Pos     (22U)
#define RCU_ADDINT_IRC48MSTBIC_Msk     (0x1UL << RCU_ADDINT_IRC48MSTBIC_Pos) /*!< 0x00400000 */
#define RCU_ADDINT_IRC48MSTBIC         RCU_ADDINT_IRC48MSTBIC_Msk            /*!< Internal 48 MHz RC oscillator stabilization interrupt clear */

/* RCU_ADDAPB1RST */
#define RCU_ADDAPB1RST_CTCRST_Pos      (27U)
#define RCU_ADDAPB1RST_CTCRST_Msk      (0x1UL << RCU_ADDAPB1RST_CTCRST_Pos)  /*!< 0x08000000 */
#define RCU_ADDAPB1RST_CTCRST          RCU_ADDAPB1RST_CTCRST_Msk             /*!< CTC reset */

/* RCU_ADDAPB1EN */
#define RCU_ADDAPB1EN_CTCEN_Pos        (27U)
#define RCU_ADDAPB1EN_CTCEN_Msk        (0x1UL << RCU_ADDAPB1EN_CTCEN_Pos)    /*!< 0x08000000 */
#define RCU_ADDAPB1EN_CTCEN            RCU_ADDAPB1EN_CTCEN_Msk               /*!< CTC clock enable */

#endif // GD32E10X_RCU_H_

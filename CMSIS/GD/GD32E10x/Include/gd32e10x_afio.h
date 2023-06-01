#ifndef GD32E10X_AFIO_H_
#define GD32E10X_AFIO_H_

/* AFIO struct */
typedef struct
{
  __IO uint32_t EC;      /*!< AFIO event control register,                 Address offset: 0x00 */
  __IO uint32_t PCF0;    /*!< AFIO port configuration register 0,          Address offset: 0x04 */
  __IO uint32_t EXTISS0; /*!< AFIO port EXTI sources selection register 0, Address offset: 0x08 */
  __IO uint32_t EXTISS1; /*!< AFIO port EXTI sources selection register 1, Address offset: 0x0C */
  __IO uint32_t EXTISS2; /*!< AFIO port EXTI sources selection register 2, Address offset: 0x10 */
  __IO uint32_t EXTISS3; /*!< AFIO port EXTI sources selection register 3, Address offset: 0x14 */
  __IO uint32_t PCF1;    /*!< AFIO port configuration register 1,          Address offset: 0x18 */
  __IO uint32_t CPSCTL;  /*!< IO compensation control register,            Address offset: 0x3C */
} AFIO_TypeDef;

/* AFIO definitions */
#define AFIO                            ((AFIO_TypeDef *) AFIO_BASE)               /*!< AFIO base address */

/* bits definitions */
/* AFIO_EC */
#define AFIO_EC_PIN_Pos                 (0U)
#define AFIO_EC_PIN_Msk                 (0xFUL << AFIO_EC_PIN_Pos)                 /*!< 0x0000000F */
#define AFIO_EC_PIN                     AFIO_EC_PIN_Msk                            /*!< PIN[3:0] bits (Event output pin selection) */
#define AFIO_EC_PIN_0                   (0x1UL << AFIO_EC_PIN_Pos)                 /*!< 0x00000001 */
#define AFIO_EC_PIN_1                   (0x2UL << AFIO_EC_PIN_Pos)                 /*!< 0x00000002 */
#define AFIO_EC_PIN_2                   (0x4UL << AFIO_EC_PIN_Pos)                 /*!< 0x00000004 */
#define AFIO_EC_PIN_3                   (0x8UL << AFIO_EC_PIN_Pos)                 /*!< 0x00000008 */

#define AFIO_EC_PORT_Pos                (4U)
#define AFIO_EC_PORT_Msk                (0x7UL << AFIO_EC_PORT_Pos)                /*!< 0x00000070 */
#define AFIO_EC_PORT                    AFIO_EC_PORT_Msk                           /*!< PORT[2:0] bits (Event output port selection) */
#define AFIO_EC_PORT_0                  (0x1UL << AFIO_EC_PORT_Pos)                /*!< 0x00000010 */
#define AFIO_EC_PORT_1                  (0x2UL << AFIO_EC_PORT_Pos)                /*!< 0x00000020 */
#define AFIO_EC_PORT_2                  (0x4UL << AFIO_EC_PORT_Pos)                /*!< 0x00000040 */

#define AFIO_EC_EOE_Pos                 (7U)
#define AFIO_EC_EOE_Msk                 (0x1UL << AFIO_EC_EOE_Pos)                 /*!< 0x00000080 */
#define AFIO_EC_EOE                     AFIO_EC_EOE_Msk                            /*!< Event output enable */

/* AFIO_PCF0 */
#define AFIO_PCF0_SPI0_REMAP_Pos        (0U)
#define AFIO_PCF0_SPI0_REMAP_Msk        (0x1UL << AFIO_PCF0_SPI0_REMAP_Pos)        /*!< 0x00000001 */
#define AFIO_PCF0_SPI0_REMAP            AFIO_PCF0_SPI0_REMAP_Msk                   /*!< SPI0 remapping */
#define AFIO_PCF0_I2C0_REMAP_Pos        (1U)
#define AFIO_PCF0_I2C0_REMAP_Msk        (0x1UL << AFIO_PCF0_I2C0_REMAP_Pos)        /*!< 0x00000002 */
#define AFIO_PCF0_I2C0_REMAP            AFIO_PCF0_I2C0_REMAP_Msk                   /*!< I2C0 remapping */
#define AFIO_PCF0_USART0_REMAP_Pos      (2U)
#define AFIO_PCF0_USART0_REMAP_Msk      (0x1UL << AFIO_PCF0_USART0_REMAP_Pos)      /*!< 0x00000004 */
#define AFIO_PCF0_USART0_REMAP          AFIO_PCF0_USART0_REMAP_Msk                 /*!< USART0 remapping */
#define AFIO_PCF0_USART1_REMAP_Pos      (3U)
#define AFIO_PCF0_USART1_REMAP_Msk      (0x1UL << AFIO_PCF0_USART1_REMAP_Pos)      /*!< 0x00000008 */
#define AFIO_PCF0_USART1_REMAP          AFIO_PCF0_USART1_REMAP_Msk                 /*!< USART1 remapping */

#define AFIO_PCF0_USART2_REMAP_Pos      (4U)
#define AFIO_PCF0_USART2_REMAP_Msk      (0x3UL << AFIO_PCF0_USART2_REMAP_Pos)      /*!< 0x00000030 */
#define AFIO_PCF0_USART2_REMAP          AFIO_PCF0_USART2_REMAP_Msk                 /*!< USART2_REMAP[1:0] bits (USART2 remapping) */
#define AFIO_PCF0_USART2_REMAP_0        (0x1UL << AFIO_PCF0_USART2_REMAP_Pos)      /*!< 0x00000010 */
#define AFIO_PCF0_USART2_REMAP_1        (0x2UL << AFIO_PCF0_USART2_REMAP_Pos)      /*!< 0x00000020 */

#define AFIO_PCF0_TIMER0_REMAP_Pos      (6U)
#define AFIO_PCF0_TIMER0_REMAP_Msk      (0x3UL << AFIO_PCF0_TIMER0_REMAP_Pos)      /*!< 0x000000C0 */
#define AFIO_PCF0_TIMER0_REMAP          AFIO_PCF0_TIMER0_REMAP_Msk                 /*!< TIMER0_REMAP[1:0] bits (TIMER0 remapping) */
#define AFIO_PCF0_TIMER0_REMAP_0        (0x1UL << AFIO_PCF0_TIMER0_REMAP_Pos)      /*!< 0x00000040 */
#define AFIO_PCF0_TIMER0_REMAP_1        (0x2UL << AFIO_PCF0_TIMER0_REMAP_Pos)      /*!< 0x00000080 */

#define AFIO_PCF0_TIMER1_REMAP_Pos      (8U)
#define AFIO_PCF0_TIMER1_REMAP_Msk      (0x3UL << AFIO_PCF0_TIMER1_REMAP_Pos)      /*!< 0x00000300 */
#define AFIO_PCF0_TIMER1_REMAP          AFIO_PCF0_TIMER1_REMAP_Msk                 /*!< TIMER1_REMAP[1:0] bits (TIMER1 remapping) */
#define AFIO_PCF0_TIMER1_REMAP_0        (0x1UL << AFIO_PCF0_TIMER1_REMAP_Pos)      /*!< 0x00000100 */
#define AFIO_PCF0_TIMER1_REMAP_1        (0x2UL << AFIO_PCF0_TIMER1_REMAP_Pos)      /*!< 0x00000200 */

#define AFIO_PCF0_TIMER2_REMAP_Pos      (10U)
#define AFIO_PCF0_TIMER2_REMAP_Msk      (0x3UL << AFIO_PCF0_TIMER2_REMAP_Pos)      /*!< 0x00000C00 */
#define AFIO_PCF0_TIMER2_REMAP          AFIO_PCF0_TIMER2_REMAP_Msk                 /*!< TIMER2_REMAP[1:0] bits (TIMER2 remapping) */
#define AFIO_PCF0_TIMER2_REMAP_0        (0x1UL << AFIO_PCF0_TIMER2_REMAP_Pos)      /*!< 0x00000400 */
#define AFIO_PCF0_TIMER2_REMAP_1        (0x2UL << AFIO_PCF0_TIMER2_REMAP_Pos)      /*!< 0x00000800 */

#define AFIO_PCF0_TIMER3_REMAP_Pos      (12U)
#define AFIO_PCF0_TIMER3_REMAP_Msk      (0x1UL << AFIO_PCF0_TIMER3_REMAP_Pos)      /*!< 0x00001000 */
#define AFIO_PCF0_TIMER3_REMAP          AFIO_PCF0_TIMER3_REMAP_Msk                 /*!< TIMER3 remapping */

#define AFIO_PCF0_PD01_REMAP_Pos        (15U)
#define AFIO_PCF0_PD01_REMAP_Msk        (0x1UL << AFIO_PCF0_PD01_REMAP_Pos)        /*!< 0x00008000 */
#define AFIO_PCF0_PD01_REMAP            AFIO_PCF0_PD01_REMAP_Msk                   /*!< Port D0/Port D1 mapping on OSC_IN/OSC_OUT */

#define AFIO_PCF0_TIMER4CH3_REMAP_Pos   (16U)
#define AFIO_PCF0_TIMER4CH3_REMAP_Msk   (0x1UL << AFIO_PCF0_TIMER4CH3_REMAP_Pos)   /*!< 0x00010000 */
#define AFIO_PCF0_TIMER4CH3_REMAP       AFIO_PCF0_TIMER4CH3_REMAP_Msk              /*!< TIMER4 channel3 internal remapping */

#define AFIO_PCF0_ADC0_ETRGRT_REMAP_Pos (18U)
#define AFIO_PCF0_ADC0_ETRGRT_REMAP_Msk (0x1UL << AFIO_PCF0_ADC0_ETRGRT_REMAP_Pos) /*!< 0x00040000 */
#define AFIO_PCF0_ADC0_ETRGRT_REMAP     AFIO_PCF0_ADC0_ETRGRT_REMAP_Msk            /*!< ADC 0 external trigger routine conversion remapping */

#define AFIO_PCF0_ADC1_ETRGRT_REMAP_Pos (20U)
#define AFIO_PCF0_ADC1_ETRGRT_REMAP_Msk (0x1UL << AFIO_PCF0_ADC1_ETRGRT_REMAP_Pos) /*!< 0x00100000 */
#define AFIO_PCF0_ADC1_ETRGRT_REMAP     AFIO_PCF0_ADC1_ETRGRT_REMAP_Msk            /*!< ADC 1 external trigger routine conversion remapping */

#define AFIO_PCF0_SWJ_CFG_Pos           (24U)
#define AFIO_PCF0_SWJ_CFG_Msk           (0x7UL << AFIO_PCF0_SWJ_CFG_Pos)           /*!< 0x07000000 */
#define AFIO_PCF0_SWJ_CFG               AFIO_PCF0_SWJ_CFG_Msk                      /*!< SWJ_CFG[2:0] bits (Serial wire JTAG configuration) */
#define AFIO_PCF0_SWJ_CFG_0             (0x1UL << AFIO_PCF0_SWJ_CFG_Pos)           /*!< 0x01000000 */
#define AFIO_PCF0_SWJ_CFG_1             (0x2UL << AFIO_PCF0_SWJ_CFG_Pos)           /*!< 0x02000000 */
#define AFIO_PCF0_SWJ_CFG_2             (0x4UL << AFIO_PCF0_SWJ_CFG_Pos)           /*!< 0x04000000 */

#define AFIO_PCF0_SPI2_REMAP_Pos        (28U)
#define AFIO_PCF0_SPI2_REMAP_Msk        (0x1UL << AFIO_PCF0_SPI2_REMAP_Pos)        /*!< 0x10000000 */
#define AFIO_PCF0_SPI2_REMAP            AFIO_PCF0_SPI2_REMAP_Msk                   /*!< SPI2/I2S2 remapping */

#define AFIO_PCF0_TIMER1ITI1_REMAP_Pos  (29U)
#define AFIO_PCF0_TIMER1ITI1_REMAP_Msk  (0x1UL << AFIO_PCF0_TIMER1ITI1_REMAP_Pos)  /*!< 0x20000000 */
#define AFIO_PCF0_TIMER1ITI1_REMAP      AFIO_PCF0_TIMER1ITI1_REMAP_Msk             /*!< TIMER1 internal trigger 1 remapping */

/* AFIO_EXTISS0 */
#define AFIO_EXTI0_SS0_Pos              (0U)
#define AFIO_EXTI0_SS0_Msk              (0xFUL << AFIO_EXTI0_SS0_Pos)              /*!< 0x0000000F */
#define AFIO_EXTI0_SS0                  AFIO_EXTI0_SS0_Msk                         /*!< EXTI0 sources selection */
#define AFIO_EXTI0_SS1_Pos              (4U)
#define AFIO_EXTI0_SS1_Msk              (0xFUL << AFIO_EXTI0_SS1_Pos)              /*!< 0x000000F0 */
#define AFIO_EXTI0_SS1                  AFIO_EXTI0_SS1_Msk                         /*!< EXTI1 sources selection */
#define AFIO_EXTI0_SS2_Pos              (8U)
#define AFIO_EXTI0_SS2_Msk              (0xFUL << AFIO_EXTI0_SS2_Pos)              /*!< 0x00000F00 */
#define AFIO_EXTI0_SS2                  AFIO_EXTI0_SS2_Msk                         /*!< EXTI2 sources selection */
#define AFIO_EXTI0_SS3_Pos              (12U)
#define AFIO_EXTI0_SS3_Msk              (0xFUL << AFIO_EXTI0_SS3_Pos)              /*!< 0x0000F000 */
#define AFIO_EXTI0_SS3                  AFIO_EXTI0_SS3_Msk                         /*!< EXTI3 sources selection */

/* AFIO_EXTISS1 */
#define AFIO_EXTI2_SS4_Pos              (0U)
#define AFIO_EXTI2_SS4_Msk              (0xFUL << AFIO_EXTI2_SS4_Pos)              /*!< 0x0000000F */
#define AFIO_EXTI2_SS4                  AFIO_EXTI2_SS4_Msk                         /*!< EXTI4 sources selection */
#define AFIO_EXTI2_SS5_Pos              (4U)
#define AFIO_EXTI2_SS5_Msk              (0xFUL << AFIO_EXTI2_SS5_Pos)              /*!< 0x000000F0 */
#define AFIO_EXTI2_SS5                  AFIO_EXTI2_SS5_Msk                         /*!< EXTI5 sources selection */
#define AFIO_EXTI2_SS6_Pos              (8U)
#define AFIO_EXTI2_SS6_Msk              (0xFUL << AFIO_EXTI2_SS6_Pos)              /*!< 0x00000F00 */
#define AFIO_EXTI2_SS6                  AFIO_EXTI2_SS6_Msk                         /*!< EXTI6 sources selection */
#define AFIO_EXTI2_SS7_Pos              (12U)
#define AFIO_EXTI2_SS7_Msk              (0xFUL << AFIO_EXTI2_SS7_Pos)              /*!< 0x0000F000 */
#define AFIO_EXTI2_SS7                  AFIO_EXTI2_SS7_Msk                         /*!< EXTI7 sources selection */

/* AFIO_EXTISS2 */
#define AFIO_EXTI3_SS8_Pos              (0U)
#define AFIO_EXTI3_SS8_Msk              (0xFUL << AFIO_EXTI3_SS8_Pos)              /*!< 0x0000000F */
#define AFIO_EXTI3_SS8                  AFIO_EXTI3_SS8_Msk                         /*!< EXTI8 sources selection */
#define AFIO_EXTI3_SS9_Pos              (4U)
#define AFIO_EXTI3_SS9_Msk              (0xFUL << AFIO_EXTI3_SS9_Pos)              /*!< 0x000000F0 */
#define AFIO_EXTI3_SS9                  AFIO_EXTI3_SS9_Msk                         /*!< EXTI9 sources selection */
#define AFIO_EXTI3_SS10_Pos             (8U)
#define AFIO_EXTI3_SS10_Msk             (0xFUL << AFIO_EXTI3_SS10_Pos)             /*!< 0x00000F00 */
#define AFIO_EXTI3_SS10                 AFIO_EXTI3_SS10_Msk                        /*!< EXTI10 sources selection */
#define AFIO_EXTI3_SS11_Pos             (12U)
#define AFIO_EXTI3_SS11_Msk             (0xFUL << AFIO_EXTI3_SS11_Pos)             /*!< 0x0000F000 */
#define AFIO_EXTI3_SS11                 AFIO_EXTI3_SS11_Msk                        /*!< EXTI11 sources selection */

/* AFIO_EXTISS3 */
#define AFIO_EXTI4_SS12_Pos             (0U)
#define AFIO_EXTI4_SS12_Msk             (0xFUL << AFIO_EXTI4_SS12_Pos)             /*!< 0x0000000F */
#define AFIO_EXTI4_SS12                 AFIO_EXTI4_SS12_Msk                        /*!< EXTI12 sources selection */
#define AFIO_EXTI4_SS13_Pos             (4U)
#define AFIO_EXTI4_SS13_Msk             (0xFUL << AFIO_EXTI4_SS13_Pos)             /*!< 0x000000F0 */
#define AFIO_EXTI4_SS13                 AFIO_EXTI4_SS13_Msk                        /*!< EXTI13 sources selection */
#define AFIO_EXTI4_SS14_Pos             (8U)
#define AFIO_EXTI4_SS14_Msk             (0xFUL << AFIO_EXTI4_SS14_Pos)             /*!< 0x00000F00 */
#define AFIO_EXTI4_SS14                 AFIO_EXTI4_SS14_Msk                        /*!< EXTI14 sources selection */
#define AFIO_EXTI4_SS15_Pos             (12U)
#define AFIO_EXTI4_SS15_Msk             (0xFUL << AFIO_EXTI4_SS15_Pos)             /*!< 0x0000F000 */
#define AFIO_EXTI4_SS15                 AFIO_EXTI4_SS15_Msk                        /*!< EXTI15 sources selection */

/* AFIO_PCF1 */
#define AFIO_PCF1_TIMER8_REMAP_Pos      (5U)
#define AFIO_PCF1_TIMER8_REMAP_Msk      (0x1UL << AFIO_PCF1_TIMER8_REMAP_Pos)      /*!< 0x00000020 */
#define AFIO_PCF1_TIMER8_REMAP          AFIO_PCF1_TIMER8_REMAP_Msk                 /*!< TIMER8 remapping */
#define AFIO_PCF1_EXMC_NADV_Pos         (10U)
#define AFIO_PCF1_EXMC_NADV_Msk         (0x1UL << AFIO_PCF1_EXMC_NADV_Pos)         /*!< 0x00000400 */
#define AFIO_PCF1_EXMC_NADV             AFIO_PCF1_EXMC_NADV_Msk                    /*!< EXMC_NADV connect/disconnect */

#define AFIO_PCF1_CTC_REMAP_Pos         (11U)
#define AFIO_PCF1_CTC_REMAP_Msk         (0x3UL << AFIO_PCF1_CTC_REMAP_Pos)         /*!< 0x00001800 */
#define AFIO_PCF1_CTC_REMAP             AFIO_PCF1_CTC_REMAP_Msk                    /*!< CTC_REMAP[1:0] bits (CTC remapping) */
#define AFIO_PCF1_CTC_REMAP_0           (0x1UL << AFIO_PCF1_CTC_REMAP_Pos)         /*!< 0x00000010 */
#define AFIO_PCF1_CTC_REMAP_1           (0x2UL << AFIO_PCF1_CTC_REMAP_Pos)         /*!< 0x00000020 */

/* AFIO_CPSCTL */
#define AFIO_CPSCTL_CPS_EN_Pos          (0U)
#define AFIO_CPSCTL_CPS_EN_Msk          (0x1UL << AFIO_CPSCTL_CPS_EN_Pos)          /*!< 0x00000001 */
#define AFIO_CPSCTL_CPS_EN              AFIO_CPSCTL_CPS_EN_Msk                     /*!< I/O compensation cell enable */
#define AFIO_CPSCTL_CPS_RDY_Pos         (8U)
#define AFIO_CPSCTL_CPS_RDY_Msk         (0x1UL << AFIO_CPSCTL_CPS_RDY_Pos)         /*!< 0x00000100 */
#define AFIO_CPSCTL_CPS_RDY             AFIO_CPSCTL_CPS_RDY_Msk                    /*!< I/O compensation cell is ready or not */

#endif // GD32E10X_AFIO_H_

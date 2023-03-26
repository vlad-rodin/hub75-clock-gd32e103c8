#ifndef GD32E10X_TIMER_H_
#define GD32E10X_TIMER_H_

/* TIMERx(x=0..13) struct */
typedef struct
{
  __IO uint32_t CTL0;              /*!< TIMER control register 0,                        Address offset: 0x00 */
  __IO uint32_t CTL1;              /*!< TIMER control register 1,                        Address offset: 0x04 */
  __IO uint32_t SMCFG;             /*!< TIMER slave mode configuration register,         Address offset: 0x08 */
  __IO uint32_t DMAINTEN;          /*!< TIMER DMA and interrupt enable register,         Address offset: 0x0C */
  __IO uint32_t INTF;              /*!< TIMER interrupt flag register,                   Address offset: 0x10 */
  __IO uint32_t SWEVG;             /*!< TIMER software event generation register,        Address offset: 0x14 */
  __IO uint32_t CHCTL0;            /*!< TIMER channel control register 0,                Address offset: 0x18 */
  __IO uint32_t CHCTL1;            /*!< TIMER channel control register 1,                Address offset: 0x1C */
  __IO uint32_t CHCTL2;            /*!< TIMER channel control register 2,                Address offset: 0x20 */
  __IO uint32_t CNT;               /*!< TIMER counter register,                          Address offset: 0x24 */
  __IO uint32_t PSC;               /*!< TIMER prescaler register,                        Address offset: 0x28 */
  __IO uint32_t CAR;               /*!< TIMER counter auto reload register,              Address offset: 0x2C */
  __IO uint32_t CREP;              /*!< TIMER counter repetition register,               Address offset: 0x30 */
  __IO uint32_t CH0CV;             /*!< TIMER channel 0 capture/compare value register,  Address offset: 0x34 */
  __IO uint32_t CH1CV;             /*!< TIMER channel 1 capture/compare value register,  Address offset: 0x38 */
  __IO uint32_t CH2CV;             /*!< TIMER channel 2 capture/compare value register,  Address offset: 0x3C */
  __IO uint32_t CH3CV;             /*!< TIMER channel 3 capture/compare value register,  Address offset: 0x40 */
  __IO uint32_t CCHP;              /*!< TIMER channel complementary protection register, Address offset: 0x44 */
  __IO uint32_t DMACFG;            /*!< TIMER DMA configuration register,                Address offset: 0x48 */
  __IO uint32_t DMATB;             /*!< TIMER DMA transfer buffer register,              Address offset: 0x4C */
  __IO uint32_t CFG;               /*!< TIMER configuration register,                    Address offset: 0x50 */
} TIMER_TypeDef;

/* TIMERx(x=0..13) definitions */
#define TIMER0                     ((TIMER_TypeDef *)(TIMER_BASE + 0x00012C00U))
#define TIMER1                     ((TIMER_TypeDef *)(TIMER_BASE + 0x00000000U))
#define TIMER2                     ((TIMER_TypeDef *)(TIMER_BASE + 0x00000400U))
#define TIMER3                     ((TIMER_TypeDef *)(TIMER_BASE + 0x00000800U))
#define TIMER4                     ((TIMER_TypeDef *)(TIMER_BASE + 0x00000C00U))
#define TIMER5                     ((TIMER_TypeDef *)(TIMER_BASE + 0x00001000U))
#define TIMER6                     ((TIMER_TypeDef *)(TIMER_BASE + 0x00001400U))
#define TIMER7                     ((TIMER_TypeDef *)(TIMER_BASE + 0x00013400U))
#define TIMER8                     ((TIMER_TypeDef *)(TIMER_BASE + 0x00014C00U))
#define TIMER9                     ((TIMER_TypeDef *)(TIMER_BASE + 0x00015000U))
#define TIMER10                    ((TIMER_TypeDef *)(TIMER_BASE + 0x00015400U))
#define TIMER11                    ((TIMER_TypeDef *)(TIMER_BASE + 0x00001800U))
#define TIMER12                    ((TIMER_TypeDef *)(TIMER_BASE + 0x00001C00U))
#define TIMER13                    ((TIMER_TypeDef *)(TIMER_BASE + 0x00002000U))

/* bits definitions */
/* TIMER_CTL0 */
#define TIMER_CTL0_CEN_Pos         (0U)
#define TIMER_CTL0_CEN_Msk         (0x1UL << TIMER_CTL0_CEN_Pos)         /*!< 0x00000001 */
#define TIMER_CTL0_CEN             TIMER_CTL0_CEN_Msk                    /*!< Counter enable */
#define TIMER_CTL0_UPDIS_Pos       (1U)
#define TIMER_CTL0_UPDIS_Msk       (0x1UL << TIMER_CTL0_UPDIS_Pos)       /*!< 0x00000002 */
#define TIMER_CTL0_UPDIS           TIMER_CTL0_UPDIS_Msk                  /*!< Update disable */
#define TIMER_CTL0_UPS_Pos         (2U)
#define TIMER_CTL0_UPS_Msk         (0x1UL << TIMER_CTL0_UPS_Pos)         /*!< 0x00000004 */
#define TIMER_CTL0_UPS             TIMER_CTL0_UPS_Msk                    /*!< Update source */
#define TIMER_CTL0_SPM_Pos         (3U)
#define TIMER_CTL0_SPM_Msk         (0x1UL << TIMER_CTL0_SPM_Pos)         /*!< 0x00000008 */
#define TIMER_CTL0_SPM             TIMER_CTL0_SPM_Msk                    /*!< Single pulse mode */
#define TIMER_CTL0_DIR_Pos         (4U)
#define TIMER_CTL0_DIR_Msk         (0x1UL << TIMER_CTL0_DIR_Pos)         /*!< 0x00000010 */
#define TIMER_CTL0_DIR             TIMER_CTL0_DIR_Msk                    /*!< Direction */

#define TIMER_CTL0_CAM_Pos         (5U)
#define TIMER_CTL0_CAM_Msk         (0x3UL << TIMER_CTL0_CAM_Pos)         /*!< 0x00000060 */
#define TIMER_CTL0_CAM             TIMER_CTL0_CAM_Msk                    /*!< CAM[1:0] bits (Counter aligns mode selection) */
#define TIMER_CTL0_CAM_0           (0x1UL << TIMER_CTL0_CAM_Pos)         /*!< 0x00000020 */
#define TIMER_CTL0_CAM_1           (0x2UL << TIMER_CTL0_CAM_Pos)         /*!< 0x00000040 */

#define TIMER_CTL0_ARSE_Pos        (7U)
#define TIMER_CTL0_ARSE_Msk        (0x1UL << TIMER_CTL0_ARSE_Pos)        /*!< 0x00000080 */
#define TIMER_CTL0_ARSE            TIMER_CTL0_ARSE_Msk                   /*!< Auto-reload shadow enable */

#define TIMER_CTL0_CKDIV_Pos       (8U)
#define TIMER_CTL0_CKDIV_Msk       (0x3UL << TIMER_CTL0_CKDIV_Pos)       /*!< 0x00000300 */
#define TIMER_CTL0_CKDIV           TIMER_CTL0_CKDIV_Msk                  /*!< CKDIV[1:0] bits (Clock division) */
#define TIMER_CTL0_CKDIV_0         (0x1UL << TIMER_CTL0_CKDIV_Pos)       /*!< 0x00000100 */
#define TIMER_CTL0_CKDIV_1         (0x2UL << TIMER_CTL0_CKDIV_Pos)       /*!< 0x00000200 */

/* TIMER_CTL1 */
#define TIMER_CTL1_CCSE_Pos        (0U)
#define TIMER_CTL1_CCSE_Msk        (0x1UL << TIMER_CTL1_CCSE_Pos)        /*!< 0x00000001 */
#define TIMER_CTL1_CCSE            TIMER_CTL1_CCSE_Msk                   /*!< Commutation control shadow enable */
#define TIMER_CTL1_CCUS_Pos        (2U)
#define TIMER_CTL1_CCUS_Msk        (0x1UL << TIMER_CTL1_CCUS_Pos)        /*!< 0x00000004 */
#define TIMER_CTL1_CCUS            TIMER_CTL1_CCUS_Msk                   /*!< Commutation control shadow register update control */
#define TIMER_CTL1_DMAS_Pos        (3U)
#define TIMER_CTL1_DMAS_Msk        (0x1UL << TIMER_CTL1_DMAS_Pos)        /*!< 0x00000008 */
#define TIMER_CTL1_DMAS            TIMER_CTL1_DMAS_Msk                   /*!< DMA request source selection */

#define TIMER_CTL1_MMC_Pos         (4U)
#define TIMER_CTL1_MMC_Msk         (0x7UL << TIMER_CTL1_MMC_Pos)         /*!< 0x00000070 */
#define TIMER_CTL1_MMC             TIMER_CTL1_MMC_Msk                    /*!< MMC[2:0] bits (Master mode control) */
#define TIMER_CTL1_MMC_0           (0x1UL << TIMER_CTL1_MMC_Pos)         /*!< 0x00000010 */
#define TIMER_CTL1_MMC_1           (0x2UL << TIMER_CTL1_MMC_Pos)         /*!< 0x00000020 */
#define TIMER_CTL1_MMC_2           (0x4UL << TIMER_CTL1_MMC_Pos)         /*!< 0x00000040 */

#define TIMER_CTL1_TI0S_Pos        (7U)
#define TIMER_CTL1_TI0S_Msk        (0x1UL << TIMER_CTL1_TI0S_Pos)        /*!< 0x00000080 */
#define TIMER_CTL1_TI0S            TIMER_CTL1_TI0S_Msk                   /*!< Channel 0 trigger input selection */
#define TIMER_CTL1_ISO0_Pos        (8U)
#define TIMER_CTL1_ISO0_Msk        (0x1UL << TIMER_CTL1_ISO0_Pos)        /*!< 0x00000100 */
#define TIMER_CTL1_ISO0            TIMER_CTL1_ISO0_Msk                   /*!< Idle state of channel 0 output */
#define TIMER_CTL1_ISO0N_Pos       (9U)
#define TIMER_CTL1_ISO0N_Msk       (0x1UL << TIMER_CTL1_ISO0N_Pos)       /*!< 0x00000200 */
#define TIMER_CTL1_ISO0N           TIMER_CTL1_ISO0N_Msk                  /*!< Idle state of channel 0 complementary output */
#define TIMER_CTL1_ISO1_Pos        (10U)
#define TIMER_CTL1_ISO1_Msk        (0x1UL << TIMER_CTL1_ISO1_Pos)        /*!< 0x00000400 */
#define TIMER_CTL1_ISO1            TIMER_CTL1_ISO1_Msk                   /*!< Idle state of channel 1 output */
#define TIMER_CTL1_ISO1N_Pos       (11U)
#define TIMER_CTL1_ISO1N_Msk       (0x1UL << TIMER_CTL1_ISO1N_Pos)       /*!< 0x00000800 */
#define TIMER_CTL1_ISO1N           TIMER_CTL1_ISO1N_Msk                  /*!< Idle state of channel 1 complementary output */
#define TIMER_CTL1_ISO2_Pos        (12U)
#define TIMER_CTL1_ISO2_Msk        (0x1UL << TIMER_CTL1_ISO2_Pos)        /*!< 0x00001000 */
#define TIMER_CTL1_ISO2            TIMER_CTL1_ISO2_Msk                   /*!< Idle state of channel 2 output */
#define TIMER_CTL1_ISO2N_Pos       (13U)
#define TIMER_CTL1_ISO2N_Msk       (0x1UL << TIMER_CTL1_ISO2N_Pos)       /*!< 0x00002000 */
#define TIMER_CTL1_ISO2N           TIMER_CTL1_ISO2N_Msk                  /*!< Idle state of channel 2 complementary output */
#define TIMER_CTL1_ISO3_Pos        (14U)
#define TIMER_CTL1_ISO3_Msk        (0x1UL << TIMER_CTL1_ISO3_Pos)        /*!< 0x00004000 */
#define TIMER_CTL1_ISO3            TIMER_CTL1_ISO3_Msk                   /*!< Idle state of channel 3 output */

/* TIMER_SMCFG */
#define TIMER_SMCFG_SMC_Pos        (0U)
#define TIMER_SMCFG_SMC_Msk        (0x7UL << TIMER_SMCFG_SMC_Pos)        /*!< 0x00000007 */
#define TIMER_SMCFG_SMC            TIMER_SMCFG_SMC_Msk                   /*!< SMC[2:0] bits (Slave mode control) */
#define TIMER_SMCFG_SMC_0          (0x1UL << TIMER_SMCFG_SMC_Pos)        /*!< 0x00000001 */
#define TIMER_SMCFG_SMC_1          (0x2UL << TIMER_SMCFG_SMC_Pos)        /*!< 0x00000002 */
#define TIMER_SMCFG_SMC_2          (0x4UL << TIMER_SMCFG_SMC_Pos)        /*!< 0x00000004 */

#define TIMER_SMCFG_TRGS_Pos       (4U)
#define TIMER_SMCFG_TRGS_Msk       (0x7UL << TIMER_SMCFG_TRGS_Pos)       /*!< 0x00000070 */
#define TIMER_SMCFG_TRGS           TIMER_SMCFG_TRGS_Msk                  /*!< TRGS[2:0] bits (Trigger selection) */
#define TIMER_SMCFG_TRGS_0         (0x1UL << TIMER_SMCFG_TRGS_Pos)       /*!< 0x00000010 */
#define TIMER_SMCFG_TRGS_1         (0x2UL << TIMER_SMCFG_TRGS_Pos)       /*!< 0x00000020 */
#define TIMER_SMCFG_TRGS_2         (0x4UL << TIMER_SMCFG_TRGS_Pos)       /*!< 0x00000040 */

#define TIMER_SMCFG_MSM_Pos        (7U)
#define TIMER_SMCFG_MSM_Msk        (0x1UL << TIMER_SMCFG_MSM_Pos)        /*!< 0x00000080 */
#define TIMER_SMCFG_MSM            TIMER_SMCFG_MSM_Msk                   /*!< Master-slave mode */

#define TIMER_SMCFG_ETFC_Pos       (8U)
#define TIMER_SMCFG_ETFC_Msk       (0xFUL << TIMER_SMCFG_ETFC_Pos)       /*!< 0x00000F00 */
#define TIMER_SMCFG_ETFC           TIMER_SMCFG_ETFC_Msk                  /*!< ETFC[3:0] bits (External trigger filter control) */
#define TIMER_SMCFG_ETFC_0         (0x1UL << TIMER_SMCFG_ETFC_Pos)       /*!< 0x00000100 */
#define TIMER_SMCFG_ETFC_1         (0x2UL << TIMER_SMCFG_ETFC_Pos)       /*!< 0x00000200 */
#define TIMER_SMCFG_ETFC_2         (0x4UL << TIMER_SMCFG_ETFC_Pos)       /*!< 0x00000400 */
#define TIMER_SMCFG_ETFC_3         (0x8UL << TIMER_SMCFG_ETFC_Pos)       /*!< 0x00000800 */

#define TIMER_SMCFG_ETPSC_Pos      (12U)
#define TIMER_SMCFG_ETPSC_Msk      (0x3UL << TIMER_SMCFG_ETPSC_Pos)      /*!< 0x00003000 */
#define TIMER_SMCFG_ETPSC          TIMER_SMCFG_ETPSC_Msk                 /*!< ETPSC[1:0] bits (External trigger prescaler) */
#define TIMER_SMCFG_ETPSC_0        (0x1UL << TIMER_SMCFG_ETPSC_Pos)      /*!< 0x00001000 */
#define TIMER_SMCFG_ETPSC_1        (0x2UL << TIMER_SMCFG_ETPSC_Pos)      /*!< 0x00002000 */

#define TIMER_SMCFG_SMC1_Pos       (14U)
#define TIMER_SMCFG_SMC1_Msk       (0x1UL << TIMER_SMCFG_SMC1_Pos)       /*!< 0x00004000 */
#define TIMER_SMCFG_SMC1           TIMER_SMCFG_SMC1_Msk                  /*!< Part of SMC for enable external clock mode1 */
#define TIMER_SMCFG_ETP_Pos        (15U)
#define TIMER_SMCFG_ETP_Msk        (0x1UL << TIMER_SMCFG_ETP_Pos)        /*!< 0x00008000 */
#define TIMER_SMCFG_ETP            TIMER_SMCFG_ETP_Msk                   /*!< External trigger polarity */

/* TIMER_DMAINTEN */
#define TIMER_DMAINTEN_UPIE_Pos    (0U)
#define TIMER_DMAINTEN_UPIE_Msk    (0x1UL << TIMER_DMAINTEN_UPIE_Pos)    /*!< 0x00000001 */
#define TIMER_DMAINTEN_UPIE        TIMER_DMAINTEN_UPIE_Msk               /*!< Update interrupt enable */
#define TIMER_DMAINTEN_CH0IE_Pos   (1U)
#define TIMER_DMAINTEN_CH0IE_Msk   (0x1UL << TIMER_DMAINTEN_CH0IE_Pos)   /*!< 0x00000002 */
#define TIMER_DMAINTEN_CH0IE       TIMER_DMAINTEN_CH0IE_Msk              /*!< Channel 0 capture/compare interrupt enable */
#define TIMER_DMAINTEN_CH1IE_Pos   (2U)
#define TIMER_DMAINTEN_CH1IE_Msk   (0x1UL << TIMER_DMAINTEN_CH1IE_Pos)   /*!< 0x00000004 */
#define TIMER_DMAINTEN_CH1IE       TIMER_DMAINTEN_CH1IE_Msk              /*!< Channel 1 capture/compare interrupt enable */
#define TIMER_DMAINTEN_CH2IE_Pos   (3U)
#define TIMER_DMAINTEN_CH2IE_Msk   (0x1UL << TIMER_DMAINTEN_CH2IE_Pos)   /*!< 0x00000008 */
#define TIMER_DMAINTEN_CH2IE       TIMER_DMAINTEN_CH2IE_Msk              /*!< Channel 2 capture/compare interrupt enable */
#define TIMER_DMAINTEN_CH3IE_Pos   (4U)
#define TIMER_DMAINTEN_CH3IE_Msk   (0x1UL << TIMER_DMAINTEN_CH3IE_Pos)   /*!< 0x00000010 */
#define TIMER_DMAINTEN_CH3IE       TIMER_DMAINTEN_CH3IE_Msk              /*!< Channel 3 capture/compare interrupt enable */
#define TIMER_DMAINTEN_CMTIE_Pos   (5U)
#define TIMER_DMAINTEN_CMTIE_Msk   (0x1UL << TIMER_DMAINTEN_CMTIE_Pos)   /*!< 0x00000020 */
#define TIMER_DMAINTEN_CMTIE       TIMER_DMAINTEN_CMTIE_Msk              /*!< Commutation interrupt enable */
#define TIMER_DMAINTEN_TRGIE_Pos   (6U)
#define TIMER_DMAINTEN_TRGIE_Msk   (0x1UL << TIMER_DMAINTEN_TRGIE_Pos)   /*!< 0x00000040 */
#define TIMER_DMAINTEN_TRGIE       TIMER_DMAINTEN_TRGIE_Msk              /*!< Trigger interrupt enable */
#define TIMER_DMAINTEN_BRKIE_Pos   (7U)
#define TIMER_DMAINTEN_BRKIE_Msk   (0x1UL << TIMER_DMAINTEN_BRKIE_Pos)   /*!< 0x00000080 */
#define TIMER_DMAINTEN_BRKIE       TIMER_DMAINTEN_BRKIE_Msk              /*!< Break interrupt enable */
#define TIMER_DMAINTEN_UPDEN_Pos   (8U)
#define TIMER_DMAINTEN_UPDEN_Msk   (0x1UL << TIMER_DMAINTEN_UPDEN_Pos)   /*!< 0x00000100 */
#define TIMER_DMAINTEN_UPDEN       TIMER_DMAINTEN_UPDEN_Msk              /*!< Update DMA request enable */
#define TIMER_DMAINTEN_CH0DEN_Pos  (9U)
#define TIMER_DMAINTEN_CH0DEN_Msk  (0x1UL << TIMER_DMAINTEN_CH0DEN_Pos)  /*!< 0x00000200 */
#define TIMER_DMAINTEN_CH0DEN      TIMER_DMAINTEN_CH0DEN_Msk             /*!< Channel 0 capture/compare DMA request enable */
#define TIMER_DMAINTEN_CH1DEN_Pos  (10U)
#define TIMER_DMAINTEN_CH1DEN_Msk  (0x1UL << TIMER_DMAINTEN_CH1DEN_Pos)  /*!< 0x00000400 */
#define TIMER_DMAINTEN_CH1DEN      TIMER_DMAINTEN_CH1DEN_Msk             /*!< Channel 1 capture/compare DMA request enable */
#define TIMER_DMAINTEN_CH2DEN_Pos  (11U)
#define TIMER_DMAINTEN_CH2DEN_Msk  (0x1UL << TIMER_DMAINTEN_CH2DEN_Pos)  /*!< 0x00000800 */
#define TIMER_DMAINTEN_CH2DEN      TIMER_DMAINTEN_CH2DEN_Msk             /*!< Channel 2 capture/compare DMA request enable */
#define TIMER_DMAINTEN_CH3DEN_Pos  (12U)
#define TIMER_DMAINTEN_CH3DEN_Msk  (0x1UL << TIMER_DMAINTEN_CH3DEN_Pos)  /*!< 0x00001000 */
#define TIMER_DMAINTEN_CH3DEN      TIMER_DMAINTEN_CH3DEN_Msk             /*!< Channel 3 capture/compare DMA request enable */
#define TIMER_DMAINTEN_CMTDEN_Pos  (13U)
#define TIMER_DMAINTEN_CMTDEN_Msk  (0x1UL << TIMER_DMAINTEN_CMTDEN_Pos)  /*!< 0x00002000 */
#define TIMER_DMAINTEN_CMTDEN      TIMER_DMAINTEN_CMTDEN_Msk             /*!< Commutation DMA request enable */
#define TIMER_DMAINTEN_TRGDEN_Pos  (14U)
#define TIMER_DMAINTEN_TRGDEN_Msk  (0x1UL << TIMER_DMAINTEN_TRGDEN_Pos)  /*!< 0x00004000 */
#define TIMER_DMAINTEN_TRGDEN      TIMER_DMAINTEN_TRGDEN_Msk             /*!< Trigger DMA request enable */

/* TIMER_INTF */
#define TIMER_INTF_UPIF_Pos        (0U)
#define TIMER_INTF_UPIF_Msk        (0x1UL << TIMER_INTF_UPIF_Pos)        /*!< 0x00000001 */
#define TIMER_INTF_UPIF            TIMER_INTF_UPIF_Msk                   /*!< Update interrupt flag */
#define TIMER_INTF_CH0IF_Pos       (1U)
#define TIMER_INTF_CH0IF_Msk       (0x1UL << TIMER_INTF_CH0IF_Pos)       /*!< 0x00000002 */
#define TIMER_INTF_CH0IF           TIMER_INTF_CH0IF_Msk                  /*!< Channel 0 capture/compare interrupt flag */
#define TIMER_INTF_CH1IF_Pos       (2U)
#define TIMER_INTF_CH1IF_Msk       (0x1UL << TIMER_INTF_CH1IF_Pos)       /*!< 0x00000004 */
#define TIMER_INTF_CH1IF           TIMER_INTF_CH1IF_Msk                  /*!< Channel 1 capture/compare interrupt flag */
#define TIMER_INTF_CH2IF_Pos       (3U)
#define TIMER_INTF_CH2IF_Msk       (0x1UL << TIMER_INTF_CH2IF_Pos)       /*!< 0x00000008 */
#define TIMER_INTF_CH2IF           TIMER_INTF_CH2IF_Msk                  /*!< Channel 2 capture/compare interrupt flag */
#define TIMER_INTF_CH3IF_Pos       (4U)
#define TIMER_INTF_CH3IF_Msk       (0x1UL << TIMER_INTF_CH3IF_Pos)       /*!< 0x00000010 */
#define TIMER_INTF_CH3IF           TIMER_INTF_CH3IF_Msk                  /*!< Channel 3 capture/compare interrupt flag */
#define TIMER_INTF_CMTIF_Pos       (5U)
#define TIMER_INTF_CMTIF_Msk       (0x1UL << TIMER_INTF_CMTIF_Pos)       /*!< 0x00000020 */
#define TIMER_INTF_CMTIF           TIMER_INTF_CMTIF_Msk                  /*!< Channel commutation interrupt flag */
#define TIMER_INTF_TRGIF_Pos       (6U)
#define TIMER_INTF_TRGIF_Msk       (0x1UL << TIMER_INTF_TRGIF_Pos)       /*!< 0x00000040 */
#define TIMER_INTF_TRGIF           TIMER_INTF_TRGIF_Msk                  /*!< Trigger interrupt flag */
#define TIMER_INTF_BRKIF_Pos       (7U)
#define TIMER_INTF_BRKIF_Msk       (0x1UL << TIMER_INTF_BRKIF_Pos)       /*!< 0x00000080 */
#define TIMER_INTF_BRKIF           TIMER_INTF_BRKIF_Msk                  /*!< Break interrupt flag */
#define TIMER_INTF_CH0OF_Pos       (9U)
#define TIMER_INTF_CH0OF_Msk       (0x1UL << TIMER_INTF_CH0OF_Pos)       /*!< 0x00000200 */
#define TIMER_INTF_CH0OF           TIMER_INTF_CH0OF_Msk                  /*!< Channel 0 over capture flag */
#define TIMER_INTF_CH1OF_Pos       (10U)
#define TIMER_INTF_CH1OF_Msk       (0x1UL << TIMER_INTF_CH1OF_Pos)       /*!< 0x00000400 */
#define TIMER_INTF_CH1OF           TIMER_INTF_CH1OF_Msk                  /*!< Channel 1 over capture flag */
#define TIMER_INTF_CH2OF_Pos       (11U)
#define TIMER_INTF_CH2OF_Msk       (0x1UL << TIMER_INTF_CH2OF_Pos)       /*!< 0x00000800 */
#define TIMER_INTF_CH2OF           TIMER_INTF_CH2OF_Msk                  /*!< Channel 2 over capture flag */
#define TIMER_INTF_CH3OF_Pos       (12U)
#define TIMER_INTF_CH3OF_Msk       (0x1UL << TIMER_INTF_CH3OF_Pos)       /*!< 0x00001000 */
#define TIMER_INTF_CH3OF           TIMER_INTF_CH3OF_Msk                  /*!< Channel 3 over capture flag */

/* TIMER_SWEVG */
#define TIMER_SWEVG_UPG_Pos        (0U)
#define TIMER_SWEVG_UPG_Msk        (0x1UL << TIMER_SWEVG_UPG_Pos)        /*!< 0x00000001 */
#define TIMER_SWEVG_UPG            TIMER_SWEVG_UPG_Msk                   /*!< Update event generation */
#define TIMER_SWEVG_CH0G_Pos       (1U)
#define TIMER_SWEVG_CH0G_Msk       (0x1UL << TIMER_SWEVG_CH0G_Pos)       /*!< 0x00000002 */
#define TIMER_SWEVG_CH0G           TIMER_SWEVG_CH0G_Msk                  /*!< Channel 0 capture or compare event generation */
#define TIMER_SWEVG_CH1G_Pos       (2U)
#define TIMER_SWEVG_CH1G_Msk       (0x1UL << TIMER_SWEVG_CH1G_Pos)       /*!< 0x00000004 */
#define TIMER_SWEVG_CH1G           TIMER_SWEVG_CH1G_Msk                  /*!< Channel 1 capture or compare event generation */
#define TIMER_SWEVG_CH2G_Pos       (3U)
#define TIMER_SWEVG_CH2G_Msk       (0x1UL << TIMER_SWEVG_CH2G_Pos)       /*!< 0x00000008 */
#define TIMER_SWEVG_CH2G           TIMER_SWEVG_CH2G_Msk                  /*!< Channel 2 capture or compare event generation */
#define TIMER_SWEVG_CH3G_Pos       (4U)
#define TIMER_SWEVG_CH3G_Msk       (0x1UL << TIMER_SWEVG_CH3G_Pos)       /*!< 0x00000010 */
#define TIMER_SWEVG_CH3G           TIMER_SWEVG_CH3G_Msk                  /*!< Channel 3 capture or compare event generation */
#define TIMER_SWEVG_CMTG_Pos       (5U)
#define TIMER_SWEVG_CMTG_Msk       (0x1UL << TIMER_SWEVG_CMTG_Pos)       /*!< 0x00000020 */
#define TIMER_SWEVG_CMTG           TIMER_SWEVG_CMTG_Msk                  /*!< Channel commutation event generation */
#define TIMER_SWEVG_TRGG_Pos       (6U)
#define TIMER_SWEVG_TRGG_Msk       (0x1UL << TIMER_SWEVG_TRGG_Pos)       /*!< 0x00000040 */
#define TIMER_SWEVG_TRGG           TIMER_SWEVG_TRGG_Msk                  /*!< Trigger event generation */
#define TIMER_SWEVG_BRKG_Pos       (7U)
#define TIMER_SWEVG_BRKG_Msk       (0x1UL << TIMER_SWEVG_BRKG_Pos)       /*!< 0x00000080 */
#define TIMER_SWEVG_BRKG           TIMER_SWEVG_BRKG_Msk                  /*!< Break event generation */

/* TIMER_CHCTL0 */
/* output compare mode */
#define TIMER_CHCTL0_CH0MS_Pos     (0U)
#define TIMER_CHCTL0_CH0MS_Msk     (0x3UL << TIMER_CHCTL0_CH0MS_Pos)     /*!< 0x00000003 */
#define TIMER_CHCTL0_CH0MS         TIMER_CHCTL0_CH0MS_Msk                /*!< CH0MS[1:0] bits (Channel 0 mode selection) */
#define TIMER_CHCTL0_CH0MS_0       (0x1UL << TIMER_CHCTL0_CH0MS_Pos)     /*!< 0x00000001 */
#define TIMER_CHCTL0_CH0MS_1       (0x2UL << TIMER_CHCTL0_CH0MS_Pos)     /*!< 0x00000002 */

#define TIMER_CHCTL0_CH0COMFEN_Pos (2U)
#define TIMER_CHCTL0_CH0COMFEN_Msk (0x1UL << TIMER_CHCTL0_CH0COMFEN_Pos) /*!< 0x00000004 */
#define TIMER_CHCTL0_CH0COMFEN     TIMER_CHCTL0_CH0COMFEN_Msk            /*!< Channel 0 output compare fast enable */
#define TIMER_CHCTL0_CH0COMSEN_Pos (3U)
#define TIMER_CHCTL0_CH0COMSEN_Msk (0x1UL << TIMER_CHCTL0_CH0COMSEN_Pos) /*!< 0x00000008 */
#define TIMER_CHCTL0_CH0COMSEN     TIMER_CHCTL0_CH0COMSEN_Msk            /*!< Channel 0 output compare shadow enable */

#define TIMER_CHCTL0_CH0COMCTL_Pos (4U)
#define TIMER_CHCTL0_CH0COMCTL_Msk (0x7UL << TIMER_CHCTL0_CH0COMCTL_Pos) /*!< 0x00000070 */
#define TIMER_CHCTL0_CH0COMCTL     TIMER_CHCTL0_CH0COMCTL_Msk            /*!< CH0COMCTL[2:0] bits (Channel 0 compare output control) */
#define TIMER_CHCTL0_CH0COMCTL_0   (0x1UL << TIMER_CHCTL0_CH0COMCTL_Pos) /*!< 0x00000010 */
#define TIMER_CHCTL0_CH0COMCTL_1   (0x2UL << TIMER_CHCTL0_CH0COMCTL_Pos) /*!< 0x00000020 */
#define TIMER_CHCTL0_CH0COMCTL_2   (0x4UL << TIMER_CHCTL0_CH0COMCTL_Pos) /*!< 0x00000040 */

#define TIMER_CHCTL0_CH0COMCEN_Pos (7U)
#define TIMER_CHCTL0_CH0COMCEN_Msk (0x1UL << TIMER_CHCTL0_CH0COMCEN_Pos) /*!< 0x00000080 */
#define TIMER_CHCTL0_CH0COMCEN     TIMER_CHCTL0_CH0COMCEN_Msk            /*!< Channel 0 output compare clear enable */

#define TIMER_CHCTL0_CH1MS_Pos     (8U)
#define TIMER_CHCTL0_CH1MS_Msk     (0x3UL << TIMER_CHCTL0_CH1MS_Pos)     /*!< 0x00000300 */
#define TIMER_CHCTL0_CH1MS         TIMER_CHCTL0_CH1MS_Msk                /*!< CH1MS[1:0] bits (Channel 1 mode selection) */
#define TIMER_CHCTL0_CH1MS_0       (0x1UL << TIMER_CHCTL0_CH1MS_Pos)     /*!< 0x00000100 */
#define TIMER_CHCTL0_CH1MS_1       (0x2UL << TIMER_CHCTL0_CH1MS_Pos)     /*!< 0x00000200 */

#define TIMER_CHCTL0_CH1COMFEN_Pos (10U)
#define TIMER_CHCTL0_CH1COMFEN_Msk (0x1UL << TIMER_CHCTL0_CH1COMFEN_Pos) /*!< 0x00000400 */
#define TIMER_CHCTL0_CH1COMFEN     TIMER_CHCTL0_CH1COMFEN_Msk            /*!< Channel 1 output compare fast enable */
#define TIMER_CHCTL0_CH1COMSEN_Pos (11U)
#define TIMER_CHCTL0_CH1COMSEN_Msk (0x1UL << TIMER_CHCTL0_CH1COMSEN_Pos) /*!< 0x00000800 */
#define TIMER_CHCTL0_CH1COMSEN     TIMER_CHCTL0_CH1COMSEN_Msk            /*!< Channel 1 output compare shadow enable */

#define TIMER_CHCTL0_CH1COMCTL_Pos (12U)
#define TIMER_CHCTL0_CH1COMCTL_Msk (0x7UL << TIMER_CHCTL0_CH1COMCTL_Pos) /*!< 0x00007000 */
#define TIMER_CHCTL0_CH1COMCTL     TIMER_CHCTL0_CH1COMCTL_Msk            /*!< CH1COMCTL[2:0] bits (Channel 1 compare output control) */
#define TIMER_CHCTL0_CH1COMCTL_0   (0x1UL << TIMER_CHCTL0_CH1COMCTL_Pos) /*!< 0x00001000 */
#define TIMER_CHCTL0_CH1COMCTL_1   (0x2UL << TIMER_CHCTL0_CH1COMCTL_Pos) /*!< 0x00002000 */
#define TIMER_CHCTL0_CH1COMCTL_2   (0x4UL << TIMER_CHCTL0_CH1COMCTL_Pos) /*!< 0x00004000 */

#define TIMER_CHCTL0_CH1COMCEN_Pos (15U)
#define TIMER_CHCTL0_CH1COMCEN_Msk (0x1UL << TIMER_CHCTL0_CH1COMCEN_Pos) /*!< 0x00008000 */
#define TIMER_CHCTL0_CH1COMCEN     TIMER_CHCTL0_CH1COMCEN_Msk            /*!< Channel 1 output compare clear enable */

/* input capture mode */
#define TIMER_CHCTL0_CH0CAPPSC_Pos (2U)
#define TIMER_CHCTL0_CH0CAPPSC_Msk (0x3UL << TIMER_CHCTL0_CH0CAPPSC_Pos) /*!< 0x0000000C */
#define TIMER_CHCTL0_CH0CAPPSC     TIMER_CHCTL0_CH0CAPPSC_Msk            /*!< CH0CAPPSC[1:0] bits (Channel 0 input capture prescaler) */
#define TIMER_CHCTL0_CH0CAPPSC_0   (0x1UL << TIMER_CHCTL0_CH0CAPPSC_Pos) /*!< 0x00000004 */
#define TIMER_CHCTL0_CH0CAPPSC_1   (0x2UL << TIMER_CHCTL0_CH0CAPPSC_Pos) /*!< 0x00000008 */

#define TIMER_CHCTL0_CH0CAPFLT_Pos (4U)
#define TIMER_CHCTL0_CH0CAPFLT_Msk (0xFUL << TIMER_CHCTL0_CH0CAPFLT_Pos) /*!< 0x000000F0 */
#define TIMER_CHCTL0_CH0CAPFLT     TIMER_CHCTL0_CH0CAPFLT_Msk            /*!< CH0CAPFLT[3:0] bits (Channel 0 input capture filter control) */
#define TIMER_CHCTL0_CH0CAPFLT_0   (0x1UL << TIMER_CHCTL0_CH0CAPFLT_Pos) /*!< 0x00000010 */
#define TIMER_CHCTL0_CH0CAPFLT_1   (0x2UL << TIMER_CHCTL0_CH0CAPFLT_Pos) /*!< 0x00000020 */
#define TIMER_CHCTL0_CH0CAPFLT_2   (0x4UL << TIMER_CHCTL0_CH0CAPFLT_Pos) /*!< 0x00000040 */
#define TIMER_CHCTL0_CH0CAPFLT_3   (0x8UL << TIMER_CHCTL0_CH0CAPFLT_Pos) /*!< 0x00000080 */

#define TIMER_CHCTL0_CH1CAPPSC_Pos (10U)
#define TIMER_CHCTL0_CH1CAPPSC_Msk (0x3UL << TIMER_CHCTL0_CH1CAPPSC_Pos) /*!< 0x00000C00 */
#define TIMER_CHCTL0_CH1CAPPSC     TIMER_CHCTL0_CH1CAPPSC_Msk            /*!< CH1CAPPSC[1:0] bits (Channel 1 input capture prescaler) */
#define TIMER_CHCTL0_CH1CAPPSC_0   (0x1UL << TIMER_CHCTL0_CH1CAPPSC_Pos) /*!< 0x00000400 */
#define TIMER_CHCTL0_CH1CAPPSC_1   (0x2UL << TIMER_CHCTL0_CH1CAPPSC_Pos) /*!< 0x00000800 */

#define TIMER_CHCTL0_CH1CAPFLT_Pos (12U)
#define TIMER_CHCTL0_CH1CAPFLT_Msk (0xFUL << TIMER_CHCTL0_CH1CAPFLT_Pos) /*!< 0x0000F000 */
#define TIMER_CHCTL0_CH1CAPFLT     TIMER_CHCTL0_CH1CAPFLT_Msk            /*!< CH1CAPFLT[3:0] bits (Channel 1 input capture filter control) */
#define TIMER_CHCTL0_CH1CAPFLT_0   (0x1UL << TIMER_CHCTL0_CH1CAPFLT_Pos) /*!< 0x00001000 */
#define TIMER_CHCTL0_CH1CAPFLT_1   (0x2UL << TIMER_CHCTL0_CH1CAPFLT_Pos) /*!< 0x00002000 */
#define TIMER_CHCTL0_CH1CAPFLT_2   (0x4UL << TIMER_CHCTL0_CH1CAPFLT_Pos) /*!< 0x00004000 */
#define TIMER_CHCTL0_CH1CAPFLT_3   (0x8UL << TIMER_CHCTL0_CH1CAPFLT_Pos) /*!< 0x00008000 */

/* TIMER_CHCTL1 */
/* output compare mode */
#define TIMER_CHCTL1_CH2MS_Pos     (0U)
#define TIMER_CHCTL1_CH2MS_Msk     (0x3UL << TIMER_CHCTL1_CH2MS_Pos)     /*!< 0x00000003 */
#define TIMER_CHCTL1_CH2MS         TIMER_CHCTL1_CH2MS_Msk                /*!< CH2MS[1:0] bits (Channel 2 mode selection) */
#define TIMER_CHCTL1_CH2MS_0       (0x1UL << TIMER_CHCTL1_CH2MS_Pos)     /*!< 0x00000001 */
#define TIMER_CHCTL1_CH2MS_1       (0x2UL << TIMER_CHCTL1_CH2MS_Pos)     /*!< 0x00000002 */

#define TIMER_CHCTL1_CH2COMFEN_Pos (2U)
#define TIMER_CHCTL1_CH2COMFEN_Msk (0x1UL << TIMER_CHCTL1_CH2COMFEN_Pos) /*!< 0x00000004 */
#define TIMER_CHCTL1_CH2COMFEN     TIMER_CHCTL1_CH2COMFEN_Msk            /*!< Channel 2 output compare fast enable */
#define TIMER_CHCTL1_CH2COMSEN_Pos (3U)
#define TIMER_CHCTL1_CH2COMSEN_Msk (0x1UL << TIMER_CHCTL1_CH2COMSEN_Pos) /*!< 0x00000008 */
#define TIMER_CHCTL1_CH2COMSEN     TIMER_CHCTL1_CH2COMSEN_Msk            /*!< Channel 2 output compare shadow enable */

#define TIMER_CHCTL1_CH2COMCTL_Pos (4U)
#define TIMER_CHCTL1_CH2COMCTL_Msk (0x7UL << TIMER_CHCTL1_CH2COMCTL_Pos) /*!< 0x00000070 */
#define TIMER_CHCTL1_CH2COMCTL     TIMER_CHCTL1_CH2COMCTL_Msk            /*!< CH2COMCTL[2:0] bits (Channel 2 compare output control) */
#define TIMER_CHCTL1_CH2COMCTL_0   (0x1UL << TIMER_CHCTL1_CH2COMCTL_Pos) /*!< 0x00000010 */
#define TIMER_CHCTL1_CH2COMCTL_1   (0x2UL << TIMER_CHCTL1_CH2COMCTL_Pos) /*!< 0x00000020 */
#define TIMER_CHCTL1_CH2COMCTL_2   (0x4UL << TIMER_CHCTL1_CH2COMCTL_Pos) /*!< 0x00000040 */

#define TIMER_CHCTL1_CH2COMCEN_Pos (7U)
#define TIMER_CHCTL1_CH2COMCEN_Msk (0x1UL << TIMER_CHCTL1_CH2COMCEN_Pos) /*!< 0x00000080 */
#define TIMER_CHCTL1_CH2COMCEN     TIMER_CHCTL1_CH2COMCEN_Msk            /*!< Channel 2 output compare clear enable */

#define TIMER_CHCTL1_CH3MS_Pos     (8U)
#define TIMER_CHCTL1_CH3MS_Msk     (0x3UL << TIMER_CHCTL1_CH3MS_Pos)     /*!< 0x00000300 */
#define TIMER_CHCTL1_CH3MS         TIMER_CHCTL1_CH3MS_Msk                /*!< CH3MS[1:0] bits (Channel 3 mode selection) */
#define TIMER_CHCTL1_CH3MS_0       (0x1UL << TIMER_CHCTL1_CH3MS_Pos)     /*!< 0x00000100 */
#define TIMER_CHCTL1_CH3MS_1       (0x2UL << TIMER_CHCTL1_CH3MS_Pos)     /*!< 0x00000200 */

#define TIMER_CHCTL1_CH3COMFEN_Pos (10U)
#define TIMER_CHCTL1_CH3COMFEN_Msk (0x1UL << TIMER_CHCTL1_CH3COMFEN_Pos) /*!< 0x00000400 */
#define TIMER_CHCTL1_CH3COMFEN     TIMER_CHCTL1_CH3COMFEN_Msk            /*!< Channel 3 output compare fast enable */
#define TIMER_CHCTL1_CH3COMSEN_Pos (11U)
#define TIMER_CHCTL1_CH3COMSEN_Msk (0x1UL << TIMER_CHCTL1_CH3COMSEN_Pos) /*!< 0x00000800 */
#define TIMER_CHCTL1_CH3COMSEN     TIMER_CHCTL1_CH3COMSEN_Msk            /*!< Channel 3 output compare shadow enable */

#define TIMER_CHCTL1_CH3COMCTL_Pos (12U)
#define TIMER_CHCTL1_CH3COMCTL_Msk (0x7UL << TIMER_CHCTL1_CH3COMCTL_Pos) /*!< 0x00007000 */
#define TIMER_CHCTL1_CH3COMCTL     TIMER_CHCTL1_CH3COMCTL_Msk            /*!< CH3COMCTL[2:0] bits (Channel 3 compare output control) */
#define TIMER_CHCTL1_CH3COMCTL_0   (0x1UL << TIMER_CHCTL1_CH3COMCTL_Pos) /*!< 0x00001000 */
#define TIMER_CHCTL1_CH3COMCTL_1   (0x2UL << TIMER_CHCTL1_CH3COMCTL_Pos) /*!< 0x00002000 */
#define TIMER_CHCTL1_CH3COMCTL_2   (0x4UL << TIMER_CHCTL1_CH3COMCTL_Pos) /*!< 0x00004000 */

#define TIMER_CHCTL1_CH3COMCEN_Pos (15U)
#define TIMER_CHCTL1_CH3COMCEN_Msk (0x1UL << TIMER_CHCTL1_CH3COMCEN_Pos) /*!< 0x00008000 */
#define TIMER_CHCTL1_CH3COMCEN     TIMER_CHCTL1_CH3COMCEN_Msk            /*!< Channel 3 output compare clear enable */

/* TIMER_CHCTL1 */
/* input capture mode */
#define TIMER_CHCTL1_CH2CAPPSC_Pos (2U)
#define TIMER_CHCTL1_CH2CAPPSC_Msk (0x3UL << TIMER_CHCTL1_CH2CAPPSC_Pos) /*!< 0x0000000C */
#define TIMER_CHCTL1_CH2CAPPSC     TIMER_CHCTL1_CH2CAPPSC_Msk            /*!< CH2CAPPSC[1:0] bits (Channel 2 input capture prescaler) */
#define TIMER_CHCTL1_CH2CAPPSC_0   (0x1UL << TIMER_CHCTL1_CH2CAPPSC_Pos) /*!< 0x00000004 */
#define TIMER_CHCTL1_CH2CAPPSC_1   (0x2UL << TIMER_CHCTL1_CH2CAPPSC_Pos) /*!< 0x00000008 */

#define TIMER_CHCTL1_CH2CAPFLT_Pos (4U)
#define TIMER_CHCTL1_CH2CAPFLT_Msk (0xFUL << TIMER_CHCTL1_CH2CAPFLT_Pos) /*!< 0x000000F0 */
#define TIMER_CHCTL1_CH2CAPFLT     TIMER_CHCTL1_CH2CAPFLT_Msk            /*!< CH2CAPFLT[3:0] bits (Channel 2 input capture filter control) */
#define TIMER_CHCTL1_CH2CAPFLT_0   (0x1UL << TIMER_CHCTL1_CH2CAPFLT_Pos) /*!< 0x00000010 */
#define TIMER_CHCTL1_CH2CAPFLT_1   (0x2UL << TIMER_CHCTL1_CH2CAPFLT_Pos) /*!< 0x00000020 */
#define TIMER_CHCTL1_CH2CAPFLT_2   (0x4UL << TIMER_CHCTL1_CH2CAPFLT_Pos) /*!< 0x00000040 */
#define TIMER_CHCTL1_CH2CAPFLT_3   (0x8UL << TIMER_CHCTL1_CH2CAPFLT_Pos) /*!< 0x00000080 */

#define TIMER_CHCTL1_CH3CAPPSC_Pos (10U)
#define TIMER_CHCTL1_CH3CAPPSC_Msk (0x3UL << TIMER_CHCTL1_CH3CAPPSC_Pos) /*!< 0x00000C00 */
#define TIMER_CHCTL1_CH3CAPPSC     TIMER_CHCTL1_CH3CAPPSC_Msk            /*!< CH3CAPPSC[1:0] bits (Channel 3 input capture prescaler) */
#define TIMER_CHCTL1_CH3CAPPSC_0   (0x1UL << TIMER_CHCTL1_CH3CAPPSC_Pos) /*!< 0x00000400 */
#define TIMER_CHCTL1_CH3CAPPSC_1   (0x2UL << TIMER_CHCTL1_CH3CAPPSC_Pos) /*!< 0x00000800 */

#define TIMER_CHCTL1_CH3CAPFLT_Pos (12U)
#define TIMER_CHCTL1_CH3CAPFLT_Msk (0xFUL << TIMER_CHCTL1_CH3CAPFLT_Pos) /*!< 0x0000F000 */
#define TIMER_CHCTL1_CH3CAPFLT     TIMER_CHCTL1_CH3CAPFLT_Msk            /*!< CH3CAPFLT[3:0] bits (Channel 3 input capture filter control) */
#define TIMER_CHCTL1_CH3CAPFLT_0   (0x1UL << TIMER_CHCTL1_CH3CAPFLT_Pos) /*!< 0x00001000 */
#define TIMER_CHCTL1_CH3CAPFLT_1   (0x2UL << TIMER_CHCTL1_CH3CAPFLT_Pos) /*!< 0x00002000 */
#define TIMER_CHCTL1_CH3CAPFLT_2   (0x4UL << TIMER_CHCTL1_CH3CAPFLT_Pos) /*!< 0x00004000 */
#define TIMER_CHCTL1_CH3CAPFLT_3   (0x8UL << TIMER_CHCTL1_CH3CAPFLT_Pos) /*!< 0x00008000 */

/* TIMER_CHCTL2 */
#define TIMER_CHCTL2_CH0EN_Pos     (0U)
#define TIMER_CHCTL2_CH0EN_Msk     (0x1UL << TIMER_CHCTL2_CH0EN_Pos)     /*!< 0x00000001 */
#define TIMER_CHCTL2_CH0EN         TIMER_CHCTL2_CH0EN_Msk                /*!< Channel 0 capture/compare function enable */
#define TIMER_CHCTL2_CH0P_Pos      (1U)
#define TIMER_CHCTL2_CH0P_Msk      (0x1UL << TIMER_CHCTL2_CH0P_Pos)      /*!< 0x00000002 */
#define TIMER_CHCTL2_CH0P          TIMER_CHCTL2_CH0P_Msk                 /*!< Channel 0 capture/compare function polarity */
#define TIMER_CHCTL2_CH0NEN_Pos    (2U)
#define TIMER_CHCTL2_CH0NEN_Msk    (0x1UL << TIMER_CHCTL2_CH0NEN_Pos)    /*!< 0x00000004 */
#define TIMER_CHCTL2_CH0NEN        TIMER_CHCTL2_CH0NEN_Msk               /*!< Channel 0 complementary output enable */
#define TIMER_CHCTL2_CH0NP_Pos     (3U)
#define TIMER_CHCTL2_CH0NP_Msk     (0x1UL << TIMER_CHCTL2_CH0NP_Pos)     /*!< 0x00000008 */
#define TIMER_CHCTL2_CH0NP         TIMER_CHCTL2_CH0NP_Msk                /*!< Channel 0 complementary output polarity */
#define TIMER_CHCTL2_CH1EN_Pos     (4U)
#define TIMER_CHCTL2_CH1EN_Msk     (0x1UL << TIMER_CHCTL2_CH1EN_Pos)     /*!< 0x00000010 */
#define TIMER_CHCTL2_CH1EN         TIMER_CHCTL2_CH1EN_Msk                /*!< Channel 1 capture/compare function enable */
#define TIMER_CHCTL2_CH1P_Pos      (5U)
#define TIMER_CHCTL2_CH1P_Msk      (0x1UL << TIMER_CHCTL2_CH1P_Pos)      /*!< 0x00000020 */
#define TIMER_CHCTL2_CH1P          TIMER_CHCTL2_CH1P_Msk                 /*!< Channel 1 capture/compare function polarity */
#define TIMER_CHCTL2_CH1NEN_Pos    (6U)
#define TIMER_CHCTL2_CH1NEN_Msk    (0x1UL << TIMER_CHCTL2_CH1NEN_Pos)    /*!< 0x00000040 */
#define TIMER_CHCTL2_CH1NEN        TIMER_CHCTL2_CH1NEN_Msk               /*!< Channel 1 complementary output enable */
#define TIMER_CHCTL2_CH1NP_Pos     (7U)
#define TIMER_CHCTL2_CH1NP_Msk     (0x1UL << TIMER_CHCTL2_CH1NP_Pos)     /*!< 0x00000080 */
#define TIMER_CHCTL2_CH1NP         TIMER_CHCTL2_CH1NP_Msk                /*!< Channel 1 complementary output polarity */
#define TIMER_CHCTL2_CH2EN_Pos     (8U)
#define TIMER_CHCTL2_CH2EN_Msk     (0x1UL << TIMER_CHCTL2_CH2EN_Pos)     /*!< 0x00000100 */
#define TIMER_CHCTL2_CH2EN         TIMER_CHCTL2_CH2EN_Msk                /*!< Channel 2 capture/compare function enable */
#define TIMER_CHCTL2_CH2P_Pos      (9U)
#define TIMER_CHCTL2_CH2P_Msk      (0x1UL << TIMER_CHCTL2_CH2P_Pos)      /*!< 0x00000200 */
#define TIMER_CHCTL2_CH2P          TIMER_CHCTL2_CH2P_Msk                 /*!< Channel 2 capture/compare function polarity */
#define TIMER_CHCTL2_CH2NEN_Pos    (10U)
#define TIMER_CHCTL2_CH2NEN_Msk    (0x1UL << TIMER_CHCTL2_CH2NEN_Pos)    /*!< 0x00000400 */
#define TIMER_CHCTL2_CH2NEN        TIMER_CHCTL2_CH2NEN_Msk               /*!< Channel 2 complementary output enable */
#define TIMER_CHCTL2_CH2NP_Pos     (11U)
#define TIMER_CHCTL2_CH2NP_Msk     (0x1UL << TIMER_CHCTL2_CH2NP_Pos)     /*!< 0x00000800 */
#define TIMER_CHCTL2_CH2NP         TIMER_CHCTL2_CH2NP_Msk                /*!< Channel 2 complementary output polarity */
#define TIMER_CHCTL2_CH3EN_Pos     (12U)
#define TIMER_CHCTL2_CH3EN_Msk     (0x1UL << TIMER_CHCTL2_CH3EN_Pos)     /*!< 0x00001000 */
#define TIMER_CHCTL2_CH3EN         TIMER_CHCTL2_CH3EN_Msk                /*!< Channel 3 capture/compare function enable */
#define TIMER_CHCTL2_CH3P_Pos      (13U)
#define TIMER_CHCTL2_CH3P_Msk      (0x1UL << TIMER_CHCTL2_CH3P_Pos)      /*!< 0x00002000 */
#define TIMER_CHCTL2_CH3P          TIMER_CHCTL2_CH3P_Msk                 /*!< Channel 3 capture/compare function polarity */
#define TIMER_CHCTL2_CH3NP_Pos     (15U)
#define TIMER_CHCTL2_CH3NP_Msk     (0x1UL << TIMER_CHCTL2_CH3NP_Pos)     /*!< 0x00008000 */
#define TIMER_CHCTL2_CH3NP         TIMER_CHCTL2_CH3NP_Msk                /*!< Channel 3 complementary output polarity */

/* TIMER_CNT */
#define TIMER_CNT_CNT_Pos          (0U)
#define TIMER_CNT_CNT_Msk          (0xFFFFUL << TIMER_CNT_CNT_Pos)       /*!< 0x0000FFFF */
#define TIMER_CNT_CNT              TIMER_CNT_CNT_Msk                     /*!< 16 bit counter value */

/* TIMER_PSC */
#define TIMER_PSC_PSC_Pos          (0U)
#define TIMER_PSC_PSC_Msk          (0xFFFFUL << TIMER_PSC_PSC_Pos)       /*!< 0x0000FFFF */
#define TIMER_PSC_PSC              TIMER_PSC_PSC_Msk                     /*!< Prescaler value */

/* TIMER_CAR */
#define TIMER_CAR_CARL_Pos         (0U)
#define TIMER_CAR_CARL_Msk         (0xFFFFUL << TIMER_CAR_CARL_Pos)      /*!< 0x0000FFFF */
#define TIMER_CAR_CARL             TIMER_CAR_CARL_Msk                    /*!< 16 bit counter auto reload value */

/* TIMER_CREP */
#define TIMER_CREP_CREP_Pos        (0U)
#define TIMER_CREP_CREP_Msk        (0xFFUL << TIMER_CREP_CREP_Pos)       /*!< 0x000000FF */
#define TIMER_CREP_CREP            TIMER_CREP_CREP_Msk                   /*!< Counter repetition value */

/* TIMER_CH0CV */
#define TIMER_CH0CV_CH0VAL_Pos     (0U)
#define TIMER_CH0CV_CH0VAL_Msk     (0xFFFFUL << TIMER_CH0CV_CH0VAL_Pos)  /*!< 0x0000FFFF */
#define TIMER_CH0CV_CH0VAL         TIMER_CH0CV_CH0VAL_Msk                /*!< 16 bit capture/compare value of channel 0 */

/* TIMER_CH1CV */
#define TIMER_CH1CV_CH1VAL_Pos     (0U)
#define TIMER_CH1CV_CH1VAL_Msk     (0xFFFFUL << TIMER_CH1CV_CH1VAL_Pos)  /*!< 0x0000FFFF */
#define TIMER_CH1CV_CH1VAL         TIMER_CH1CV_CH1VAL_Msk                /*!< 16 bit capture/compare value of channel 1 */

/* TIMER_CH2CV */
#define TIMER_CH2CV_CH2VAL_Pos     (0U)
#define TIMER_CH2CV_CH2VAL_Msk     (0xFFFFUL << TIMER_CH2CV_CH2VAL_Pos)  /*!< 0x0000FFFF */
#define TIMER_CH2CV_CH2VAL         TIMER_CH2CV_CH2VAL_Msk                /*!< 16 bit capture/compare value of channel 2 */

/* TIMER_CH3CV */
#define TIMER_CH3CV_CH3VAL_Pos     (0U)
#define TIMER_CH3CV_CH3VAL_Msk     (0xFFFFUL << TIMER_CH3CV_CH3VAL_Pos)  /*!< 0x0000FFFF */
#define TIMER_CH3CV_CH3VAL         TIMER_CH3CV_CH3VAL_Msk                /*!< 16 bit capture/compare value of channel 3 */

/* TIMER_CCHP */
#define TIMER_CCHP_DTCFG_Pos       (0U)
#define TIMER_CCHP_DTCFG_Msk       (0xFFUL << TIMER_CCHP_DTCFG_Pos)      /*!< 0x000000FF */
#define TIMER_CCHP_DTCFG           TIMER_CCHP_DTCFG_Msk                  /*!< DTCFG[0:7] bits (Dead time configure) */
#define TIMER_CCHP_DTCFG_0         (0x01UL << TIMER_CCHP_DTCFG_Pos)      /*!< 0x00000001 */
#define TIMER_CCHP_DTCFG_1         (0x02UL << TIMER_CCHP_DTCFG_Pos)      /*!< 0x00000002 */
#define TIMER_CCHP_DTCFG_2         (0x04UL << TIMER_CCHP_DTCFG_Pos)      /*!< 0x00000004 */
#define TIMER_CCHP_DTCFG_3         (0x08UL << TIMER_CCHP_DTCFG_Pos)      /*!< 0x00000008 */
#define TIMER_CCHP_DTCFG_4         (0x10UL << TIMER_CCHP_DTCFG_Pos)      /*!< 0x00000010 */
#define TIMER_CCHP_DTCFG_5         (0x20UL << TIMER_CCHP_DTCFG_Pos)      /*!< 0x00000020 */
#define TIMER_CCHP_DTCFG_6         (0x40UL << TIMER_CCHP_DTCFG_Pos)      /*!< 0x00000040 */
#define TIMER_CCHP_DTCFG_7         (0x80UL << TIMER_CCHP_DTCFG_Pos)      /*!< 0x00000080 */

#define TIMER_CCHP_PROT_Pos        (8U)
#define TIMER_CCHP_PROT_Msk        (0x3UL << TIMER_CCHP_PROT_Pos)        /*!< 0x00000300 */
#define TIMER_CCHP_PROT            TIMER_CCHP_PROT_Msk                   /*!< PROT[1:0] bits (Complementary register protect control) */
#define TIMER_CCHP_PROT_0          (0x1UL << TIMER_CCHP_PROT_Pos)        /*!< 0x00000100 */
#define TIMER_CCHP_PROT_1          (0x2UL << TIMER_CCHP_PROT_Pos)        /*!< 0x00000200 */

#define TIMER_CCHP_IOS_Pos         (10U)
#define TIMER_CCHP_IOS_Msk         (0x1UL << TIMER_CCHP_IOS_Pos)         /*!< 0x00000400 */
#define TIMER_CCHP_IOS             TIMER_CCHP_IOS_Msk                    /*!< Idle mode “off-state” enable */
#define TIMER_CCHP_ROS_Pos         (11U)
#define TIMER_CCHP_ROS_Msk         (0x1UL << TIMER_CCHP_ROS_Pos)         /*!< 0x00000800 */
#define TIMER_CCHP_ROS             TIMER_CCHP_ROS_Msk                    /*!< Run mode “off-state” enable */
#define TIMER_CCHP_BRKEN_Pos       (12U)
#define TIMER_CCHP_BRKEN_Msk       (0x1UL << TIMER_CCHP_BRKEN_Pos)       /*!< 0x00001000 */
#define TIMER_CCHP_BRKEN           TIMER_CCHP_BRKEN_Msk                  /*!< Break enable */
#define TIMER_CCHP_BRKP_Pos        (13U)
#define TIMER_CCHP_BRKP_Msk        (0x1UL << TIMER_CCHP_BRKP_Pos)        /*!< 0x00002000 */
#define TIMER_CCHP_BRKP            TIMER_CCHP_BRKP_Msk                   /*!< Break polarity */
#define TIMER_CCHP_OAEN_Pos        (14U)
#define TIMER_CCHP_OAEN_Msk        (0x1UL << TIMER_CCHP_OAEN_Pos)        /*!< 0x00004000 */
#define TIMER_CCHP_OAEN            TIMER_CCHP_OAEN_Msk                   /*!< Output automatic enable */
#define TIMER_CCHP_POEN_Pos        (15U)
#define TIMER_CCHP_POEN_Msk        (0x1UL << TIMER_CCHP_POEN_Pos)        /*!< 0x00008000 */
#define TIMER_CCHP_POEN            TIMER_CCHP_POEN_Msk                   /*!< Primary output enable */

/* TIMER_DMACFG */
#define TIMER_DMACFG_DMATA_Pos     (0U)
#define TIMER_DMACFG_DMATA_Msk     (0x1FUL << TIMER_DMACFG_DMATA_Pos)    /*!< 0x0000001F */
#define TIMER_DMACFG_DMATA         TIMER_DMACFG_DMATA_Msk                /*!< DMATA[4:0] bits (DMA transfer access start address) */
#define TIMER_DMACFG_DMATA_0       (0x01UL << TIMER_DMACFG_DMATA_Pos)    /*!< 0x00000001 */
#define TIMER_DMACFG_DMATA_1       (0x02UL << TIMER_DMACFG_DMATA_Pos)    /*!< 0x00000002 */
#define TIMER_DMACFG_DMATA_2       (0x04UL << TIMER_DMACFG_DMATA_Pos)    /*!< 0x00000004 */
#define TIMER_DMACFG_DMATA_3       (0x08UL << TIMER_DMACFG_DMATA_Pos)    /*!< 0x00000008 */
#define TIMER_DMACFG_DMATA_4       (0x10UL << TIMER_DMACFG_DMATA_Pos)    /*!< 0x00000010 */

#define TIMER_DMACFG_DMATC_Pos     (8U)
#define TIMER_DMACFG_DMATC_Msk     (0x1FUL << TIMER_DMACFG_DMATC_Pos)    /*!< 0x00001F00 */
#define TIMER_DMACFG_DMATC         TIMER_DMACFG_DMATC_Msk                /*!< DMATC[4:0] bits (DMA transfer count) */
#define TIMER_DMACFG_DMATC_0       (0x01UL << TIMER_DMACFG_DMATC_Pos)    /*!< 0x00000100 */
#define TIMER_DMACFG_DMATC_1       (0x02UL << TIMER_DMACFG_DMATC_Pos)    /*!< 0x00000200 */
#define TIMER_DMACFG_DMATC_2       (0x04UL << TIMER_DMACFG_DMATC_Pos)    /*!< 0x00000400 */
#define TIMER_DMACFG_DMATC_3       (0x08UL << TIMER_DMACFG_DMATC_Pos)    /*!< 0x00000800 */
#define TIMER_DMACFG_DMATC_4       (0x10UL << TIMER_DMACFG_DMATC_Pos)    /*!< 0x00001000 */

/* TIMER_DMATB */
#define TIMER_DMATB_DMATB_Pos      (0U)
#define TIMER_DMATB_DMATB_Msk      (0xFFFFUL << TIMER_DMATB_DMATB_Pos)   /*!< 0x0000FFFF */
#define TIMER_DMATB_DMATB          TIMER_DMATB_DMATB_Msk                 /*!< DMA transfer buffer */

/* TIMER_CFG */
#define TIMER_CFG_OUTSEL_Pos       (0U)
#define TIMER_CFG_OUTSEL_Msk       (0x1UL << TIMER_CFG_OUTSEL_Pos)       /*!< 0x00000001 */
#define TIMER_CFG_OUTSEL           TIMER_CFG_OUTSEL_Msk                  /*!< The output value selection bit */
#define TIMER_CFG_CHVSEL_Pos       (1U)
#define TIMER_CFG_CHVSEL_Msk       (0x1UL << TIMER_CFG_CHVSEL_Pos)       /*!< 0x00000002 */
#define TIMER_CFG_CHVSEL           TIMER_CFG_CHVSEL_Msk                  /*!< Write CHxVAL register selection bit */

#endif // GD32E10X_TIMER_H_

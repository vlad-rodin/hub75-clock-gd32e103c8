#ifndef GD32E10X_DMA_H_
#define GD32E10X_DMA_H_

/* DMA struct */
typedef struct
{
  __IO uint32_t CTL;            /*!< DMA channel x control register,                 0x00-0x03 */
  __IO uint32_t CNT;            /*!< DMA channel x counter register,                 0x04-0x07 */
  __IO uint32_t PADDR;          /*!< DMA channel x peripheral base address register, 0x08-0x0B */
  __IO uint32_t MADDR;          /*!< DMA channel x memory base address register,     0x0C-0x0F */
       uint32_t RESERVED;       /*!< Reserved,                                       0x10-0x13 */
} DMA_Channel_TypeDef;

typedef struct
{
  __IO uint32_t INTF;           /*!< DMA interrupt flag register,       0x000-0x003 */
  __IO uint32_t INTC;           /*!< DMA interrupt flag clear register, 0x004-0x007 */
  DMA_Channel_TypeDef CH[7];    /*!< DMA channel x,                     0x008-0x093 */
       uint32_t RESERVED[219];  /*!< Reserved,                          0x094-0x3FF */
} DMA_TypeDef;

/* DMA definitions */
#define DMA                     ((DMA_TypeDef **) DMA_BASE)              /*!< DMA base address array */
#define DMA0                    (DMA[0])                                 /*!< DMA0 base address */
#define DMA1                    (DMA[1])                                 /*!< DMA1 base address */

/* bits definitions */
/* DMA_INTF */
#define DMA_INTF_GIF0_Pos       (0U)
#define DMA_INTF_GIF0_Msk       (0x1UL << DMA_INTF_GIF0_Pos)             /*!< 0x00000001 */
#define DMA_INTF_GIF0           DMA_INTF_GIF0_Msk                        /*!< Channel 0 Global interrupt flag */
#define DMA_INTF_FTFIF0_Pos     (1U)
#define DMA_INTF_FTFIF0_Msk     (0x1UL << DMA_INTF_FTFIF0_Pos)           /*!< 0x00000002 */
#define DMA_INTF_FTFIF0         DMA_INTF_FTFIF0_Msk                      /*!< Channel 0 Full transfer finish interrupt flag */
#define DMA_INTF_HTFIF0_Pos     (2U)
#define DMA_INTF_HTFIF0_Msk     (0x1UL << DMA_INTF_HTFIF0_Pos)           /*!< 0x00000004 */
#define DMA_INTF_HTFIF0         DMA_INTF_HTFIF0_Msk                      /*!< Channel 0 Half transfer finish interrupt flag */
#define DMA_INTF_ERRIF0_Pos     (3U)
#define DMA_INTF_ERRIF0_Msk     (0x1UL << DMA_INTF_ERRIF0_Pos)           /*!< 0x00000008 */
#define DMA_INTF_ERRIF0         DMA_INTF_ERRIF0_Msk                      /*!< Channel 0 Error interrupt flag */
#define DMA_INTF_GIF1_Pos       (4U)
#define DMA_INTF_GIF1_Msk       (0x1UL << DMA_INTF_GIF1_Pos)             /*!< 0x00000010 */
#define DMA_INTF_GIF1           DMA_INTF_GIF1_Msk                        /*!< Channel 1 Global interrupt flag */
#define DMA_INTF_FTFIF1_Pos     (5U)
#define DMA_INTF_FTFIF1_Msk     (0x1UL << DMA_INTF_FTFIF1_Pos)           /*!< 0x00000020 */
#define DMA_INTF_FTFIF1         DMA_INTF_FTFIF1_Msk                      /*!< Channel 1 Full transfer finish interrupt flag */
#define DMA_INTF_HTFIF1_Pos     (6U)
#define DMA_INTF_HTFIF1_Msk     (0x1UL << DMA_INTF_HTFIF1_Pos)           /*!< 0x00000040 */
#define DMA_INTF_HTFIF1         DMA_INTF_HTFIF1_Msk                      /*!< Channel 1 Half transfer finish interrupt flag */
#define DMA_INTF_ERRIF1_Pos     (7U)
#define DMA_INTF_ERRIF1_Msk     (0x1UL << DMA_INTF_ERRIF1_Pos)           /*!< 0x00000080 */
#define DMA_INTF_ERRIF1         DMA_INTF_ERRIF1_Msk                      /*!< Channel 1 Error interrupt flag */
#define DMA_INTF_GIF2_Pos       (8U)
#define DMA_INTF_GIF2_Msk       (0x1UL << DMA_INTF_GIF2_Pos)             /*!< 0x00000100 */
#define DMA_INTF_GIF2           DMA_INTF_GIF2_Msk                        /*!< Channel 2 Global interrupt flag */
#define DMA_INTF_FTFIF2_Pos     (9U)
#define DMA_INTF_FTFIF2_Msk     (0x1UL << DMA_INTF_FTFIF2_Pos)           /*!< 0x00000200 */
#define DMA_INTF_FTFIF2         DMA_INTF_FTFIF2_Msk                      /*!< Channel 2 Full transfer finish interrupt flag */
#define DMA_INTF_HTFIF2_Pos     (10U)
#define DMA_INTF_HTFIF2_Msk     (0x1UL << DMA_INTF_HTFIF2_Pos)           /*!< 0x00000400 */
#define DMA_INTF_HTFIF2         DMA_INTF_HTFIF2_Msk                      /*!< Channel 2 Half transfer finish interrupt flag */
#define DMA_INTF_ERRIF2_Pos     (11U)
#define DMA_INTF_ERRIF2_Msk     (0x1UL << DMA_INTF_ERRIF2_Pos)           /*!< 0x00000800 */
#define DMA_INTF_ERRIF2         DMA_INTF_ERRIF2_Msk                      /*!< Channel 2 Error interrupt flag */
#define DMA_INTF_GIF3_Pos       (12U)
#define DMA_INTF_GIF3_Msk       (0x1UL << DMA_INTF_GIF3_Pos)             /*!< 0x00001000 */
#define DMA_INTF_GIF3           DMA_INTF_GIF3_Msk                        /*!< Channel 3 Global interrupt flag */
#define DMA_INTF_FTFIF3_Pos     (13U)
#define DMA_INTF_FTFIF3_Msk     (0x1UL << DMA_INTF_FTFIF3_Pos)           /*!< 0x00002000 */
#define DMA_INTF_FTFIF3         DMA_INTF_FTFIF3_Msk                      /*!< Channel 3 Full transfer finish interrupt flag */
#define DMA_INTF_HTFIF3_Pos     (14U)
#define DMA_INTF_HTFIF3_Msk     (0x1UL << DMA_INTF_HTFIF3_Pos)           /*!< 0x00004000 */
#define DMA_INTF_HTFIF3         DMA_INTF_HTFIF3_Msk                      /*!< Channel 3 Half transfer finish interrupt flag */
#define DMA_INTF_ERRIF3_Pos     (15U)
#define DMA_INTF_ERRIF3_Msk     (0x1UL << DMA_INTF_ERRIF3_Pos)           /*!< 0x00008000 */
#define DMA_INTF_ERRIF3         DMA_INTF_ERRIF3_Msk                      /*!< Channel 3 Error interrupt flag */
#define DMA_INTF_GIF4_Pos       (16U)
#define DMA_INTF_GIF4_Msk       (0x1UL << DMA_INTF_GIF4_Pos)             /*!< 0x00010000 */
#define DMA_INTF_GIF4           DMA_INTF_GIF4_Msk                        /*!< Channel 4 Global interrupt flag */
#define DMA_INTF_FTFIF4_Pos     (17U)
#define DMA_INTF_FTFIF4_Msk     (0x1UL << DMA_INTF_FTFIF4_Pos)           /*!< 0x00020000 */
#define DMA_INTF_FTFIF4         DMA_INTF_FTFIF4_Msk                      /*!< Channel 4 Full transfer finish interrupt flag */
#define DMA_INTF_HTFIF4_Pos     (18U)
#define DMA_INTF_HTFIF4_Msk     (0x1UL << DMA_INTF_HTFIF4_Pos)           /*!< 0x00040000 */
#define DMA_INTF_HTFIF4         DMA_INTF_HTFIF4_Msk                      /*!< Channel 4 Half transfer finish interrupt flag */
#define DMA_INTF_ERRIF4_Pos     (19U)
#define DMA_INTF_ERRIF4_Msk     (0x1UL << DMA_INTF_ERRIF4_Pos)           /*!< 0x00080000 */
#define DMA_INTF_ERRIF4         DMA_INTF_ERRIF4_Msk                      /*!< Channel 4 Error interrupt flag */
#define DMA_INTF_GIF5_Pos       (20U)
#define DMA_INTF_GIF5_Msk       (0x1UL << DMA_INTF_GIF5_Pos)             /*!< 0x00100000 */
#define DMA_INTF_GIF5           DMA_INTF_GIF5_Msk                        /*!< Channel 5 Global interrupt flag */
#define DMA_INTF_FTFIF5_Pos     (21U)
#define DMA_INTF_FTFIF5_Msk     (0x1UL << DMA_INTF_FTFIF5_Pos)           /*!< 0x00200000 */
#define DMA_INTF_FTFIF5         DMA_INTF_FTFIF5_Msk                      /*!< Channel 5 Full transfer finish interrupt flag */
#define DMA_INTF_HTFIF5_Pos     (22U)
#define DMA_INTF_HTFIF5_Msk     (0x1UL << DMA_INTF_HTFIF5_Pos)           /*!< 0x00400000 */
#define DMA_INTF_HTFIF5         DMA_INTF_HTFIF5_Msk                      /*!< Channel 5 Half transfer finish interrupt flag */
#define DMA_INTF_ERRIF5_Pos     (23U)
#define DMA_INTF_ERRIF5_Msk     (0x1UL << DMA_INTF_ERRIF5_Pos)           /*!< 0x00800000 */
#define DMA_INTF_ERRIF5         DMA_INTF_ERRIF5_Msk                      /*!< Channel 5 Error interrupt flag */
#define DMA_INTF_GIF6_Pos       (24U)
#define DMA_INTF_GIF6_Msk       (0x1UL << DMA_INTF_GIF6_Pos)             /*!< 0x01000000 */
#define DMA_INTF_GIF6           DMA_INTF_GIF6_Msk                        /*!< Channel 6 Global interrupt flag */
#define DMA_INTF_FTFIF6_Pos     (25U)
#define DMA_INTF_FTFIF6_Msk     (0x1UL << DMA_INTF_FTFIF6_Pos)           /*!< 0x02000000 */
#define DMA_INTF_FTFIF6         DMA_INTF_FTFIF6_Msk                      /*!< Channel 6 Full transfer finish interrupt flag */
#define DMA_INTF_HTFIF6_Pos     (26U)
#define DMA_INTF_HTFIF6_Msk     (0x1UL << DMA_INTF_HTFIF6_Pos)           /*!< 0x04000000 */
#define DMA_INTF_HTFIF6         DMA_INTF_HTFIF6_Msk                      /*!< Channel 6 Half transfer finish interrupt flag */
#define DMA_INTF_ERRIF6_Pos     (27U)
#define DMA_INTF_ERRIF6_Msk     (0x1UL << DMA_INTF_ERRIF6_Pos)           /*!< 0x08000000 */
#define DMA_INTF_ERRIF6         DMA_INTF_ERRIF6_Msk                      /*!< Channel 6 Error interrupt flag */

/* DMA_INTC */
#define DMA_INTC_GIFC0_Pos      (0U)
#define DMA_INTC_GIFC0_Msk      (0x1UL << DMA_INTC_GIFC0_Pos)            /*!< 0x00000001 */
#define DMA_INTC_GIFC0          DMA_INTC_GIFC0_Msk                       /*!< Channel 0 Global interrupt flag clear */
#define DMA_INTC_FTFIFC0_Pos    (1U)
#define DMA_INTC_FTFIFC0_Msk    (0x1UL << DMA_INTC_FTFIFC0_Pos)          /*!< 0x00000002 */
#define DMA_INTC_FTFIFC0        DMA_INTC_FTFIFC0_Msk                     /*!< Channel 0 Full transfer finish interrupt flag clear */
#define DMA_INTC_HTFIFC0_Pos    (2U)
#define DMA_INTC_HTFIFC0_Msk    (0x1UL << DMA_INTC_HTFIFC0_Pos)          /*!< 0x00000004 */
#define DMA_INTC_HTFIFC0        DMA_INTC_HTFIFC0_Msk                     /*!< Channel 0 Half transfer finish interrupt flag clear */
#define DMA_INTC_ERRIFC0_Pos    (3U)
#define DMA_INTC_ERRIFC0_Msk    (0x1UL << DMA_INTC_ERRIFC0_Pos)          /*!< 0x00000008 */
#define DMA_INTC_ERRIFC0        DMA_INTC_ERRIFC0_Msk                     /*!< Channel 0 Error interrupt flag clear */
#define DMA_INTC_GIFC1_Pos      (4U)
#define DMA_INTC_GIFC1_Msk      (0x1UL << DMA_INTC_GIFC1_Pos)            /*!< 0x00000010 */
#define DMA_INTC_GIFC1          DMA_INTC_GIFC1_Msk                       /*!< Channel 1 Global interrupt flag clear */
#define DMA_INTC_FTFIFC1_Pos    (5U)
#define DMA_INTC_FTFIFC1_Msk    (0x1UL << DMA_INTC_FTFIFC1_Pos)          /*!< 0x00000020 */
#define DMA_INTC_FTFIFC1        DMA_INTC_FTFIFC1_Msk                     /*!< Channel 1 Full transfer finish interrupt flag clear */
#define DMA_INTC_HTFIFC1_Pos    (6U)
#define DMA_INTC_HTFIFC1_Msk    (0x1UL << DMA_INTC_HTFIFC1_Pos)          /*!< 0x00000040 */
#define DMA_INTC_HTFIFC1        DMA_INTC_HTFIFC1_Msk                     /*!< Channel 1 Half transfer finish interrupt flag clear */
#define DMA_INTC_ERRIFC1_Pos    (7U)
#define DMA_INTC_ERRIFC1_Msk    (0x1UL << DMA_INTC_ERRIFC1_Pos)          /*!< 0x00000080 */
#define DMA_INTC_ERRIFC1        DMA_INTC_ERRIFC1_Msk                     /*!< Channel 1 Error interrupt flag clear */
#define DMA_INTC_GIFC2_Pos      (8U)
#define DMA_INTC_GIFC2_Msk      (0x1UL << DMA_INTC_GIFC2_Pos)            /*!< 0x00000100 */
#define DMA_INTC_GIFC2          DMA_INTC_GIFC2_Msk                       /*!< Channel 2 Global interrupt flag clear */
#define DMA_INTC_FTFIFC2_Pos    (9U)
#define DMA_INTC_FTFIFC2_Msk    (0x1UL << DMA_INTC_FTFIFC2_Pos)          /*!< 0x00000200 */
#define DMA_INTC_FTFIFC2        DMA_INTC_FTFIFC2_Msk                     /*!< Channel 2 Full transfer finish interrupt flag clear */
#define DMA_INTC_HTFIFC2_Pos    (10U)
#define DMA_INTC_HTFIFC2_Msk    (0x1UL << DMA_INTC_HTFIFC2_Pos)          /*!< 0x00000400 */
#define DMA_INTC_HTFIFC2        DMA_INTC_HTFIFC2_Msk                     /*!< Channel 2 Half transfer finish interrupt flag clear */
#define DMA_INTC_ERRIFC2_Pos    (11U)
#define DMA_INTC_ERRIFC2_Msk    (0x1UL << DMA_INTC_ERRIFC2_Pos)          /*!< 0x00000800 */
#define DMA_INTC_ERRIFC2        DMA_INTC_ERRIFC2_Msk                     /*!< Channel 2 Error interrupt flag clear */
#define DMA_INTC_GIFC3_Pos      (12U)
#define DMA_INTC_GIFC3_Msk      (0x1UL << DMA_INTC_GIFC3_Pos)            /*!< 0x00001000 */
#define DMA_INTC_GIFC3          DMA_INTC_GIFC3_Msk                       /*!< Channel 3 Global interrupt flag clear */
#define DMA_INTC_FTFIFC3_Pos    (13U)
#define DMA_INTC_FTFIFC3_Msk    (0x1UL << DMA_INTC_FTFIFC3_Pos)          /*!< 0x00002000 */
#define DMA_INTC_FTFIFC3        DMA_INTC_FTFIFC3_Msk                     /*!< Channel 3 Full transfer finish interrupt flag clear */
#define DMA_INTC_HTFIFC3_Pos    (14U)
#define DMA_INTC_HTFIFC3_Msk    (0x1UL << DMA_INTC_HTFIFC3_Pos)          /*!< 0x00004000 */
#define DMA_INTC_HTFIFC3        DMA_INTC_HTFIFC3_Msk                     /*!< Channel 3 Half transfer finish interrupt flag clear */
#define DMA_INTC_ERRIFC3_Pos    (15U)
#define DMA_INTC_ERRIFC3_Msk    (0x1UL << DMA_INTC_ERRIFC3_Pos)          /*!< 0x00008000 */
#define DMA_INTC_ERRIFC3        DMA_INTC_ERRIFC3_Msk                     /*!< Channel 3 Error interrupt flag clear */
#define DMA_INTC_GIFC4_Pos      (16U)
#define DMA_INTC_GIFC4_Msk      (0x1UL << DMA_INTC_GIFC4_Pos)            /*!< 0x00010000 */
#define DMA_INTC_GIFC4          DMA_INTC_GIFC4_Msk                       /*!< Channel 4 Global interrupt flag clear */
#define DMA_INTC_FTFIFC4_Pos    (17U)
#define DMA_INTC_FTFIFC4_Msk    (0x1UL << DMA_INTC_FTFIFC4_Pos)          /*!< 0x00020000 */
#define DMA_INTC_FTFIFC4        DMA_INTC_FTFIFC4_Msk                     /*!< Channel 4 Full transfer finish interrupt flag clear */
#define DMA_INTC_HTFIFC4_Pos    (18U)
#define DMA_INTC_HTFIFC4_Msk    (0x1UL << DMA_INTC_HTFIFC4_Pos)          /*!< 0x00040000 */
#define DMA_INTC_HTFIFC4        DMA_INTC_HTFIFC4_Msk                     /*!< Channel 4 Half transfer finish interrupt flag clear */
#define DMA_INTC_ERRIFC4_Pos    (19U)
#define DMA_INTC_ERRIFC4_Msk    (0x1UL << DMA_INTC_ERRIFC4_Pos)          /*!< 0x00080000 */
#define DMA_INTC_ERRIFC4        DMA_INTC_ERRIFC4_Msk                     /*!< Channel 4 Error interrupt flag clear */
#define DMA_INTC_GIFC5_Pos      (20U)
#define DMA_INTC_GIFC5_Msk      (0x1UL << DMA_INTC_GIFC5_Pos)            /*!< 0x00100000 */
#define DMA_INTC_GIFC5          DMA_INTC_GIFC5_Msk                       /*!< Channel 5 Global interrupt flag clear */
#define DMA_INTC_FTFIFC5_Pos    (21U)
#define DMA_INTC_FTFIFC5_Msk    (0x1UL << DMA_INTC_FTFIFC5_Pos)          /*!< 0x00200000 */
#define DMA_INTC_FTFIFC5        DMA_INTC_FTFIFC5_Msk                     /*!< Channel 5 Full transfer finish interrupt flag clear */
#define DMA_INTC_HTFIFC5_Pos    (22U)
#define DMA_INTC_HTFIFC5_Msk    (0x1UL << DMA_INTC_HTFIFC5_Pos)          /*!< 0x00400000 */
#define DMA_INTC_HTFIFC5        DMA_INTC_HTFIFC5_Msk                     /*!< Channel 5 Half transfer finish interrupt flag clear */
#define DMA_INTC_ERRIFC5_Pos    (23U)
#define DMA_INTC_ERRIFC5_Msk    (0x1UL << DMA_INTC_ERRIFC5_Pos)          /*!< 0x00800000 */
#define DMA_INTC_ERRIFC5        DMA_INTC_ERRIFC5_Msk                     /*!< Channel 5 Error interrupt flag clear */
#define DMA_INTC_GIFC6_Pos      (24U)
#define DMA_INTC_GIFC6_Msk      (0x1UL << DMA_INTC_GIFC6_Pos)            /*!< 0x01000000 */
#define DMA_INTC_GIFC6          DMA_INTC_GIFC6_Msk                       /*!< Channel 6 Global interrupt flag clear */
#define DMA_INTC_FTFIFC6_Pos    (25U)
#define DMA_INTC_FTFIFC6_Msk    (0x1UL << DMA_INTC_FTFIFC6_Pos)          /*!< 0x02000000 */
#define DMA_INTC_FTFIFC6        DMA_INTC_FTFIFC6_Msk                     /*!< Channel 6 Full transfer finish interrupt flag clear */
#define DMA_INTC_HTFIFC6_Pos    (26U)
#define DMA_INTC_HTFIFC6_Msk    (0x1UL << DMA_INTC_HTFIFC6_Pos)          /*!< 0x04000000 */
#define DMA_INTC_HTFIFC6        DMA_INTC_HTFIFC6_Msk                     /*!< Channel 6 Half transfer finish interrupt flag clear */
#define DMA_INTC_ERRIFC6_Pos    (27U)
#define DMA_INTC_ERRIFC6_Msk    (0x1UL << DMA_INTC_ERRIFC6_Pos)          /*!< 0x08000000 */
#define DMA_INTC_ERRIFC6        DMA_INTC_ERRIFC6_Msk                     /*!< Channel 6 Error interrupt flag clear */

/* DMA_CHxCTL, x=0..6 */
#define DMA_CHxCTL_CHEN_Pos     (0U)
#define DMA_CHxCTL_CHEN_Msk     (0x1UL << DMA_CHxCTL_CHEN_Pos)           /*!< 0x00000001 */
#define DMA_CHxCTL_CHEN         DMA_CHxCTL_CHEN_Msk                      /*!< Channel enable */
#define DMA_CHxCTL_FTFIE_Pos    (1U)
#define DMA_CHxCTL_FTFIE_Msk    (0x1UL << DMA_CHxCTL_FTFIE_Pos)          /*!< 0x00000002 */
#define DMA_CHxCTL_FTFIE        DMA_CHxCTL_FTFIE_Msk                     /*!< Full transfer finish interrupt enable */
#define DMA_CHxCTL_HTFIE_Pos    (2U)
#define DMA_CHxCTL_HTFIE_Msk    (0x1UL << DMA_CHxCTL_HTFIE_Pos)          /*!< 0x00000004 */
#define DMA_CHxCTL_HTFIE        DMA_CHxCTL_HTFIE_Msk                     /*!< Half transfer finish interrupt enable */
#define DMA_CHxCTL_ERRIE_Pos    (3U)
#define DMA_CHxCTL_ERRIE_Msk    (0x1UL << DMA_CHxCTL_ERRIE_Pos)          /*!< 0x00000008 */
#define DMA_CHxCTL_ERRIE        DMA_CHxCTL_ERRIE_Msk                     /*!< Error interrupt enable */
#define DMA_CHxCTL_DIR_Pos      (4U)
#define DMA_CHxCTL_DIR_Msk      (0x1UL << DMA_CHxCTL_DIR_Pos)            /*!< 0x00000010 */
#define DMA_CHxCTL_DIR          DMA_CHxCTL_DIR_Msk                       /*!< Transfer direction */
#define DMA_CHxCTL_CMEN_Pos     (5U)
#define DMA_CHxCTL_CMEN_Msk     (0x1UL << DMA_CHxCTL_CMEN_Pos)           /*!< 0x00000020 */
#define DMA_CHxCTL_CMEN         DMA_CHxCTL_CMEN_Msk                      /*!< Circular mode enable */
#define DMA_CHxCTL_PNAGA_Pos    (6U)
#define DMA_CHxCTL_PNAGA_Msk    (0x1UL << DMA_CHxCTL_PNAGA_Pos)          /*!< 0x00000040 */
#define DMA_CHxCTL_PNAGA        DMA_CHxCTL_PNAGA_Msk                     /*!< Peripheral next address generation algorithm */
#define DMA_CHxCTL_MNAGA_Pos    (7U)
#define DMA_CHxCTL_MNAGA_Msk    (0x1UL << DMA_CHxCTL_MNAGA_Pos)          /*!< 0x00000080 */
#define DMA_CHxCTL_MNAGA        DMA_CHxCTL_MNAGA_Msk                     /*!< Memory next address generation algorithm */

#define DMA_CHxCTL_PWIDTH_Pos   (8U)
#define DMA_CHxCTL_PWIDTH_Msk   (0x3UL << DMA_CHxCTL_PWIDTH_Pos)         /*!< 0x00000300 */
#define DMA_CHxCTL_PWIDTH       DMA_CHxCTL_PWIDTH_Msk                    /*!< PWIDTH[1:0] bits (Peripheral transfer data width) */
#define DMA_CHxCTL_PWIDTH_0     (0x1UL << DMA_CHxCTL_PWIDTH_Pos)         /*!< 0x00000100 */
#define DMA_CHxCTL_PWIDTH_1     (0x2UL << DMA_CHxCTL_PWIDTH_Pos)         /*!< 0x00000200 */

#define DMA_CHxCTL_MWIDTH_Pos   (10U)
#define DMA_CHxCTL_MWIDTH_Msk   (0x3UL << DMA_CHxCTL_MWIDTH_Pos)         /*!< 0x00000C00 */
#define DMA_CHxCTL_MWIDTH       DMA_CHxCTL_MWIDTH_Msk                    /*!< MWIDTH[1:0] bits (Memory transfer data width) */
#define DMA_CHxCTL_MWIDTH_0     (0x1UL << DMA_CHxCTL_MWIDTH_Pos)         /*!< 0x00000400 */
#define DMA_CHxCTL_MWIDTH_1     (0x2UL << DMA_CHxCTL_MWIDTH_Pos)         /*!< 0x00000800 */

#define DMA_CHxCTL_PRIO_Pos     (12U)
#define DMA_CHxCTL_PRIO_Msk     (0x3UL << DMA_CHxCTL_PRIO_Pos)           /*!< 0x00003000 */
#define DMA_CHxCTL_PRIO         DMA_CHxCTL_PRIO_Msk                      /*!< PRIO[1:0] bits (Channel priority level) */
#define DMA_CHxCTL_PRIO_0       (0x1UL << DMA_CHxCTL_PRIO_Pos)           /*!< 0x00001000 */
#define DMA_CHxCTL_PRIO_1       (0x2UL << DMA_CHxCTL_PRIO_Pos)           /*!< 0x00002000 */

#define DMA_CHxCTL_M2M_Pos      (14U)
#define DMA_CHxCTL_M2M_Msk      (0x1UL << DMA_CHxCTL_M2M_Pos)            /*!< 0x00004000 */
#define DMA_CHxCTL_M2M          DMA_CHxCTL_M2M_Msk                       /*!< Memory to memory mode */

/* DMA_CHxCNT, x=0..6 */
#define DMA_CHxCNT_CNT_Pos      (0U)
#define DMA_CHxCNT_CNT_Msk      (0xFFFFUL << DMA_CHxCNT_CNT_Pos)         /*!< 0x0000FFFF */
#define DMA_CHxCNT_CNT          DMA_CHxCNT_CNT_Msk                       /*!< Transfer counter */

/* DMA_CHxPADDR, x=0..6 */
#define DMA_CHxPADDR_PADDR_Pos  (0U)
#define DMA_CHxPADDR_PADDR_Msk  (0xFFFFFFFFUL << DMA_CHxPADDR_PADDR_Pos) /*!< 0xFFFFFFFF */
#define DMA_CHxPADDR_PADDR      DMA_CHxPADDR_PADDR_Msk                   /*!< Peripheral base ddress */

/* DMA_CHxMADDR, x=0..6 */
#define DMA_CHxMADDR_MADDR_Pos  (0U)
#define DMA_CHxMADDR_MADDR_Msk  (0xFFFFFFFFUL << DMA_CHxMADDR_MADDR_Pos) /*!< 0xFFFFFFFF */
#define DMA_CHxMADDR_MADDR      DMA_CHxMADDR_MADDR_Msk                   /*!< Memory base address */

#endif // GD32E10X_DMA_H_

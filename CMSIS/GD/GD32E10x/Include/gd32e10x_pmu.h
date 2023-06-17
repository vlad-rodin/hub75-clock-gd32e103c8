#ifndef GD32E10X_PMU_H_
#define GD32E10X_PMU_H_

/* PMU struct */
typedef struct
{
  __IO uint32_t CTL; /*!< PMU control register,         Address offset: 0x00 */
  __IO uint32_t CS;  /*!< PMU control and status regis, Address offset: 0x04 */
} PMU_TypeDef;

/* PMU definitions */
#define PMU                ((PMU_TypeDef *) PMU_BASE)    /*!< PMU base address */

/* bits definitions */
/* PMU_CTL */
#define PMU_CTL_LDOLP_Pos  (0U)
#define PMU_CTL_LDOLP_Msk  (0x1UL << PMU_CTL_LDOLP_Pos)  /*!< 0x00000001 */
#define PMU_CTL_LDOLP      PMU_CTL_LDOLP_Msk             /*!< LDO low power mode */
#define PMU_CTL_STBMOD_Pos (1U)
#define PMU_CTL_STBMOD_Msk (0x1UL << PMU_CTL_STBMOD_Pos) /*!< 0x00000002 */
#define PMU_CTL_STBMOD     PMU_CTL_STBMOD_Msk            /*!< Standby mode */
#define PMU_CTL_WURST_Pos  (2U)
#define PMU_CTL_WURST_Msk  (0x1UL << PMU_CTL_WURST_Pos)  /*!< 0x00000004 */
#define PMU_CTL_WURST      PMU_CTL_WURST_Msk             /*!< Wakeup flag reset */
#define PMU_CTL_STBRST_Pos (3U)
#define PMU_CTL_STBRST_Msk (0x1UL << PMU_CTL_STBRST_Pos) /*!< 0x00000008 */
#define PMU_CTL_STBRST     PMU_CTL_STBRST_Msk            /*!< Standby flag reset */
#define PMU_CTL_LVDEN_Pos  (4U)
#define PMU_CTL_LVDEN_Msk  (0x1UL << PMU_CTL_LVDEN_Pos)  /*!< 0x00000010 */
#define PMU_CTL_LVDEN      PMU_CTL_LVDEN_Msk             /*!< Low voltage detector snable */

#define PMU_CTL_LVDT_Pos   (5U)
#define PMU_CTL_LVDT_Msk   (0x7UL << PMU_CTL_LVDT_Pos)   /*!< 0x000000E0 */
#define PMU_CTL_LVDT       PMU_CTL_LVDT_Msk              /*!< LVDT[2:0] bits (Low voltage detector threshold) */
#define PMU_CTL_LVDT_0     (0x1UL << PMU_CTL_LVDT_Pos)   /*!< 0x00000020 */
#define PMU_CTL_LVDT_1     (0x2UL << PMU_CTL_LVDT_Pos)   /*!< 0x00000040 */
#define PMU_CTL_LVDT_2     (0x4UL << PMU_CTL_LVDT_Pos)   /*!< 0x00000080 */

/* PMU low voltage detector threshold definitions */
#define PMU_CTL_LVDT_2V1   0x00000000U                   /*!< voltage threshold is 2.1V */
#define PMU_CTL_LVDT_2V3   0x00000020U                   /*!< voltage threshold is 2.3V */
#define PMU_CTL_LVDT_2V4   0x00000040U                   /*!< voltage threshold is 2.4V */
#define PMU_CTL_LVDT_2V6   0x00000060U                   /*!< voltage threshold is 2.6V */
#define PMU_CTL_LVDT_2V7   0x00000080U                   /*!< voltage threshold is 2.7V */
#define PMU_CTL_LVDT_2V9   0x000000A0U                   /*!< voltage threshold is 2.9V */
#define PMU_CTL_LVDT_3V0   0x000000C0U                   /*!< voltage threshold is 3.0V */
#define PMU_CTL_LVDT_3V1   0x000000E0U                   /*!< voltage threshold is 3.1V */

#define PMU_CTL_BKPWEN_Pos (8U)
#define PMU_CTL_BKPWEN_Msk (0x1UL << PMU_CTL_BKPWEN_Pos) /*!< 0x00000100 */
#define PMU_CTL_BKPWEN     PMU_CTL_BKPWEN_Msk            /*!< Backup domain write enable */

/* PMU_CS */
#define PMU_CS_WUF_Pos     (0U)
#define PMU_CS_WUF_Msk     (0x1UL << PMU_CS_WUF_Pos)     /*!< 0x00000001 */
#define PMU_CS_WUF         PMU_CS_WUF_Msk                /*!< Wakeup flag */
#define PMU_CS_STBF_Pos    (1U)
#define PMU_CS_STBF_Msk    (0x1UL << PMU_CS_STBF_Pos)    /*!< 0x00000002 */
#define PMU_CS_STBF        PMU_CS_STBF_Msk               /*!< Standby flag */
#define PMU_CS_LVDF_Pos    (2U)
#define PMU_CS_LVDF_Msk    (0x1UL << PMU_CS_LVDF_Pos)    /*!< 0x00000004 */
#define PMU_CS_LVDF        PMU_CS_LVDF_Msk               /*!< Low voltage detector status flag */
#define PMU_CS_WUPEN_Pos   (8U)
#define PMU_CS_WUPEN_Msk   (0x1UL << PMU_CS_WUPEN_Pos)   /*!< 0x00000100 */
#define PMU_CS_WUPEN       PMU_CS_WUPEN_Msk              /*!< Wakeup pin enable */

#endif // GD32E10X_PMU_H_

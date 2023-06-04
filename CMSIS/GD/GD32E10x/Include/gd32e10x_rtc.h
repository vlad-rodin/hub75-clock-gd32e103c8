#ifndef GD32E10X_RTC_H_
#define GD32E10X_RTC_H_

/* RTC struct */
typedef struct
{
  __IO uint32_t INTEN; /*!< RTC interrupt enable register, Address offset: 0x00 */
  __IO uint32_t CTL;   /*!< RTC control register,          Address offset: 0x04 */
  __IO uint32_t PSCH;  /*!< RTC prescaler high register,   Address offset: 0x08 */
  __IO uint32_t PSCL;  /*!< RTC prescaler low register,    Address offset: 0x0C */
  __IO uint32_t DIVH;  /*!< RTC divider high register,     Address offset: 0x10 */
  __IO uint32_t DIVL;  /*!< RTC divider low register,      Address offset: 0x14 */
  __IO uint32_t CNTH;  /*!< RTC counter high register,     Address offset: 0x18 */
  __IO uint32_t CNTL;  /*!< RTC counter low register,      Address offset: 0x1C */
  __IO uint32_t ALRMH; /*!< RTC alarm high register,       Address offset: 0x20 */
  __IO uint32_t ALRML; /*!< RTC alarm low register,        Address offset: 0x24 */
} RTC_TypeDef;

/* RTC definitions */
#define RTC                  ((RTC_TypeDef *) RTC_BASE)       /*!< RTC base address */

/* bits definitions */
/* RTC_INTEN */
#define RTC_INTEN_SCIE_Pos   (0U)
#define RTC_INTEN_SCIE_Msk   (0x1UL << RTC_INTEN_SCIE_Pos)    /*!< 0x00000001 */
#define RTC_INTEN_SCIE       RTC_INTEN_SCIE_Msk               /*!< Second interrupt enable */
#define RTC_INTEN_ALRMIE_Pos (1U)
#define RTC_INTEN_ALRMIE_Msk (0x1UL << RTC_INTEN_ALRMIE_Pos)  /*!< 0x00000002 */
#define RTC_INTEN_ALRMIE     RTC_INTEN_ALRMIE_Msk             /*!< Alarm interrupt enable */
#define RTC_INTEN_OVIE_Pos   (2U)
#define RTC_INTEN_OVIE_Msk   (0x1UL << RTC_INTEN_OVIE_Pos)    /*!< 0x00000004 */
#define RTC_INTEN_OVIE       RTC_INTEN_OVIE_Msk               /*!< Overflow interrupt enable */

/* RTC_CTL */
#define RTC_CTL_SCIF_Pos     (0U)
#define RTC_CTL_SCIF_Msk     (0x1UL << RTC_CTL_SCIF_Pos)      /*!< 0x00000001 */
#define RTC_CTL_SCIF         RTC_CTL_SCIF_Msk                 /*!< Second interrupt flag */
#define RTC_CTL_ALRMIF_Pos   (1U)
#define RTC_CTL_ALRMIF_Msk   (0x1UL << RTC_CTL_ALRMIF_Pos)    /*!< 0x00000002 */
#define RTC_CTL_ALRMIF       RTC_CTL_ALRMIF_Msk               /*!< Alarm interrupt flag */
#define RTC_CTL_OVIF_Pos     (2U)
#define RTC_CTL_OVIF_Msk     (0x1UL << RTC_CTL_OVIF_Pos)      /*!< 0x00000004 */
#define RTC_CTL_OVIF         RTC_CTL_OVIF_Msk                 /*!< Overflow interrupt flag */
#define RTC_CTL_RSYNF_Pos    (3U)
#define RTC_CTL_RSYNF_Msk    (0x1UL << RTC_CTL_RSYNF_Pos)     /*!< 0x00000008 */
#define RTC_CTL_RSYNF        RTC_CTL_RSYNF_Msk                /*!< Registers synchronized flag */
#define RTC_CTL_CMF_Pos      (4U)
#define RTC_CTL_CMF_Msk      (0x1UL << RTC_CTL_CMF_Pos)       /*!< 0x00000010 */
#define RTC_CTL_CMF          RTC_CTL_CMF_Msk                  /*!< Configuration mode flag */
#define RTC_CTL_LWOFF_Pos    (5U)
#define RTC_CTL_LWOFF_Msk    (0x1UL << RTC_CTL_LWOFF_Pos)     /*!< 0x00000020 */
#define RTC_CTL_LWOFF        RTC_CTL_LWOFF_Msk                /*!< Last write operation finished flag */

/* RTC_PSCH */
#define RTC_PSCH_PSC_Pos     (0U)
#define RTC_PSCH_PSC_Msk     (0xFUL << RTC_PSCH_PSC_Pos)      /*!< 0x0000000F */
#define RTC_PSCH_PSC         RTC_PSCH_PSC_Msk                 /*!< PSC[19:16] bits (Prescaler high value) */

/* RTC_PSCL */
#define RTC_PSCL_PSC_Pos     (0U)
#define RTC_PSCL_PSC_Msk     (0xFFFFUL << RTC_PSCL_PSC_Pos)   /*!< 0x0000FFFF */
#define RTC_PSCL_PSC         RTC_PSCL_PSC_Msk                 /*!< PSC[15:0] bits (Prescaler low value) */

/* RTC_DIVH */
#define RTC_DIVH_DIV_Pos     (0U)
#define RTC_DIVH_DIV_Msk     (0xFUL << RTC_DIVH_DIV_Pos)      /*!< 0x0000000F */
#define RTC_DIVH_DIV         RTC_DIVH_DIV_Msk                 /*!< DIV[19:16] bits (Divider high value) */

/* RTC_DIVL */
#define RTC_DIVL_DIV_Pos     (0U)
#define RTC_DIVL_DIV_Msk     (0xFFFFUL << RTC_DIVL_DIV_Pos)   /*!< 0x0000FFFF */
#define RTC_DIVL_DIV         RTC_DIVL_DIV_Msk                 /*!< DIV[15:0] bits (Divider low value) */

/* RTC_CNTH */
#define RTC_CNTH_CNT_Pos     (0U)
#define RTC_CNTH_CNT_Msk     (0xFFFFUL << RTC_CNTH_CNT_Pos)   /*!< 0x0000FFFF */
#define RTC_CNTH_CNT         RTC_CNTH_CNT_Msk                 /*!< CNT[31:16] bits (Counter high value) */

/* RTC_CNTL */
#define RTC_CNTL_CNT_Pos     (0U)
#define RTC_CNTL_CNT_Msk     (0xFFFFUL << RTC_CNTL_CNT_Pos)   /*!< 0x0000FFFF */
#define RTC_CNTL_CNT         RTC_CNTL_CNT_Msk                 /*!< CNT[15:0] bits (Counter low value) */

/* RTC_ALRMH */
#define RTC_ALRMH_ALRM_Pos   (0U)
#define RTC_ALRMH_ALRM_Msk   (0xFFFFUL << RTC_ALRMH_ALRM_Pos) /*!< 0x0000FFFF */
#define RTC_ALRMH_ALRM       RTC_ALRMH_ALRM_Msk               /*!< ALRM[31:16] bits (Alarm high value) */

/* RTC_ALRML */
#define RTC_ALRML_ALRM_Pos   (0U)
#define RTC_ALRML_ALRM_Msk   (0xFFFFUL << RTC_ALRML_ALRM_Pos) /*!< 0x0000FFFF */
#define RTC_ALRML_ALRM       RTC_ALRML_ALRM_Msk               /*!< ALRM[15:0] bits (Alarm low value) */

#endif // GD32E10X_RTC_H_

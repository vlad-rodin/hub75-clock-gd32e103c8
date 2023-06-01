#ifndef GD32E10X_SPI_H_
#define GD32E10X_SPI_H_

/* SPI struct */
typedef struct
{
  __IO uint32_t CTL0;         /*!< SPI control register 0,                    Address offset: 0x00 */
  __IO uint32_t CTL1;         /*!< SPI control register 1,                    Address offset: 0x04 */
  __IO uint32_t STAT;         /*!< SPI status register,                       Address offset: 0x08 */
  __IO uint32_t DATA;         /*!< SPI data register,                         Address offset: 0x0C */
  __IO uint32_t CRCKPLY;      /*!< SPI CRC polynomial register,               Address offset: 0x10 */
  __IO uint32_t RCRC;         /*!< SPI receive CRC register,                  Address offset: 0x14 */
  __IO uint32_t TCRC;         /*!< SPI transmit CRC register,                 Address offset: 0x18 */
  __IO uint32_t I2SCTL;       /*!< SPI I2S control register,                  Address offset: 0x1C */
  __IO uint32_t I2SPSC;       /*!< SPI I2S clock prescaler register,          Address offset: 0x20 */
       uint32_t RESERVED[23]; /*!< Reserved */
  __IO uint32_t QCTL;         /*!< SPI quad mode control register(only SPI0), Address offset: 0x80 */
} SPI_TypeDef;

/* SPI definitions */
#define SPI0                    ((SPI_TypeDef *)(SPI_BASE + 0x0000F800U)) /*!< SPI0 base address */
#define SPI1                    ((SPI_TypeDef *)SPI_BASE)                 /*!< SPI1 base address */
#define SPI2                    ((SPI_TypeDef *)(SPI_BASE + 0x00000400U)) /*!< SPI2 base address */

/* bits definitions */
/* SPI_CTL0 */
#define SPI_CTL0_CKPH_Pos       (0U)
#define SPI_CTL0_CKPH_Msk       (0x1UL << SPI_CTL0_CKPH_Pos)              /*!< 0x00000001 */
#define SPI_CTL0_CKPH           SPI_CTL0_CKPH_Msk                         /*!< Clock phase selection */
#define SPI_CTL0_CKPL_Pos       (1U)
#define SPI_CTL0_CKPL_Msk       (0x1UL << SPI_CTL0_CKPL_Pos)              /*!< 0x00000002 */
#define SPI_CTL0_CKPL           SPI_CTL0_CKPL_Msk                         /*!< Clock polarity selection */
#define SPI_CTL0_MSTMOD_Pos     (2U)
#define SPI_CTL0_MSTMOD_Msk     (0x1UL << SPI_CTL0_MSTMOD_Pos)            /*!< 0x00000004 */
#define SPI_CTL0_MSTMOD         SPI_CTL0_MSTMOD_Msk                       /*!< Master mode enable */

#define SPI_CTL0_PSC_Pos        (3U)
#define SPI_CTL0_PSC_Msk        (0x7UL << SPI_CTL0_PSC_Pos)               /*!< 0x00000038 */
#define SPI_CTL0_PSC            SPI_CTL0_PSC_Msk                          /*!< PSC[2:0] bits (Master clock prescaler selection) */
#define SPI_CTL0_PSC_0          (0x1UL << SPI_CTL0_PSC_Pos)               /*!< 0x00000008 */
#define SPI_CTL0_PSC_1          (0x2UL << SPI_CTL0_PSC_Pos)               /*!< 0x00000010 */
#define SPI_CTL0_PSC_2          (0x4UL << SPI_CTL0_PSC_Pos)               /*!< 0x00000020 */

#define SPI_CTL0_SPIEN_Pos      (6U)
#define SPI_CTL0_SPIEN_Msk      (0x1UL << SPI_CTL0_SPIEN_Pos)             /*!< 0x00000040 */
#define SPI_CTL0_SPIEN          SPI_CTL0_SPIEN_Msk                        /*!< SPI enable */
#define SPI_CTL0_LF_Pos         (7U)
#define SPI_CTL0_LF_Msk         (0x1UL << SPI_CTL0_LF_Pos)                /*!< 0x00000080 */
#define SPI_CTL0_LF             SPI_CTL0_LF_Msk                           /*!< LSB first mode */
#define SPI_CTL0_SWNSS_Pos      (8U)
#define SPI_CTL0_SWNSS_Msk      (0x1UL << SPI_CTL0_SWNSS_Pos)             /*!< 0x00000100 */
#define SPI_CTL0_SWNSS          SPI_CTL0_SWNSS_Msk                        /*!< NSS pin selection in NSS software mode */
#define SPI_CTL0_SWNSSEN_Pos    (9U)
#define SPI_CTL0_SWNSSEN_Msk    (0x1UL << SPI_CTL0_SWNSSEN_Pos)           /*!< 0x00000200 */
#define SPI_CTL0_SWNSSEN        SPI_CTL0_SWNSSEN_Msk                      /*!< NSS software mode enable */
#define SPI_CTL0_RO_Pos         (10U)
#define SPI_CTL0_RO_Msk         (0x1UL << SPI_CTL0_RO_Pos)                /*!< 0x00000400 */
#define SPI_CTL0_RO             SPI_CTL0_RO_Msk                           /*!< Receive only */
#define SPI_CTL0_FF16_Pos       (11U)
#define SPI_CTL0_FF16_Msk       (0x1UL << SPI_CTL0_FF16_Pos)              /*!< 0x00000800 */
#define SPI_CTL0_FF16           SPI_CTL0_FF16_Msk                         /*!< Data frame format */
#define SPI_CTL0_CRCNT_Pos      (12U)
#define SPI_CTL0_CRCNT_Msk      (0x1UL << SPI_CTL0_CRCNT_Pos)             /*!< 0x00001000 */
#define SPI_CTL0_CRCNT          SPI_CTL0_CRCNT_Msk                        /*!< CRC next transfer */
#define SPI_CTL0_CRCEN_Pos      (13U)
#define SPI_CTL0_CRCEN_Msk      (0x1UL << SPI_CTL0_CRCEN_Pos)             /*!< 0x00002000 */
#define SPI_CTL0_CRCEN          SPI_CTL0_CRCEN_Msk                        /*!< CRC calculation enable */
#define SPI_CTL0_BDOEN_Pos      (14U)
#define SPI_CTL0_BDOEN_Msk      (0x1UL << SPI_CTL0_BDOEN_Pos)             /*!< 0x00004000 */
#define SPI_CTL0_BDOEN          SPI_CTL0_BDOEN_Msk                        /*!< Bidirectional transmit output enable */
#define SPI_CTL0_BDEN_Pos       (15U)
#define SPI_CTL0_BDEN_Msk       (0x1UL << SPI_CTL0_BDEN_Pos)              /*!< 0x00008000 */
#define SPI_CTL0_BDEN           SPI_CTL0_BDEN_Msk                         /*!< Bidirectional enable */

/* SPI_CTL1 */
#define SPI_CTL1_DMAREN_Pos     (0U)
#define SPI_CTL1_DMAREN_Msk     (0x1UL << SPI_CTL1_DMAREN_Pos)            /*!< 0x00000001 */
#define SPI_CTL1_DMAREN         SPI_CTL1_DMAREN_Msk                       /*!< Receive buffer DMA enable */
#define SPI_CTL1_DMATEN_Pos     (1U)
#define SPI_CTL1_DMATEN_Msk     (0x1UL << SPI_CTL1_DMATEN_Pos)            /*!< 0x00000002 */
#define SPI_CTL1_DMATEN         SPI_CTL1_DMATEN_Msk                       /*!< Transmit buffer DMA enable */
#define SPI_CTL1_NSSDRV_Pos     (2U)
#define SPI_CTL1_NSSDRV_Msk     (0x1UL << SPI_CTL1_NSSDRV_Pos)            /*!< 0x00000004 */
#define SPI_CTL1_NSSDRV         SPI_CTL1_NSSDRV_Msk                       /*!< Drive NSS output */
#define SPI_CTL1_NSSP_Pos       (3U)
#define SPI_CTL1_NSSP_Msk       (0x1UL << SPI_CTL1_NSSP_Pos)              /*!< 0x00000008 */
#define SPI_CTL1_NSSP           SPI_CTL1_NSSP_Msk                         /*!< SPI NSS pulse mode enable */
#define SPI_CTL1_TMOD_Pos       (4U)
#define SPI_CTL1_TMOD_Msk       (0x1UL << SPI_CTL1_TMOD_Pos)              /*!< 0x00000010 */
#define SPI_CTL1_TMOD           SPI_CTL1_TMOD_Msk                         /*!< SPI TI mode enable */
#define SPI_CTL1_ERRIE_Pos      (5U)
#define SPI_CTL1_ERRIE_Msk      (0x1UL << SPI_CTL1_ERRIE_Pos)             /*!< 0x00000020 */
#define SPI_CTL1_ERRIE          SPI_CTL1_ERRIE_Msk                        /*!< Errors interrupt enable */
#define SPI_CTL1_RBNEIE_Pos     (6U)
#define SPI_CTL1_RBNEIE_Msk     (0x1UL << SPI_CTL1_RBNEIE_Pos)            /*!< 0x00000040 */
#define SPI_CTL1_RBNEIE         SPI_CTL1_RBNEIE_Msk                       /*!< Receive buffer not empty interrupt enable */
#define SPI_CTL1_TBEIE_Pos      (7U)
#define SPI_CTL1_TBEIE_Msk      (0x1UL << SPI_CTL1_TBEIE_Pos)             /*!< 0x00000080 */
#define SPI_CTL1_TBEIE          SPI_CTL1_TBEIE_Msk                        /*!< Transmit buffer empty interrupt enable */

/* SPI_STAT */
#define SPI_STAT_RBNE_Pos       (0U)
#define SPI_STAT_RBNE_Msk       (0x1UL << SPI_STAT_RBNE_Pos)              /*!< 0x00000001 */
#define SPI_STAT_RBNE           SPI_STAT_RBNE_Msk                         /*!< Receive buffer not empty */
#define SPI_STAT_TBE_Pos        (1U)
#define SPI_STAT_TBE_Msk        (0x1UL << SPI_STAT_TBE_Pos)               /*!< 0x00000002 */
#define SPI_STAT_TBE            SPI_STAT_TBE_Msk                          /*!< Transmit buffer empty */
#define SPI_STAT_I2SCH_Pos      (2U)
#define SPI_STAT_I2SCH_Msk      (0x1UL << SPI_STAT_I2SCH_Pos)             /*!< 0x00000004 */
#define SPI_STAT_I2SCH          SPI_STAT_I2SCH_Msk                        /*!< I2S channel side */
#define SPI_STAT_TXURERR_Pos    (3U)
#define SPI_STAT_TXURERR_Msk    (0x1UL << SPI_STAT_TXURERR_Pos)           /*!< 0x00000008 */
#define SPI_STAT_TXURERR        SPI_STAT_TXURERR_Msk                      /*!< Transmission underrun error bit */
#define SPI_STAT_CRCERR_Pos     (4U)
#define SPI_STAT_CRCERR_Msk     (0x1UL << SPI_STAT_CRCERR_Pos)            /*!< 0x00000010 */
#define SPI_STAT_CRCERR         SPI_STAT_CRCERR_Msk                       /*!< SPI CRC error bit */
#define SPI_STAT_CONFERR_Pos    (5U)
#define SPI_STAT_CONFERR_Msk    (0x1UL << SPI_STAT_CONFERR_Pos)           /*!< 0x00000020 */
#define SPI_STAT_CONFERR        SPI_STAT_CONFERR_Msk                      /*!< SPI Configuration error */
#define SPI_STAT_RXORERR_Pos    (6U)
#define SPI_STAT_RXORERR_Msk    (0x1UL << SPI_STAT_RXORERR_Pos)           /*!< 0x00000040 */
#define SPI_STAT_RXORERR        SPI_STAT_RXORERR_Msk                      /*!< Reception overrun error bit */
#define SPI_STAT_TRANS_Pos      (7U)
#define SPI_STAT_TRANS_Msk      (0x1UL << SPI_STAT_TRANS_Pos)             /*!< 0x00000080 */
#define SPI_STAT_TRANS          SPI_STAT_TRANS_Msk                        /*!< Transmitting ongoing bit */
#define SPI_STAT_FERR_Pos       (8U)
#define SPI_STAT_FERR_Msk       (0x1UL << SPI_STAT_FERR_Pos)              /*!< 0x00000100 */
#define SPI_STAT_FERR           SPI_STAT_FERR_Msk                         /*!< Format error */

/* SPI_DATA */
#define SPI_DATA_DATA_Pos       (0U)
#define SPI_DATA_DATA_Msk       (0xFFFFUL << SPI_DATA_DATA_Pos)           /*!< 0x0000FFFF */
#define SPI_DATA_DATA           SPI_DATA_DATA_Msk                         /*!< Data transfer register */

/* SPI_CRCPOLY */
#define SPI_CRCPOLY_CRCPOLY_Pos (0U)
#define SPI_CRCPOLY_CRCPOLY_Msk (0xFFFFUL << SPI_CRCPOLY_CRCPOLY_Pos)     /*!< 0x0000FFFF */
#define SPI_CRCPOLY_CRCPOLY     SPI_CRCPOLY_CRCPOLY_Msk                   /*!< CRC polynomial value */

/* SPI_RCRC */
#define SPI_RCRC_RCRC_Pos       (0U)
#define SPI_RCRC_RCRC_Msk       (0xFFFFUL << SPI_RCRC_RCRC_Pos)           /*!< 0x0000FFFF */
#define SPI_RCRC_RCRC           SPI_RCRC_RCRC_Msk                         /*!< RX CRC value */

/* SPI_TCRC */
#define SPI_TCRC_TCRC_Pos       (0U)
#define SPI_TCRC_TCRC_Msk       (0xFFFFUL << SPI_TCRC_TCRC_Pos)           /*!< 0x0000FFFF */
#define SPI_TCRC_TCRC           SPI_TCRC_TCRC_Msk                         /*!< TX CRC value */

/* SPI_I2SCTL */
#define SPI_I2SCTL_CHLEN_Pos    (0U)
#define SPI_I2SCTL_CHLEN_Msk    (0x1UL << SPI_I2SCTL_CHLEN_Pos)           /*!< 0x00000001 */
#define SPI_I2SCTL_CHLEN        SPI_I2SCTL_CHLEN_Msk                      /*!< Channel length */

#define SPI_I2SCTL_DTLEN_Pos    (1U)
#define SPI_I2SCTL_DTLEN_Msk    (0x3UL << SPI_I2SCTL_DTLEN_Pos)           /*!< 0x00000006 */
#define SPI_I2SCTL_DTLEN        SPI_I2SCTL_DTLEN_Msk                      /*!< DTLEN[1:0] bits (Data length) */
#define SPI_I2SCTL_DTLEN_0      (0x1UL << SPI_I2SCTL_DTLEN_Pos)           /*!< 0x00000002 */
#define SPI_I2SCTL_DTLEN_1      (0x2UL << SPI_I2SCTL_DTLEN_Pos)           /*!< 0x00000004 */

#define SPI_I2SCTL_CKPL_Pos     (3U)
#define SPI_I2SCTL_CKPL_Msk     (0x1UL << SPI_I2SCTL_CKPL_Pos)            /*!< 0x00000008 */
#define SPI_I2SCTL_CKPL         SPI_I2SCTL_CKPL_Msk                       /*!< Idle state clock polarity */

#define SPI_I2SCTL_I2SSTD_Pos   (4U)
#define SPI_I2SCTL_I2SSTD_Msk   (0x3UL << SPI_I2SCTL_I2SSTD_Pos)          /*!< 0x00000030 */
#define SPI_I2SCTL_I2SSTD       SPI_I2SCTL_I2SSTD_Msk                     /*!< I2SSTD[1:0] bits (I2S standard selection) */
#define SPI_I2SCTL_I2SSTD_0     (0x1UL << SPI_I2SCTL_I2SSTD_Pos)          /*!< 0x00000010 */
#define SPI_I2SCTL_I2SSTD_1     (0x2UL << SPI_I2SCTL_I2SSTD_Pos)          /*!< 0x00000020 */

#define SPI_I2SCTL_PCMSMOD_Pos  (7U)
#define SPI_I2SCTL_PCMSMOD_Msk  (0x1UL << SPI_I2SCTL_PCMSMOD_Pos)         /*!< 0x00000080 */
#define SPI_I2SCTL_PCMSMOD      SPI_I2SCTL_PCMSMOD_Msk                    /*!< PCM frame synchronization mode */

#define SPI_I2SCTL_I2SOPMOD_Pos (8U)
#define SPI_I2SCTL_I2SOPMOD_Msk (0x3UL << SPI_I2SCTL_I2SOPMOD_Pos)        /*!< 0x00000300 */
#define SPI_I2SCTL_I2SOPMOD     SPI_I2SCTL_I2SOPMOD_Msk                   /*!< I2SOPMOD[1:0] bits (I2S operation mode) */
#define SPI_I2SCTL_I2SOPMOD_0   (0x1UL << SPI_I2SCTL_I2SOPMOD_Pos)        /*!< 0x00000100 */
#define SPI_I2SCTL_I2SOPMOD_1   (0x2UL << SPI_I2SCTL_I2SOPMOD_Pos)        /*!< 0x00000200 */

#define SPI_I2SCTL_I2SEN_Pos    (10U)
#define SPI_I2SCTL_I2SEN_Msk    (0x1UL << SPI_I2SCTL_I2SEN_Pos)           /*!< 0x00000400 */
#define SPI_I2SCTL_I2SEN        SPI_I2SCTL_I2SEN_Msk                      /*!< I2S enable */
#define SPI_I2SCTL_I2SSEL_Pos   (11U)
#define SPI_I2SCTL_I2SSEL_Msk   (0x1UL << SPI_I2SCTL_I2SSEL_Pos)          /*!< 0x00000800 */
#define SPI_I2SCTL_I2SSEL       SPI_I2SCTL_I2SSEL_Msk                     /*!< I2S mode selection */

/* SPI_I2SPSC */
#define SPI_I2SPSC_DIV_Pos      (0U)
#define SPI_I2SPSC_DIV_Msk      (0xFFUL << SPI_I2SPSC_DIV_Pos)            /*!< 0x000000FF */
#define SPI_I2SPSC_DIV          SPI_I2SPSC_DIV_Msk                        /*!< DIV[7:0] bits (Dividing factor for the prescaler) */
#define SPI_I2SPSC_DIV_0        (0x01UL << SPI_I2SPSC_DIV_Pos)            /*!< 0x00000001 */
#define SPI_I2SPSC_DIV_1        (0x02UL << SPI_I2SPSC_DIV_Pos)            /*!< 0x00000002 */
#define SPI_I2SPSC_DIV_2        (0x04UL << SPI_I2SPSC_DIV_Pos)            /*!< 0x00000004 */
#define SPI_I2SPSC_DIV_3        (0x08UL << SPI_I2SPSC_DIV_Pos)            /*!< 0x00000008 */
#define SPI_I2SPSC_DIV_4        (0x10UL << SPI_I2SPSC_DIV_Pos)            /*!< 0x00000010 */
#define SPI_I2SPSC_DIV_5        (0x20UL << SPI_I2SPSC_DIV_Pos)            /*!< 0x00000020 */
#define SPI_I2SPSC_DIV_6        (0x40UL << SPI_I2SPSC_DIV_Pos)            /*!< 0x00000040 */
#define SPI_I2SPSC_DIV_7        (0x80UL << SPI_I2SPSC_DIV_Pos)            /*!< 0x00000080 */

#define SPI_I2SPSC_OF_Pos       (8U)
#define SPI_I2SPSC_OF_Msk       (0x1UL << SPI_I2SPSC_OF_Pos)              /*!< 0x00000100 */
#define SPI_I2SPSC_OF           SPI_I2SPSC_OF_Msk                         /*!< Odd factor for the prescaler */
#define SPI_I2SPSC_MCKOEN_Pos   (9U)
#define SPI_I2SPSC_MCKOEN_Msk   (0x1UL << SPI_I2SPSC_MCKOEN_Pos)          /*!< 0x00000200 */
#define SPI_I2SPSC_MCKOEN       SPI_I2SPSC_MCKOEN_Msk                     /*!< I2S_MCK output enable */

/* SPI_QCTL (only for SPI0) */
#define SPI_QCTL_QMOD_Pos       (0U)
#define SPI_QCTL_QMOD_Msk       (0x1UL << SPI_QCTL_QMOD_Pos)              /*!< 0x00000001 */
#define SPI_QCTL_QMOD           SPI_QCTL_QMOD_Msk                         /*!< Quad-SPI mode enable */
#define SPI_QCTL_QRD_Pos        (1U)
#define SPI_QCTL_QRD_Msk        (0x1UL << SPI_QCTL_QRD_Pos)               /*!< 0x00000002 */
#define SPI_QCTL_QRD            SPI_QCTL_QRD_Msk                          /*!< Quad-SPI mode read select */
#define SPI_QCTL_IO23_DRV_Pos   (2U)
#define SPI_QCTL_IO23_DRV_Msk   (0x1UL << SPI_QCTL_IO23_DRV_Pos)          /*!< 0x00000004 */
#define SPI_QCTL_IO23_DRV       SPI_QCTL_IO23_DRV_Msk                     /*!< Drive IO2 and IO3 enable */

#endif // GD32E10X_SPI_H_

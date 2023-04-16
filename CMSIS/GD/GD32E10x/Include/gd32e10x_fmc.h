#ifndef GD32E10X_FMC_H_
#define GD32E10X_FMC_H_

/* FMC struct */
typedef struct
{
  __IO uint32_t WS;            /*!< FMC wait state register,               Address offset: 0x000 */
  __IO uint32_t KEY;           /*!< FMC unlock key register,               Address offset: 0x004 */
  __IO uint32_t OBKEY;         /*!< FMC option bytes unlock key register,  Address offset: 0x008 */
  __IO uint32_t STAT;          /*!< FMC status register,                   Address offset: 0x00C */
  __IO uint32_t CTL;           /*!< FMC control register,                  Address offset: 0x010 */
  __IO uint32_t ADDR;          /*!< FMC address register,                  Address offset: 0x014 */
       uint32_t RESERVED0;     /*!< Reserved */
  __IO uint32_t OBSTAT;        /*!< FMC option bytes status register,      Address offset: 0x01C */
  __IO uint32_t WP;            /*!< FMC erase/program protection register, Address offset: 0x020 */
       uint32_t RESERVED1[55]; /*!< Reserved */
  __IO uint32_t PID;           /*!< FMC product ID register,               Address offset: 0x100 */
} FMC_TypeDef;

/* FMC definitions */
#define FMC                    ((FMC_TypeDef *) FMC_BASE)            /*!< FMC base address */

/* bits definitions */
/* FMC_WS */
#define FMC_WS_WSCNT_Pos       (0U)
#define FMC_WS_WSCNT_Msk       (0x7UL << FMC_WS_WSCNT_Pos)           /*!< 0x00000007 */
#define FMC_WS_WSCNT           FMC_WS_WSCNT_Msk                      /*!< Wait state counter register */
#define FMC_WS_WSCNT_0         (0x1UL << FMC_WS_WSCNT_Pos)           /*!< 0x00000001 */
#define FMC_WS_WSCNT_1         (0x2UL << FMC_WS_WSCNT_Pos)           /*!< 0x00000002 */
#define FMC_WS_WSCNT_2         (0x4UL << FMC_WS_WSCNT_Pos)           /*!< 0x00000004 */

#define FMC_WS_PFEN_Pos        (4U)
#define FMC_WS_PFEN_Msk        (0x1UL << FMC_WS_PFEN_Pos)            /*!< 0x00000010 */
#define FMC_WS_PFEN            FMC_WS_PFEN_Msk                       /*!< Pre-fetch enable */
#define FMC_WS_ICEN_Pos        (9U)
#define FMC_WS_ICEN_Msk        (0x1UL << FMC_WS_ICEN_Pos)            /*!< 0x00000200 */
#define FMC_WS_ICEN            FMC_WS_ICEN_Msk                       /*!< IBUS cache enable */
#define FMC_WS_DCEN_Pos        (10U)
#define FMC_WS_DCEN_Msk        (0x1UL << FMC_WS_DCEN_Pos)            /*!< 0x00000400 */
#define FMC_WS_DCEN            FMC_WS_DCEN_Msk                       /*!< DBUS cache enable */
#define FMC_WS_ICRST_Pos       (11U)
#define FMC_WS_ICRST_Msk       (0x1UL << FMC_WS_ICRST_Pos)           /*!< 0x00000800 */
#define FMC_WS_ICRST           FMC_WS_ICRST_Msk                      /*!< IBUS cache reset */
#define FMC_WS_DCRST_Pos       (12U)
#define FMC_WS_DCRST_Msk       (0x1UL << FMC_WS_DCRST_Pos)           /*!< 0x00001000 */
#define FMC_WS_DCRST           FMC_WS_DCRST_Msk                      /*!< DBUS cache reset */
#define FMC_WS_PGW_Pos         (15U)
#define FMC_WS_PGW_Msk         (0x1UL << FMC_WS_PGW_Pos)             /*!< 0x00008000 */
#define FMC_WS_PGW             FMC_WS_PGW_Msk                        /*!< Program width to flash memory */

/* FMC_KEY */
#define FMC_KEY_KEY_Pos        (0U)
#define FMC_KEY_KEY_Msk        (0xFFFFFFFFUL << FMC_KEY_KEY_Pos)     /*!< 0xFFFFFFFF */
#define FMC_KEY_KEY            FMC_KEY_KEY_Msk                       /*!< FMC_CTL unlock register */

/* FMC_OBKEY */
#define FMC_OBKEY_OBKEY_Pos    (0U)
#define FMC_OBKEY_OBKEY_Msk    (0xFFFFFFFFUL << FMC_OBKEY_OBKEY_Pos) /*!< 0xFFFFFFFF */
#define FMC_OBKEY_OBKEY        FMC_OBKEY_OBKEY_Msk                   /*!< FMC_CTL option bytes operation unlock register */

/* FMC_STAT */
#define FMC_STAT_BUSY_Pos      (0U)
#define FMC_STAT_BUSY_Msk      (0x1UL << FMC_STAT_BUSY_Pos)          /*!< 0x00000001 */
#define FMC_STAT_BUSY          FMC_STAT_BUSY_Msk                     /*!< The flash is busy bit */
#define FMC_STAT_PGERR_Pos     (2U)
#define FMC_STAT_PGERR_Msk     (0x1UL << FMC_STAT_PGERR_Pos)         /*!< 0x00000004 */
#define FMC_STAT_PGERR         FMC_STAT_PGERR_Msk                    /*!< Program error flag bit */
#define FMC_STAT_PGAERR_Pos    (3U)
#define FMC_STAT_PGAERR_Msk    (0x1UL << FMC_STAT_PGAERR_Pos)        /*!< 0x00000020 */
#define FMC_STAT_PGAERR        FMC_STAT_PGAERR_Msk                   /*!< Program alignment error flag bit */
#define FMC_STAT_WPERR_Pos     (4U)
#define FMC_STAT_WPERR_Msk     (0x1UL << FMC_STAT_WPERR_Pos)         /*!< 0x00000010 */
#define FMC_STAT_WPERR         FMC_STAT_WPERR_Msk                    /*!< Erase/Program protection error flag bit */
#define FMC_STAT_ENDF_Pos      (5U)
#define FMC_STAT_ENDF_Msk      (0x1UL << FMC_STAT_ENDF_Pos)          /*!< 0x00000020 */
#define FMC_STAT_ENDF          FMC_STAT_ENDF_Msk                     /*!< End of operation flag bit */

/* FMC_CTL */
#define FMC_CTL_PG_Pos         (0U)
#define FMC_CTL_PG_Msk         (0x1UL << FMC_CTL_PG_Pos)             /*!< 0x00000001 */
#define FMC_CTL_PG             FMC_CTL_PG_Msk                        /*!< Main flash program for bank0 command bit */
#define FMC_CTL_PER_Pos        (1U)
#define FMC_CTL_PER_Msk        (0x1UL << FMC_CTL_PER_Pos)            /*!< 0x00000002 */
#define FMC_CTL_PER            FMC_CTL_PER_Msk                       /*!< Main flash page erase for bank0 command bit */
#define FMC_CTL_MER_Pos        (2U)
#define FMC_CTL_MER_Msk        (0x1UL << FMC_CTL_MER_Pos)            /*!< 0x00000004 */
#define FMC_CTL_MER            FMC_CTL_MER_Msk                       /*!< Main flash mass erase for bank0 command bit */
#define FMC_CTL_OBPG_Pos       (4U)
#define FMC_CTL_OBPG_Msk       (0x1UL << FMC_CTL_OBPG_Pos)           /*!< 0x00000010 */
#define FMC_CTL_OBPG           FMC_CTL_OBPG_Msk                      /*!< Option bytes program command bit */
#define FMC_CTL_OBER_Pos       (5U)
#define FMC_CTL_OBER_Msk       (0x1UL << FMC_CTL_OBER_Pos)           /*!< 0x00000020 */
#define FMC_CTL_OBER           FMC_CTL_OBER_Msk                      /*!< Option bytes erase command bit */
#define FMC_CTL_START_Pos      (6U)
#define FMC_CTL_START_Msk      (0x1UL << FMC_CTL_START_Pos)          /*!< 0x00000040 */
#define FMC_CTL_START          FMC_CTL_START_Msk                     /*!< Send erase command to FMC bit */
#define FMC_CTL_LK_Pos         (7U)
#define FMC_CTL_LK_Msk         (0x1UL << FMC_CTL_LK_Pos)             /*!< 0x00000080 */
#define FMC_CTL_LK             FMC_CTL_LK_Msk                        /*!< FMC_CTL lock bit */
#define FMC_CTL_OBWEN_Pos      (9U)
#define FMC_CTL_OBWEN_Msk      (0x1UL << FMC_CTL_OBWEN_Pos)          /*!< 0x00000200 */
#define FMC_CTL_OBWEN          FMC_CTL_OBWEN_Msk                     /*!< Option byte erase/program enable bit */
#define FMC_CTL_ERRIE_Pos      (10U)
#define FMC_CTL_ERRIE_Msk      (0x1UL << FMC_CTL_ERRIE_Pos)          /*!< 0x00000400 */
#define FMC_CTL_ERRIE          FMC_CTL_ERRIE_Msk                     /*!< Error interrupt enable bit */
#define FMC_CTL_ENDIE_Pos      (12U)
#define FMC_CTL_ENDIE_Msk      (0x1UL << FMC_CTL_ENDIE_Pos)          /*!< 0x00001000 */
#define FMC_CTL_ENDIE          FMC_CTL_ENDIE_Msk                     /*!< End of operation interrupt enable bit */

/* FMC_ADDR */
#define FMC_ADDR_ADDR_Pos      (0U)
#define FMC_ADDR_ADDR_Msk      (0xFFFFFFFFUL << FMC_ADDR_ADDR_Pos)   /*!< 0xFFFFFFFF */
#define FMC_ADDR_ADDR          FMC_ADDR_ADDR_Msk                     /*!< Flash erase/program command address bits */

/* FMC_OBSTAT */
#define FMC_OBSTAT_OBERR_Pos   (0U)
#define FMC_OBSTAT_OBERR_Msk   (0x1UL << FMC_OBSTAT_OBERR_Pos)       /*!< 0x00000001 */
#define FMC_OBSTAT_OBERR       FMC_OBSTAT_OBERR_Msk                  /*!< Option bytes read error bit */
#define FMC_OBSTAT_SPC_Pos     (1U)
#define FMC_OBSTAT_SPC_Msk     (0x1UL << FMC_OBSTAT_SPC_Pos)         /*!< 0x00000002 */
#define FMC_OBSTAT_SPC         FMC_OBSTAT_SPC_Msk                    /*!< Option bytes security protection code */

#define FMC_OBSTAT_USER_Pos    (2U)
#define FMC_OBSTAT_USER_Msk    (0xFFUL << FMC_OBSTAT_USER_Pos)       /*!< 0x000003FC */
#define FMC_OBSTAT_USER        FMC_OBSTAT_USER_Msk                   /*!< USER[7:0] bits (Store USER of option bytes block after system reset) */
#define FMC_OBSTAT_USER_0      (0x01UL << FMC_OBSTAT_USER_Pos)       /*!< 0x00000004 */
#define FMC_OBSTAT_USER_1      (0x02UL << FMC_OBSTAT_USER_Pos)       /*!< 0x00000008 */
#define FMC_OBSTAT_USER_2      (0x04UL << FMC_OBSTAT_USER_Pos)       /*!< 0x00000010 */
#define FMC_OBSTAT_USER_3      (0x08UL << FMC_OBSTAT_USER_Pos)       /*!< 0x00000020 */
#define FMC_OBSTAT_USER_4      (0x10UL << FMC_OBSTAT_USER_Pos)       /*!< 0x00000040 */
#define FMC_OBSTAT_USER_5      (0x20UL << FMC_OBSTAT_USER_Pos)       /*!< 0x00000080 */
#define FMC_OBSTAT_USER_6      (0x40UL << FMC_OBSTAT_USER_Pos)       /*!< 0x00000100 */
#define FMC_OBSTAT_USER_7      (0x80UL << FMC_OBSTAT_USER_Pos)       /*!< 0x00000200 */

#define FMC_OBSTAT_DATA_Pos    (10U)
#define FMC_OBSTAT_DATA_Msk    (0xFFFFUL << FMC_OBSTAT_DATA_Pos)     /*!< 0x03FFFC00 */
#define FMC_OBSTAT_DATA        FMC_OBSTAT_DATA_Msk                   /*!< DATA[15:0] bits (Store DATA of option bytes block after system reset) */
#define FMC_OBSTAT_DATA_0      (0x0001UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x00000400 */
#define FMC_OBSTAT_DATA_1      (0x0002UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x00000800 */
#define FMC_OBSTAT_DATA_2      (0x0004UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x00001000 */
#define FMC_OBSTAT_DATA_3      (0x0008UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x00002000 */
#define FMC_OBSTAT_DATA_4      (0x0010UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x00004000 */
#define FMC_OBSTAT_DATA_5      (0x0020UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x00008000 */
#define FMC_OBSTAT_DATA_6      (0x0040UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x00010000 */
#define FMC_OBSTAT_DATA_7      (0x0080UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x00020000 */
#define FMC_OBSTAT_DATA_8      (0x0100UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x00040000 */
#define FMC_OBSTAT_DATA_9      (0x0200UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x00080000 */
#define FMC_OBSTAT_DATA_10     (0x0400UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x00100000 */
#define FMC_OBSTAT_DATA_11     (0x0800UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x00200000 */
#define FMC_OBSTAT_DATA_12     (0x1000UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x00400000 */
#define FMC_OBSTAT_DATA_13     (0x2000UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x00800000 */
#define FMC_OBSTAT_DATA_14     (0x4000UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x01000000 */
#define FMC_OBSTAT_DATA_15     (0x8000UL << FMC_OBSTAT_DATA_Pos)     /*!< 0x02000000 */

/* FMC_WP */
#define FMC_WP_WP_Pos          (0U)
#define FMC_WP_WP_Msk          (0xFFFFFFFFUL << FMC_WP_WP_Pos)       /*!< 0xFFFFFFFF */
#define FMC_WP_WP              FMC_WP_WP_Msk                         /*!< Store WP[31:0] of option bytes block after system reset */

/* FMC_PID */
#define FMC_PID_PID_Pos        (0U)
#define FMC_PID_PID_Msk        (0xFFFFFFFFUL << FMC_PID_PID_Pos)     /*!< 0xFFFFFFFF */
#define FMC_PID_PID            FMC_PID_PID_Msk                       /*!< Product reserved ID code register */

/* unlock key */
#define UNLOCK_KEY0            ((uint32_t)0x45670123U)               /*!< unlock key 0 */
#define UNLOCK_KEY1            ((uint32_t)0xCDEF89ABU)               /*!< unlock key 1 */

#endif // GD32E10X_FMC_H_

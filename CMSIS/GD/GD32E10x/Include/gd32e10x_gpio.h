#ifndef GD32E10X_GPIO_H_
#define GD32E10X_GPIO_H_

/* GPIO struct */
typedef struct
{
  __IO uint32_t CTL0;           /*!< GPIO port control register 0,          Address offset: 0x00 */
  __IO uint32_t CTL1;           /*!< GPIO port control register 1,          Address offset: 0x04 */
  __IO uint32_t ISTAT;          /*!< GPIO port input status register,       Address offset: 0x08 */
  __IO uint32_t OCTL;           /*!< GPIO port output control register,     Address offset: 0x0C */
  __IO uint32_t BOP;            /*!< GPIO port bit operation register,      Address offset: 0x10 */
  __IO uint32_t BC;             /*!< GPIO bit clear register,               Address offset: 0x14 */
  __IO uint32_t LOCK;           /*!< GPIO port configuration lock register, Address offset: 0x18 */
       uint32_t RESERVED0[8];   /*!< Reserved */
  __IO uint32_t SPD;            /*!< GPIO port bit speed register,          Address offset: 0x3C */
       uint32_t RESERVED1[240]; /*!< Reserved */
} GPIO_TypeDef;

/* GPIO definitions */
#define GPIO                           ((GPIO_TypeDef *) GPIO_BASE)          /*!< GPIO base address */
#define GPIOA                          (&GPIO[0])                            /*!< GPIOA base address */
#define GPIOB                          (&GPIO[1])                            /*!< GPIOB base address */
#define GPIOC                          (&GPIO[2])                            /*!< GPIOC base address */
#define GPIOD                          (&GPIO[3])                            /*!< GPIOD base address */
#define GPIOE                          (&GPIO[4])                            /*!< GPIOE base address */

/* bits definitions */
/* GPIO_CTL0 */
#define GPIO_CTL0_MD_Pos               (0U)
#define GPIO_CTL0_MD_Msk               (0x33333333UL << GPIO_CTL0_MD_Pos)    /*!< 0x33333333 */
#define GPIO_CTL0_MD                   GPIO_CTL0_MD_Msk                      /*!< Port mode bits */

#define GPIO_CTL0_MD0_Pos              (0U)
#define GPIO_CTL0_MD0_Msk              (0x3UL << GPIO_CTL0_MD0_Pos)          /*!< 0x00000003 */
#define GPIO_CTL0_MD0                  GPIO_CTL0_MD0_Msk                     /*!< MD0[1:0] bits (Port mode bits, pin 0) */
#define GPIO_CTL0_MD0_0                (0x1UL << GPIO_CTL0_MD0_Pos)          /*!< 0x00000001 */
#define GPIO_CTL0_MD0_1                (0x2UL << GPIO_CTL0_MD0_Pos)          /*!< 0x00000002 */

#define GPIO_CTL0_MD1_Pos              (4U)
#define GPIO_CTL0_MD1_Msk              (0x3UL << GPIO_CTL0_MD1_Pos)          /*!< 0x00000030 */
#define GPIO_CTL0_MD1                  GPIO_CTL0_MD1_Msk                     /*!< MD1[1:0] bits (Port mode bits, pin 1) */
#define GPIO_CTL0_MD1_0                (0x1UL << GPIO_CTL0_MD1_Pos)          /*!< 0x00000010 */
#define GPIO_CTL0_MD1_1                (0x2UL << GPIO_CTL0_MD1_Pos)          /*!< 0x00000020 */

#define GPIO_CTL0_MD2_Pos              (8U)
#define GPIO_CTL0_MD2_Msk              (0x3UL << GPIO_CTL0_MD2_Pos)          /*!< 0x00000300 */
#define GPIO_CTL0_MD2                  GPIO_CTL0_MD2_Msk                     /*!< MD2[1:0] bits (Port mode bits, pin 2) */
#define GPIO_CTL0_MD2_0                (0x1UL << GPIO_CTL0_MD2_Pos)          /*!< 0x00000100 */
#define GPIO_CTL0_MD2_1                (0x2UL << GPIO_CTL0_MD2_Pos)          /*!< 0x00000200 */

#define GPIO_CTL0_MD3_Pos              (12U)
#define GPIO_CTL0_MD3_Msk              (0x3UL << GPIO_CTL0_MD3_Pos)          /*!< 0x00003000 */
#define GPIO_CTL0_MD3                  GPIO_CTL0_MD3_Msk                     /*!< MD3[1:0] bits (Port mode bits, pin 3) */
#define GPIO_CTL0_MD3_0                (0x1UL << GPIO_CTL0_MD3_Pos)          /*!< 0x00001000 */
#define GPIO_CTL0_MD3_1                (0x2UL << GPIO_CTL0_MD3_Pos)          /*!< 0x00002000 */

#define GPIO_CTL0_MD4_Pos              (16U)
#define GPIO_CTL0_MD4_Msk              (0x3UL << GPIO_CTL0_MD4_Pos)          /*!< 0x00030000 */
#define GPIO_CTL0_MD4                  GPIO_CTL0_MD4_Msk                     /*!< MD4[1:0] bits (Port mode bits, pin 4) */
#define GPIO_CTL0_MD4_0                (0x1UL << GPIO_CTL0_MD4_Pos)          /*!< 0x00010000 */
#define GPIO_CTL0_MD4_1                (0x2UL << GPIO_CTL0_MD4_Pos)          /*!< 0x00020000 */

#define GPIO_CTL0_MD5_Pos              (20U)
#define GPIO_CTL0_MD5_Msk              (0x3UL << GPIO_CTL0_MD5_Pos)          /*!< 0x00300000 */
#define GPIO_CTL0_MD5                  GPIO_CTL0_MD5_Msk                     /*!< MD5[1:0] bits (Port mode bits, pin 5) */
#define GPIO_CTL0_MD5_0                (0x1UL << GPIO_CTL0_MD5_Pos)          /*!< 0x00100000 */
#define GPIO_CTL0_MD5_1                (0x2UL << GPIO_CTL0_MD5_Pos)          /*!< 0x00200000 */

#define GPIO_CTL0_MD6_Pos              (24U)
#define GPIO_CTL0_MD6_Msk              (0x3UL << GPIO_CTL0_MD6_Pos)          /*!< 0x03000000 */
#define GPIO_CTL0_MD6                  GPIO_CTL0_MD6_Msk                     /*!< MD6[1:0] bits (Port mode bits, pin 6) */
#define GPIO_CTL0_MD6_0                (0x1UL << GPIO_CTL0_MD6_Pos)          /*!< 0x01000000 */
#define GPIO_CTL0_MD6_1                (0x2UL << GPIO_CTL0_MD6_Pos)          /*!< 0x02000000 */

#define GPIO_CTL0_MD7_Pos              (28U)
#define GPIO_CTL0_MD7_Msk              (0x3UL << GPIO_CTL0_MD7_Pos)          /*!< 0x30000000 */
#define GPIO_CTL0_MD7                  GPIO_CTL0_MD7_Msk                     /*!< MD7[1:0] bits (Port mode bits, pin 7) */
#define GPIO_CTL0_MD7_0                (0x1UL << GPIO_CTL0_MD7_Pos)          /*!< 0x10000000 */
#define GPIO_CTL0_MD7_1                (0x2UL << GPIO_CTL0_MD7_Pos)          /*!< 0x20000000 */

#define GPIO_CTL0_CTL_Pos              (2U)
#define GPIO_CTL0_CTL_Msk              (0x33333333UL << GPIO_CTL0_CTL_Pos)   /*!< 0xCCCCCCCC */
#define GPIO_CTL0_CTL                  GPIO_CTL0_CTL_Msk                     /*!< Port configuration bits */

#define GPIO_CTL0_CTL0_Pos             (2U)
#define GPIO_CTL0_CTL0_Msk             (0x3UL << GPIO_CTL0_CTL0_Pos)         /*!< 0x0000000C */
#define GPIO_CTL0_CTL0                 GPIO_CTL0_CTL0_Msk                    /*!< CTL0[1:0] bits (Port configuration bits, pin 0) */
#define GPIO_CTL0_CTL0_0               (0x1UL << GPIO_CTL0_CTL0_Pos)         /*!< 0x00000004 */
#define GPIO_CTL0_CTL0_1               (0x2UL << GPIO_CTL0_CTL0_Pos)         /*!< 0x00000008 */

#define GPIO_CTL0_CTL1_Pos             (6U)
#define GPIO_CTL0_CTL1_Msk             (0x3UL << GPIO_CTL0_CTL1_Pos)         /*!< 0x000000C0 */
#define GPIO_CTL0_CTL1                 GPIO_CTL0_CTL1_Msk                    /*!< CTL1[1:0] bits (Port configuration bits, pin 1) */
#define GPIO_CTL0_CTL1_0               (0x1UL << GPIO_CTL0_CTL1_Pos)         /*!< 0x00000040 */
#define GPIO_CTL0_CTL1_1               (0x2UL << GPIO_CTL0_CTL1_Pos)         /*!< 0x00000080 */

#define GPIO_CTL0_CTL2_Pos             (10U)
#define GPIO_CTL0_CTL2_Msk             (0x3UL << GPIO_CTL0_CTL2_Pos)         /*!< 0x00000C00 */
#define GPIO_CTL0_CTL2                 GPIO_CTL0_CTL2_Msk                    /*!< CTL2[1:0] bits (Port configuration bits, pin 2) */
#define GPIO_CTL0_CTL2_0               (0x1UL << GPIO_CTL0_CTL2_Pos)         /*!< 0x00000400 */
#define GPIO_CTL0_CTL2_1               (0x2UL << GPIO_CTL0_CTL2_Pos)         /*!< 0x00000800 */

#define GPIO_CTL0_CTL3_Pos             (14U)
#define GPIO_CTL0_CTL3_Msk             (0x3UL << GPIO_CTL0_CTL3_Pos)         /*!< 0x0000C000 */
#define GPIO_CTL0_CTL3                 GPIO_CTL0_CTL3_Msk                    /*!< CTL3[1:0] bits (Port configuration bits, pin 3) */
#define GPIO_CTL0_CTL3_0               (0x1UL << GPIO_CTL0_CTL3_Pos)         /*!< 0x00004000 */
#define GPIO_CTL0_CTL3_1               (0x2UL << GPIO_CTL0_CTL3_Pos)         /*!< 0x00008000 */

#define GPIO_CTL0_CTL4_Pos             (18U)
#define GPIO_CTL0_CTL4_Msk             (0x3UL << GPIO_CTL0_CTL4_Pos)         /*!< 0x000C0000 */
#define GPIO_CTL0_CTL4                 GPIO_CTL0_CTL4_Msk                    /*!< CTL4[1:0] bits (Port configuration bits, pin 4) */
#define GPIO_CTL0_CTL4_0               (0x1UL << GPIO_CTL0_CTL4_Pos)         /*!< 0x00040000 */
#define GPIO_CTL0_CTL4_1               (0x2UL << GPIO_CTL0_CTL4_Pos)         /*!< 0x00080000 */

#define GPIO_CTL0_CTL5_Pos             (22U)
#define GPIO_CTL0_CTL5_Msk             (0x3UL << GPIO_CTL0_CTL5_Pos)         /*!< 0x00C00000 */
#define GPIO_CTL0_CTL5                 GPIO_CTL0_CTL5_Msk                    /*!< CTL5[1:0] bits (Port configuration bits, pin 5) */
#define GPIO_CTL0_CTL5_0               (0x1UL << GPIO_CTL0_CTL5_Pos)         /*!< 0x00400000 */
#define GPIO_CTL0_CTL5_1               (0x2UL << GPIO_CTL0_CTL5_Pos)         /*!< 0x00800000 */

#define GPIO_CTL0_CTL6_Pos             (26U)
#define GPIO_CTL0_CTL6_Msk             (0x3UL << GPIO_CTL0_CTL6_Pos)         /*!< 0x0C000000 */
#define GPIO_CTL0_CTL6                 GPIO_CTL0_CTL6_Msk                    /*!< CTL6[1:0] bits (Port configuration bits, pin 6) */
#define GPIO_CTL0_CTL6_0               (0x1UL << GPIO_CTL0_CTL6_Pos)         /*!< 0x04000000 */
#define GPIO_CTL0_CTL6_1               (0x2UL << GPIO_CTL0_CTL6_Pos)         /*!< 0x08000000 */

#define GPIO_CTL0_CTL7_Pos             (30U)
#define GPIO_CTL0_CTL7_Msk             (0x3UL << GPIO_CTL0_CTL7_Pos)         /*!< 0xC0000000 */
#define GPIO_CTL0_CTL7                 GPIO_CTL0_CTL7_Msk                    /*!< CTL7[1:0] bits (Port configuration bits, pin 7) */
#define GPIO_CTL0_CTL7_0               (0x1UL << GPIO_CTL0_CTL7_Pos)         /*!< 0x40000000 */
#define GPIO_CTL0_CTL7_1               (0x2UL << GPIO_CTL0_CTL7_Pos)         /*!< 0x80000000 */

/* GPIO_CTL1 */
#define GPIO_CTL1_MD_Pos               (0U)
#define GPIO_CTL1_MD_Msk               (0x33333333UL << GPIO_CTL1_MD_Pos)    /*!< 0x33333333 */
#define GPIO_CTL1_MD                   GPIO_CTL1_MD_Msk                      /*!< Port mode bits */

#define GPIO_CTL1_MD8_Pos              (0U)
#define GPIO_CTL1_MD8_Msk              (0x3UL << GPIO_CTL1_MD8_Pos)          /*!< 0x00000003 */
#define GPIO_CTL1_MD8                  GPIO_CTL1_MD8_Msk                     /*!< MD8[1:0] bits (Port mode bits, pin 8) */
#define GPIO_CTL1_MD8_0                (0x1UL << GPIO_CTL1_MD8_Pos)          /*!< 0x00000001 */
#define GPIO_CTL1_MD8_1                (0x2UL << GPIO_CTL1_MD8_Pos)          /*!< 0x00000002 */

#define GPIO_CTL1_MD9_Pos              (4U)
#define GPIO_CTL1_MD9_Msk              (0x3UL << GPIO_CTL1_MD9_Pos)          /*!< 0x00000030 */
#define GPIO_CTL1_MD9                  GPIO_CTL1_MD9_Msk                     /*!< MD9[1:0] bits (Port mode bits, pin 9) */
#define GPIO_CTL1_MD9_0                (0x1UL << GPIO_CTL1_MD9_Pos)          /*!< 0x00000010 */
#define GPIO_CTL1_MD9_1                (0x2UL << GPIO_CTL1_MD9_Pos)          /*!< 0x00000020 */

#define GPIO_CTL1_MD10_Pos             (8U)
#define GPIO_CTL1_MD10_Msk             (0x3UL << GPIO_CTL1_MD10_Pos)         /*!< 0x00000300 */
#define GPIO_CTL1_MD10                 GPIO_CTL1_MD10_Msk                    /*!< MD10[1:0] bits (Port mode bits, pin 10) */
#define GPIO_CTL1_MD10_0               (0x1UL << GPIO_CTL1_MD10_Pos)         /*!< 0x00000100 */
#define GPIO_CTL1_MD10_1               (0x2UL << GPIO_CTL1_MD10_Pos)         /*!< 0x00000200 */

#define GPIO_CTL1_MD11_Pos             (12U)
#define GPIO_CTL1_MD11_Msk             (0x3UL << GPIO_CTL1_MD11_Pos)         /*!< 0x00003000 */
#define GPIO_CTL1_MD11                 GPIO_CTL1_MD11_Msk                    /*!< MD11[1:0] bits (Port mode bits, pin 11) */
#define GPIO_CTL1_MD11_0               (0x1UL << GPIO_CTL1_MD11_Pos)         /*!< 0x00001000 */
#define GPIO_CTL1_MD11_1               (0x2UL << GPIO_CTL1_MD11_Pos)         /*!< 0x00002000 */

#define GPIO_CTL1_MD12_Pos             (16U)
#define GPIO_CTL1_MD12_Msk             (0x3UL << GPIO_CTL1_MD12_Pos)         /*!< 0x00030000 */
#define GPIO_CTL1_MD12                 GPIO_CTL1_MD12_Msk                    /*!< MD12[1:0] bits (Port mode bits, pin 12) */
#define GPIO_CTL1_MD12_0               (0x1UL << GPIO_CTL1_MD12_Pos)         /*!< 0x00010000 */
#define GPIO_CTL1_MD12_1               (0x2UL << GPIO_CTL1_MD12_Pos)         /*!< 0x00020000 */

#define GPIO_CTL1_MD13_Pos             (20U)
#define GPIO_CTL1_MD13_Msk             (0x3UL << GPIO_CTL1_MD13_Pos)         /*!< 0x00300000 */
#define GPIO_CTL1_MD13                 GPIO_CTL1_MD13_Msk                    /*!< MD13[1:0] bits (Port mode bits, pin 13) */
#define GPIO_CTL1_MD13_0               (0x1UL << GPIO_CTL1_MD13_Pos)         /*!< 0x00100000 */
#define GPIO_CTL1_MD13_1               (0x2UL << GPIO_CTL1_MD13_Pos)         /*!< 0x00200000 */

#define GPIO_CTL1_MD14_Pos             (24U)
#define GPIO_CTL1_MD14_Msk             (0x3UL << GPIO_CTL1_MD14_Pos)         /*!< 0x03000000 */
#define GPIO_CTL1_MD14                 GPIO_CTL1_MD14_Msk                    /*!< MD14[1:0] bits (Port mode bits, pin 14) */
#define GPIO_CTL1_MD14_0               (0x1UL << GPIO_CTL1_MD14_Pos)         /*!< 0x01000000 */
#define GPIO_CTL1_MD14_1               (0x2UL << GPIO_CTL1_MD14_Pos)         /*!< 0x02000000 */

#define GPIO_CTL1_MD15_Pos             (28U)
#define GPIO_CTL1_MD15_Msk             (0x3UL << GPIO_CTL1_MD15_Pos)         /*!< 0x30000000 */
#define GPIO_CTL1_MD15                 GPIO_CTL1_MD15_Msk                    /*!< MD15[1:0] bits (Port mode bits, pin 15) */
#define GPIO_CTL1_MD15_0               (0x1UL << GPIO_CTL1_MD15_Pos)         /*!< 0x10000000 */
#define GPIO_CTL1_MD15_1               (0x2UL << GPIO_CTL1_MD15_Pos)         /*!< 0x20000000 */

#define GPIO_CTL1_CTL_Pos              (2U)
#define GPIO_CTL1_CTL_Msk              (0x33333333UL << GPIO_CTL1_CTL_Pos)   /*!< 0xCCCCCCCC */
#define GPIO_CTL1_CTL                  GPIO_CTL1_CTL_Msk                     /*!< Port configuration bits */

#define GPIO_CTL1_CTL8_Pos             (2U)
#define GPIO_CTL1_CTL8_Msk             (0x3UL << GPIO_CTL1_CTL8_Pos)         /*!< 0x0000000C */
#define GPIO_CTL1_CTL8                 GPIO_CTL1_CTL8_Msk                    /*!< CTL8[1:0] bits (Port configuration bits, pin 8) */
#define GPIO_CTL1_CTL8_0               (0x1UL << GPIO_CTL1_CTL8_Pos)         /*!< 0x00000004 */
#define GPIO_CTL1_CTL8_1               (0x2UL << GPIO_CTL1_CTL8_Pos)         /*!< 0x00000008 */

#define GPIO_CTL1_CTL9_Pos             (6U)
#define GPIO_CTL1_CTL9_Msk             (0x3UL << GPIO_CTL1_CTL9_Pos)         /*!< 0x000000C0 */
#define GPIO_CTL1_CTL9                 GPIO_CTL1_CTL9_Msk                    /*!< CTL9[1:0] bits (Port configuration bits, pin 9) */
#define GPIO_CTL1_CTL9_0               (0x1UL << GPIO_CTL1_CTL9_Pos)         /*!< 0x00000040 */
#define GPIO_CTL1_CTL9_1               (0x2UL << GPIO_CTL1_CTL9_Pos)         /*!< 0x00000080 */

#define GPIO_CTL1_CTL10_Pos            (10U)
#define GPIO_CTL1_CTL10_Msk            (0x3UL << GPIO_CTL1_CTL10_Pos)        /*!< 0x00000C00 */
#define GPIO_CTL1_CTL10                GPIO_CTL1_CTL10_Msk                   /*!< CTL10[1:0] bits (Port configuration bits, pin 10) */
#define GPIO_CTL1_CTL10_0              (0x1UL << GPIO_CTL1_CTL10_Pos)        /*!< 0x00000400 */
#define GPIO_CTL1_CTL10_1              (0x2UL << GPIO_CTL1_CTL10_Pos)        /*!< 0x00000800 */

#define GPIO_CTL1_CTL11_Pos            (14U)
#define GPIO_CTL1_CTL11_Msk            (0x3UL << GPIO_CTL1_CTL11_Pos)        /*!< 0x0000C000 */
#define GPIO_CTL1_CTL11                GPIO_CTL1_CTL11_Msk                   /*!< CTL11[1:0] bits (Port configuration bits, pin 11) */
#define GPIO_CTL1_CTL11_0              (0x1UL << GPIO_CTL1_CTL11_Pos)        /*!< 0x00004000 */
#define GPIO_CTL1_CTL11_1              (0x2UL << GPIO_CTL1_CTL11_Pos)        /*!< 0x00008000 */

#define GPIO_CTL1_CTL12_Pos            (18U)
#define GPIO_CTL1_CTL12_Msk            (0x3UL << GPIO_CTL1_CTL12_Pos)        /*!< 0x000C0000 */
#define GPIO_CTL1_CTL12                GPIO_CTL1_CTL12_Msk                   /*!< CTL12[1:0] bits (Port configuration bits, pin 12) */
#define GPIO_CTL1_CTL12_0              (0x1UL << GPIO_CTL1_CTL12_Pos)        /*!< 0x00040000 */
#define GPIO_CTL1_CTL12_1              (0x2UL << GPIO_CTL1_CTL12_Pos)        /*!< 0x00080000 */

#define GPIO_CTL1_CTL13_Pos            (22U)
#define GPIO_CTL1_CTL13_Msk            (0x3UL << GPIO_CTL1_CTL13_Pos)        /*!< 0x00C00000 */
#define GPIO_CTL1_CTL13                GPIO_CTL1_CTL13_Msk                   /*!< CTL13[1:0] bits (Port configuration bits, pin 13) */
#define GPIO_CTL1_CTL13_0              (0x1UL << GPIO_CTL1_CTL13_Pos)        /*!< 0x00400000 */
#define GPIO_CTL1_CTL13_1              (0x2UL << GPIO_CTL1_CTL13_Pos)        /*!< 0x00800000 */

#define GPIO_CTL1_CTL14_Pos            (26U)
#define GPIO_CTL1_CTL14_Msk            (0x3UL << GPIO_CTL1_CTL14_Pos)        /*!< 0x0C000000 */
#define GPIO_CTL1_CTL14                GPIO_CTL1_CTL14_Msk                   /*!< CTL14[1:0] bits (Port configuration bits, pin 14) */
#define GPIO_CTL1_CTL14_0              (0x1UL << GPIO_CTL1_CTL14_Pos)        /*!< 0x04000000 */
#define GPIO_CTL1_CTL14_1              (0x2UL << GPIO_CTL1_CTL14_Pos)        /*!< 0x08000000 */

#define GPIO_CTL1_CTL15_Pos            (30U)
#define GPIO_CTL1_CTL15_Msk            (0x3UL << GPIO_CTL1_CTL15_Pos)        /*!< 0xC0000000 */
#define GPIO_CTL1_CTL15                GPIO_CTL1_CTL15_Msk                   /*!< CTL15[1:0] bits (Port configuration bits, pin 15) */
#define GPIO_CTL1_CTL15_0              (0x1UL << GPIO_CTL1_CTL15_Pos)        /*!< 0x40000000 */
#define GPIO_CTL1_CTL15_1              (0x2UL << GPIO_CTL1_CTL15_Pos)        /*!< 0x80000000 */

/* GPIO_ISTAT */
#define GPIO_ISTAT_ISTAT0_Pos          (0U)
#define GPIO_ISTAT_ISTAT0_Msk          (0x1UL << GPIO_ISTAT_ISTAT0_Pos)      /*!< 0x00000001 */
#define GPIO_ISTAT_ISTAT0              GPIO_ISTAT_ISTAT0_Msk                 /*!< Port input status, pin 0 */
#define GPIO_ISTAT_ISTAT1_Pos          (1U)
#define GPIO_ISTAT_ISTAT1_Msk          (0x1UL << GPIO_ISTAT_ISTAT1_Pos)      /*!< 0x00000002 */
#define GPIO_ISTAT_ISTAT1              GPIO_ISTAT_ISTAT1_Msk                 /*!< Port input status, pin 1 */
#define GPIO_ISTAT_ISTAT2_Pos          (2U)
#define GPIO_ISTAT_ISTAT2_Msk          (0x1UL << GPIO_ISTAT_ISTAT2_Pos)      /*!< 0x00000004 */
#define GPIO_ISTAT_ISTAT2              GPIO_ISTAT_ISTAT2_Msk                 /*!< Port input status, pin 2 */
#define GPIO_ISTAT_ISTAT3_Pos          (3U)
#define GPIO_ISTAT_ISTAT3_Msk          (0x1UL << GPIO_ISTAT_ISTAT3_Pos)      /*!< 0x00000008 */
#define GPIO_ISTAT_ISTAT3              GPIO_ISTAT_ISTAT3_Msk                 /*!< Port input status, pin 3 */
#define GPIO_ISTAT_ISTAT4_Pos          (4U)
#define GPIO_ISTAT_ISTAT4_Msk          (0x1UL << GPIO_ISTAT_ISTAT4_Pos)      /*!< 0x00000010 */
#define GPIO_ISTAT_ISTAT4              GPIO_ISTAT_ISTAT4_Msk                 /*!< Port input status, pin 4 */
#define GPIO_ISTAT_ISTAT5_Pos          (5U)
#define GPIO_ISTAT_ISTAT5_Msk          (0x1UL << GPIO_ISTAT_ISTAT5_Pos)      /*!< 0x00000020 */
#define GPIO_ISTAT_ISTAT5              GPIO_ISTAT_ISTAT5_Msk                 /*!< Port input status, pin 5 */
#define GPIO_ISTAT_ISTAT6_Pos          (6U)
#define GPIO_ISTAT_ISTAT6_Msk          (0x1UL << GPIO_ISTAT_ISTAT6_Pos)      /*!< 0x00000040 */
#define GPIO_ISTAT_ISTAT6              GPIO_ISTAT_ISTAT6_Msk                 /*!< Port input status, pin 6 */
#define GPIO_ISTAT_ISTAT7_Pos          (7U)
#define GPIO_ISTAT_ISTAT7_Msk          (0x1UL << GPIO_ISTAT_ISTAT7_Pos)      /*!< 0x00000080 */
#define GPIO_ISTAT_ISTAT7              GPIO_ISTAT_ISTAT7_Msk                 /*!< Port input status, pin 7 */
#define GPIO_ISTAT_ISTAT8_Pos          (8U)
#define GPIO_ISTAT_ISTAT8_Msk          (0x1UL << GPIO_ISTAT_ISTAT8_Pos)      /*!< 0x00000100 */
#define GPIO_ISTAT_ISTAT8              GPIO_ISTAT_ISTAT8_Msk                 /*!< Port input status, pin 8 */
#define GPIO_ISTAT_ISTAT9_Pos          (9U)
#define GPIO_ISTAT_ISTAT9_Msk          (0x1UL << GPIO_ISTAT_ISTAT9_Pos)      /*!< 0x00000200 */
#define GPIO_ISTAT_ISTAT9              GPIO_ISTAT_ISTAT9_Msk                 /*!< Port input status, pin 9 */
#define GPIO_ISTAT_ISTAT10_Pos         (10U)
#define GPIO_ISTAT_ISTAT10_Msk         (0x1UL << GPIO_ISTAT_ISTAT10_Pos)     /*!< 0x00000400 */
#define GPIO_ISTAT_ISTAT10             GPIO_ISTAT_ISTAT10_Msk                /*!< Port input status, pin 10 */
#define GPIO_ISTAT_ISTAT11_Pos         (11U)
#define GPIO_ISTAT_ISTAT11_Msk         (0x1UL << GPIO_ISTAT_ISTAT11_Pos)     /*!< 0x00000800 */
#define GPIO_ISTAT_ISTAT11             GPIO_ISTAT_ISTAT11_Msk                /*!< Port input status, pin 11 */
#define GPIO_ISTAT_ISTAT12_Pos         (12U)
#define GPIO_ISTAT_ISTAT12_Msk         (0x1UL << GPIO_ISTAT_ISTAT12_Pos)     /*!< 0x00001000 */
#define GPIO_ISTAT_ISTAT12             GPIO_ISTAT_ISTAT12_Msk                /*!< Port input status, pin 12 */
#define GPIO_ISTAT_ISTAT13_Pos         (13U)
#define GPIO_ISTAT_ISTAT13_Msk         (0x1UL << GPIO_ISTAT_ISTAT13_Pos)     /*!< 0x00002000 */
#define GPIO_ISTAT_ISTAT13             GPIO_ISTAT_ISTAT13_Msk                /*!< Port input status, pin 13 */
#define GPIO_ISTAT_ISTAT14_Pos         (14U)
#define GPIO_ISTAT_ISTAT14_Msk         (0x1UL << GPIO_ISTAT_ISTAT14_Pos)     /*!< 0x00004000 */
#define GPIO_ISTAT_ISTAT14             GPIO_ISTAT_ISTAT14_Msk                /*!< Port input status, pin 14 */
#define GPIO_ISTAT_ISTAT15_Pos         (15U)
#define GPIO_ISTAT_ISTAT15_Msk         (0x1UL << GPIO_ISTAT_ISTAT15_Pos)     /*!< 0x00008000 */
#define GPIO_ISTAT_ISTAT15             GPIO_ISTAT_ISTAT15_Msk                /*!< Port input status, pin 15 */

/* GPIO_OCTL */
#define GPIO_OCTL_OCTL0_Pos            (0U)
#define GPIO_OCTL_OCTL0_Msk            (0x1UL << GPIO_OCTL_OCTL0_Pos)        /*!< 0x00000001 */
#define GPIO_OCTL_OCTL0                GPIO_OCTL_OCTL0_Msk                   /*!< Port output control, pin 0 */
#define GPIO_OCTL_OCTL1_Pos            (1U)
#define GPIO_OCTL_OCTL1_Msk            (0x1UL << GPIO_OCTL_OCTL1_Pos)        /*!< 0x00000002 */
#define GPIO_OCTL_OCTL1                GPIO_OCTL_OCTL1_Msk                   /*!< Port output control, pin 1 */
#define GPIO_OCTL_OCTL2_Pos            (2U)
#define GPIO_OCTL_OCTL2_Msk            (0x1UL << GPIO_OCTL_OCTL2_Pos)        /*!< 0x00000004 */
#define GPIO_OCTL_OCTL2                GPIO_OCTL_OCTL2_Msk                   /*!< Port output control, pin 2 */
#define GPIO_OCTL_OCTL3_Pos            (3U)
#define GPIO_OCTL_OCTL3_Msk            (0x1UL << GPIO_OCTL_OCTL3_Pos)        /*!< 0x00000008 */
#define GPIO_OCTL_OCTL3                GPIO_OCTL_OCTL3_Msk                   /*!< Port output control, pin 3 */
#define GPIO_OCTL_OCTL4_Pos            (4U)
#define GPIO_OCTL_OCTL4_Msk            (0x1UL << GPIO_OCTL_OCTL4_Pos)        /*!< 0x00000010 */
#define GPIO_OCTL_OCTL4                GPIO_OCTL_OCTL4_Msk                   /*!< Port output control, pin 4 */
#define GPIO_OCTL_OCTL5_Pos            (5U)
#define GPIO_OCTL_OCTL5_Msk            (0x1UL << GPIO_OCTL_OCTL5_Pos)        /*!< 0x00000020 */
#define GPIO_OCTL_OCTL5                GPIO_OCTL_OCTL5_Msk                   /*!< Port output control, pin 5 */
#define GPIO_OCTL_OCTL6_Pos            (6U)
#define GPIO_OCTL_OCTL6_Msk            (0x1UL << GPIO_OCTL_OCTL6_Pos)        /*!< 0x00000040 */
#define GPIO_OCTL_OCTL6                GPIO_OCTL_OCTL6_Msk                   /*!< Port output control, pin 6 */
#define GPIO_OCTL_OCTL7_Pos            (7U)
#define GPIO_OCTL_OCTL7_Msk            (0x1UL << GPIO_OCTL_OCTL7_Pos)        /*!< 0x00000080 */
#define GPIO_OCTL_OCTL7                GPIO_OCTL_OCTL7_Msk                   /*!< Port output control, pin 7 */
#define GPIO_OCTL_OCTL8_Pos            (8U)
#define GPIO_OCTL_OCTL8_Msk            (0x1UL << GPIO_OCTL_OCTL8_Pos)        /*!< 0x00000100 */
#define GPIO_OCTL_OCTL8                GPIO_OCTL_OCTL8_Msk                   /*!< Port output control, pin 8 */
#define GPIO_OCTL_OCTL9_Pos            (9U)
#define GPIO_OCTL_OCTL9_Msk            (0x1UL << GPIO_OCTL_OCTL9_Pos)        /*!< 0x00000200 */
#define GPIO_OCTL_OCTL9                GPIO_OCTL_OCTL9_Msk                   /*!< Port output control, pin 9 */
#define GPIO_OCTL_OCTL10_Pos           (10U)
#define GPIO_OCTL_OCTL10_Msk           (0x1UL << GPIO_OCTL_OCTL10_Pos)       /*!< 0x00000400 */
#define GPIO_OCTL_OCTL10               GPIO_OCTL_OCTL10_Msk                  /*!< Port output control, pin 10 */
#define GPIO_OCTL_OCTL11_Pos           (11U)
#define GPIO_OCTL_OCTL11_Msk           (0x1UL << GPIO_OCTL_OCTL11_Pos)       /*!< 0x00000800 */
#define GPIO_OCTL_OCTL11               GPIO_OCTL_OCTL11_Msk                  /*!< Port output control, pin 11 */
#define GPIO_OCTL_OCTL12_Pos           (12U)
#define GPIO_OCTL_OCTL12_Msk           (0x1UL << GPIO_OCTL_OCTL12_Pos)       /*!< 0x00001000 */
#define GPIO_OCTL_OCTL12               GPIO_OCTL_OCTL12_Msk                  /*!< Port output control, pin 12 */
#define GPIO_OCTL_OCTL13_Pos           (13U)
#define GPIO_OCTL_OCTL13_Msk           (0x1UL << GPIO_OCTL_OCTL13_Pos)       /*!< 0x00002000 */
#define GPIO_OCTL_OCTL13               GPIO_OCTL_OCTL13_Msk                  /*!< Port output control, pin 13 */
#define GPIO_OCTL_OCTL14_Pos           (14U)
#define GPIO_OCTL_OCTL14_Msk           (0x1UL << GPIO_OCTL_OCTL14_Pos)       /*!< 0x00004000 */
#define GPIO_OCTL_OCTL14               GPIO_OCTL_OCTL14_Msk                  /*!< Port output control, pin 14 */
#define GPIO_OCTL_OCTL15_Pos           (15U)
#define GPIO_OCTL_OCTL15_Msk           (0x1UL << GPIO_OCTL_OCTL15_Pos)       /*!< 0x00008000 */
#define GPIO_OCTL_OCTL15               GPIO_OCTL_OCTL15_Msk                  /*!< Port output control, pin 15 */

/* GPIO_BOP */
#define GPIO_BOP_BOP0_Pos              (0U)
#define GPIO_BOP_BOP0_Msk              (0x1UL << GPIO_BOP_BOP0_Pos)          /*!< 0x00000001 */
#define GPIO_BOP_BOP0                  GPIO_BOP_BOP0_Msk                     /*!< Port set, pin 0 */
#define GPIO_BOP_BOP1_Pos              (1U)
#define GPIO_BOP_BOP1_Msk              (0x1UL << GPIO_BOP_BOP1_Pos)          /*!< 0x00000002 */
#define GPIO_BOP_BOP1                  GPIO_BOP_BOP1_Msk                     /*!< Port set, pin 1 */
#define GPIO_BOP_BOP2_Pos              (2U)
#define GPIO_BOP_BOP2_Msk              (0x1UL << GPIO_BOP_BOP2_Pos)          /*!< 0x00000004 */
#define GPIO_BOP_BOP2                  GPIO_BOP_BOP2_Msk                     /*!< Port set, pin 2 */
#define GPIO_BOP_BOP3_Pos              (3U)
#define GPIO_BOP_BOP3_Msk              (0x1UL << GPIO_BOP_BOP3_Pos)          /*!< 0x00000008 */
#define GPIO_BOP_BOP3                  GPIO_BOP_BOP3_Msk                     /*!< Port set, pin 3 */
#define GPIO_BOP_BOP4_Pos              (4U)
#define GPIO_BOP_BOP4_Msk              (0x1UL << GPIO_BOP_BOP4_Pos)          /*!< 0x00000010 */
#define GPIO_BOP_BOP4                  GPIO_BOP_BOP4_Msk                     /*!< Port set, pin 4 */
#define GPIO_BOP_BOP5_Pos              (5U)
#define GPIO_BOP_BOP5_Msk              (0x1UL << GPIO_BOP_BOP5_Pos)          /*!< 0x00000020 */
#define GPIO_BOP_BOP5                  GPIO_BOP_BOP5_Msk                     /*!< Port set, pin 5 */
#define GPIO_BOP_BOP6_Pos              (6U)
#define GPIO_BOP_BOP6_Msk              (0x1UL << GPIO_BOP_BOP6_Pos)          /*!< 0x00000040 */
#define GPIO_BOP_BOP6                  GPIO_BOP_BOP6_Msk                     /*!< Port set, pin 6 */
#define GPIO_BOP_BOP7_Pos              (7U)
#define GPIO_BOP_BOP7_Msk              (0x1UL << GPIO_BOP_BOP7_Pos)          /*!< 0x00000080 */
#define GPIO_BOP_BOP7                  GPIO_BOP_BOP7_Msk                     /*!< Port set, pin 7 */
#define GPIO_BOP_BOP8_Pos              (8U)
#define GPIO_BOP_BOP8_Msk              (0x1UL << GPIO_BOP_BOP8_Pos)          /*!< 0x00000100 */
#define GPIO_BOP_BOP8                  GPIO_BOP_BOP8_Msk                     /*!< Port set, pin 8 */
#define GPIO_BOP_BOP9_Pos              (9U)
#define GPIO_BOP_BOP9_Msk              (0x1UL << GPIO_BOP_BOP9_Pos)          /*!< 0x00000200 */
#define GPIO_BOP_BOP9                  GPIO_BOP_BOP9_Msk                     /*!< Port set, pin 9 */
#define GPIO_BOP_BOP10_Pos             (10U)
#define GPIO_BOP_BOP10_Msk             (0x1UL << GPIO_BOP_BOP10_Pos)         /*!< 0x00000400 */
#define GPIO_BOP_BOP10                 GPIO_BOP_BOP10_Msk                    /*!< Port set, pin 10 */
#define GPIO_BOP_BOP11_Pos             (11U)
#define GPIO_BOP_BOP11_Msk             (0x1UL << GPIO_BOP_BOP11_Pos)         /*!< 0x00000800 */
#define GPIO_BOP_BOP11                 GPIO_BOP_BOP11_Msk                    /*!< Port set, pin 11 */
#define GPIO_BOP_BOP12_Pos             (12U)
#define GPIO_BOP_BOP12_Msk             (0x1UL << GPIO_BOP_BOP12_Pos)         /*!< 0x00001000 */
#define GPIO_BOP_BOP12                 GPIO_BOP_BOP12_Msk                    /*!< Port set, pin 12 */
#define GPIO_BOP_BOP13_Pos             (13U)
#define GPIO_BOP_BOP13_Msk             (0x1UL << GPIO_BOP_BOP13_Pos)         /*!< 0x00002000 */
#define GPIO_BOP_BOP13                 GPIO_BOP_BOP13_Msk                    /*!< Port set, pin 13 */
#define GPIO_BOP_BOP14_Pos             (14U)
#define GPIO_BOP_BOP14_Msk             (0x1UL << GPIO_BOP_BOP14_Pos)         /*!< 0x00004000 */
#define GPIO_BOP_BOP14                 GPIO_BOP_BOP14_Msk                    /*!< Port set, pin 14 */
#define GPIO_BOP_BOP15_Pos             (15U)
#define GPIO_BOP_BOP15_Msk             (0x1UL << GPIO_BOP_BOP15_Pos)         /*!< 0x00008000 */
#define GPIO_BOP_BOP15                 GPIO_BOP_BOP15_Msk                    /*!< Port set, pin 15 */

#define GPIO_BOP_CR0_Pos               (16U)
#define GPIO_BOP_CR0_Msk               (0x1UL << GPIO_BOP_CR0_Pos)           /*!< 0x00010000 */
#define GPIO_BOP_CR0                   GPIO_BOP_CR0_Msk                      /*!< Port clear, pin 0 */
#define GPIO_BOP_CR1_Pos               (17U)
#define GPIO_BOP_CR1_Msk               (0x1UL << GPIO_BOP_CR1_Pos)           /*!< 0x00020000 */
#define GPIO_BOP_CR1                   GPIO_BOP_CR1_Msk                      /*!< Port clear, pin 1 */
#define GPIO_BOP_CR2_Pos               (18U)
#define GPIO_BOP_CR2_Msk               (0x1UL << GPIO_BOP_CR2_Pos)           /*!< 0x00040000 */
#define GPIO_BOP_CR2                   GPIO_BOP_CR2_Msk                      /*!< Port clear, pin 2 */
#define GPIO_BOP_CR3_Pos               (19U)
#define GPIO_BOP_CR3_Msk               (0x1UL << GPIO_BOP_CR3_Pos)           /*!< 0x00080000 */
#define GPIO_BOP_CR3                   GPIO_BOP_CR3_Msk                      /*!< Port clear, pin 3 */
#define GPIO_BOP_CR4_Pos               (20U)
#define GPIO_BOP_CR4_Msk               (0x1UL << GPIO_BOP_CR4_Pos)           /*!< 0x00100000 */
#define GPIO_BOP_CR4                   GPIO_BOP_CR4_Msk                      /*!< Port clear, pin 4 */
#define GPIO_BOP_CR5_Pos               (21U)
#define GPIO_BOP_CR5_Msk               (0x1UL << GPIO_BOP_CR5_Pos)           /*!< 0x00200000 */
#define GPIO_BOP_CR5                   GPIO_BOP_CR5_Msk                      /*!< Port clear, pin 5 */
#define GPIO_BOP_CR6_Pos               (22U)
#define GPIO_BOP_CR6_Msk               (0x1UL << GPIO_BOP_CR6_Pos)           /*!< 0x00400000 */
#define GPIO_BOP_CR6                   GPIO_BOP_CR6_Msk                      /*!< Port clear, pin 6 */
#define GPIO_BOP_CR7_Pos               (23U)
#define GPIO_BOP_CR7_Msk               (0x1UL << GPIO_BOP_CR7_Pos)           /*!< 0x00800000 */
#define GPIO_BOP_CR7                   GPIO_BOP_CR7_Msk                      /*!< Port clear, pin 7 */
#define GPIO_BOP_CR8_Pos               (24U)
#define GPIO_BOP_CR8_Msk               (0x1UL << GPIO_BOP_CR8_Pos)           /*!< 0x01000000 */
#define GPIO_BOP_CR8                   GPIO_BOP_CR8_Msk                      /*!< Port clear, pin 8 */
#define GPIO_BOP_CR9_Pos               (25U)
#define GPIO_BOP_CR9_Msk               (0x1UL << GPIO_BOP_CR9_Pos)           /*!< 0x02000000 */
#define GPIO_BOP_CR9                   GPIO_BOP_CR9_Msk                      /*!< Port clear, pin 9 */
#define GPIO_BOP_CR10_Pos              (26U)
#define GPIO_BOP_CR10_Msk              (0x1UL << GPIO_BOP_CR10_Pos)          /*!< 0x04000000 */
#define GPIO_BOP_CR10                  GPIO_BOP_CR10_Msk                     /*!< Port clear, pin 10 */
#define GPIO_BOP_CR11_Pos              (27U)
#define GPIO_BOP_CR11_Msk              (0x1UL << GPIO_BOP_CR11_Pos)          /*!< 0x08000000 */
#define GPIO_BOP_CR11                  GPIO_BOP_CR11_Msk                     /*!< Port clear, pin 11 */
#define GPIO_BOP_CR12_Pos              (28U)
#define GPIO_BOP_CR12_Msk              (0x1UL << GPIO_BOP_CR12_Pos)          /*!< 0x10000000 */
#define GPIO_BOP_CR12                  GPIO_BOP_CR12_Msk                     /*!< Port clear, pin 12 */
#define GPIO_BOP_CR13_Pos              (29U)
#define GPIO_BOP_CR13_Msk              (0x1UL << GPIO_BOP_CR13_Pos)          /*!< 0x20000000 */
#define GPIO_BOP_CR13                  GPIO_BOP_CR13_Msk                     /*!< Port clear, pin 13 */
#define GPIO_BOP_CR14_Pos              (30U)
#define GPIO_BOP_CR14_Msk              (0x1UL << GPIO_BOP_CR14_Pos)          /*!< 0x40000000 */
#define GPIO_BOP_CR14                  GPIO_BOP_CR14_Msk                     /*!< Port clear, pin 14 */
#define GPIO_BOP_CR15_Pos              (31U)
#define GPIO_BOP_CR15_Msk              (0x1UL << GPIO_BOP_CR15_Pos)          /*!< 0x80000000 */
#define GPIO_BOP_CR15                  GPIO_BOP_CR15_Msk                     /*!< Port clear, pin 15 */

/* GPIO_BC */
#define GPIO_BC_CR0_Pos                (0U)
#define GPIO_BC_CR0_Msk                (0x1UL << GPIO_BC_CR0_Pos)            /*!< 0x00000001 */
#define GPIO_BC_CR0                    GPIO_BC_CR0_Msk                       /*!< Port clear, pin 0 */
#define GPIO_BC_CR1_Pos                (1U)
#define GPIO_BC_CR1_Msk                (0x1UL << GPIO_BC_CR1_Pos)            /*!< 0x00000002 */
#define GPIO_BC_CR1                    GPIO_BC_CR1_Msk                       /*!< Port clear, pin 1 */
#define GPIO_BC_CR2_Pos                (2U)
#define GPIO_BC_CR2_Msk                (0x1UL << GPIO_BC_CR2_Pos)            /*!< 0x00000004 */
#define GPIO_BC_CR2                    GPIO_BC_CR2_Msk                       /*!< Port clear, pin 2 */
#define GPIO_BC_CR3_Pos                (3U)
#define GPIO_BC_CR3_Msk                (0x1UL << GPIO_BC_CR3_Pos)            /*!< 0x00000008 */
#define GPIO_BC_CR3                    GPIO_BC_CR3_Msk                       /*!< Port clear, pin 3 */
#define GPIO_BC_CR4_Pos                (4U)
#define GPIO_BC_CR4_Msk                (0x1UL << GPIO_BC_CR4_Pos)            /*!< 0x00000010 */
#define GPIO_BC_CR4                    GPIO_BC_CR4_Msk                       /*!< Port clear, pin 4 */
#define GPIO_BC_CR5_Pos                (5U)
#define GPIO_BC_CR5_Msk                (0x1UL << GPIO_BC_CR5_Pos)            /*!< 0x00000020 */
#define GPIO_BC_CR5                    GPIO_BC_CR5_Msk                       /*!< Port clear, pin 5 */
#define GPIO_BC_CR6_Pos                (6U)
#define GPIO_BC_CR6_Msk                (0x1UL << GPIO_BC_CR6_Pos)            /*!< 0x00000040 */
#define GPIO_BC_CR6                    GPIO_BC_CR6_Msk                       /*!< Port clear, pin 6 */
#define GPIO_BC_CR7_Pos                (7U)
#define GPIO_BC_CR7_Msk                (0x1UL << GPIO_BC_CR7_Pos)            /*!< 0x00000080 */
#define GPIO_BC_CR7                    GPIO_BC_CR7_Msk                       /*!< Port clear, pin 7 */
#define GPIO_BC_CR8_Pos                (8U)
#define GPIO_BC_CR8_Msk                (0x1UL << GPIO_BC_CR8_Pos)            /*!< 0x00000100 */
#define GPIO_BC_CR8                    GPIO_BC_CR8_Msk                       /*!< Port clear, pin 8 */
#define GPIO_BC_CR9_Pos                (9U)
#define GPIO_BC_CR9_Msk                (0x1UL << GPIO_BC_CR9_Pos)            /*!< 0x00000200 */
#define GPIO_BC_CR9                    GPIO_BC_CR9_Msk                       /*!< Port clear, pin 9 */
#define GPIO_BC_CR10_Pos               (10U)
#define GPIO_BC_CR10_Msk               (0x1UL << GPIO_BC_CR10_Pos)           /*!< 0x00000400 */
#define GPIO_BC_CR10                   GPIO_BC_CR10_Msk                      /*!< Port clear, pin 10 */
#define GPIO_BC_CR11_Pos               (11U)
#define GPIO_BC_CR11_Msk               (0x1UL << GPIO_BC_CR11_Pos)           /*!< 0x00000800 */
#define GPIO_BC_CR11                   GPIO_BC_CR11_Msk                      /*!< Port clear, pin 11 */
#define GPIO_BC_CR12_Pos               (12U)
#define GPIO_BC_CR12_Msk               (0x1UL << GPIO_BC_CR12_Pos)           /*!< 0x00001000 */
#define GPIO_BC_CR12                   GPIO_BC_CR12_Msk                      /*!< Port clear, pin 12 */
#define GPIO_BC_CR13_Pos               (13U)
#define GPIO_BC_CR13_Msk               (0x1UL << GPIO_BC_CR13_Pos)           /*!< 0x00002000 */
#define GPIO_BC_CR13                   GPIO_BC_CR13_Msk                      /*!< Port clear, pin 13 */
#define GPIO_BC_CR14_Pos               (14U)
#define GPIO_BC_CR14_Msk               (0x1UL << GPIO_BC_CR14_Pos)           /*!< 0x00004000 */
#define GPIO_BC_CR14                   GPIO_BC_CR14_Msk                      /*!< Port clear, pin 14 */
#define GPIO_BC_CR15_Pos               (15U)
#define GPIO_BC_CR15_Msk               (0x1UL << GPIO_BC_CR15_Pos)           /*!< 0x00008000 */
#define GPIO_BC_CR15                   GPIO_BC_CR15_Msk                      /*!< Port clear, pin 15 */

/* GPIO_LOCK */
#define GPIO_LOCK_LK0_Pos              (0U)
#define GPIO_LOCK_LK0_Msk              (0x1UL << GPIO_LOCK_LK0_Pos)          /*!< 0x00000001 */
#define GPIO_LOCK_LK0                  GPIO_LOCK_LK0_Msk                     /*!< Port lock, pin 0 */
#define GPIO_LOCK_LK1_Pos              (1U)
#define GPIO_LOCK_LK1_Msk              (0x1UL << GPIO_LOCK_LK1_Pos)          /*!< 0x00000002 */
#define GPIO_LOCK_LK1                  GPIO_LOCK_LK1_Msk                     /*!< Port lock, pin 1 */
#define GPIO_LOCK_LK2_Pos              (2U)
#define GPIO_LOCK_LK2_Msk              (0x1UL << GPIO_LOCK_LK2_Pos)          /*!< 0x00000004 */
#define GPIO_LOCK_LK2                  GPIO_LOCK_LK2_Msk                     /*!< Port lock, pin 2 */
#define GPIO_LOCK_LK3_Pos              (3U)
#define GPIO_LOCK_LK3_Msk              (0x1UL << GPIO_LOCK_LK3_Pos)          /*!< 0x00000008 */
#define GPIO_LOCK_LK3                  GPIO_LOCK_LK3_Msk                     /*!< Port lock, pin 3 */
#define GPIO_LOCK_LK4_Pos              (4U)
#define GPIO_LOCK_LK4_Msk              (0x1UL << GPIO_LOCK_LK4_Pos)          /*!< 0x00000010 */
#define GPIO_LOCK_LK4                  GPIO_LOCK_LK4_Msk                     /*!< Port lock, pin 4 */
#define GPIO_LOCK_LK5_Pos              (5U)
#define GPIO_LOCK_LK5_Msk              (0x1UL << GPIO_LOCK_LK5_Pos)          /*!< 0x00000020 */
#define GPIO_LOCK_LK5                  GPIO_LOCK_LK5_Msk                     /*!< Port lock, pin 5 */
#define GPIO_LOCK_LK6_Pos              (6U)
#define GPIO_LOCK_LK6_Msk              (0x1UL << GPIO_LOCK_LK6_Pos)          /*!< 0x00000040 */
#define GPIO_LOCK_LK6                  GPIO_LOCK_LK6_Msk                     /*!< Port lock, pin 6 */
#define GPIO_LOCK_LK7_Pos              (7U)
#define GPIO_LOCK_LK7_Msk              (0x1UL << GPIO_LOCK_LK7_Pos)          /*!< 0x00000080 */
#define GPIO_LOCK_LK7                  GPIO_LOCK_LK7_Msk                     /*!< Port lock, pin 7 */
#define GPIO_LOCK_LK8_Pos              (8U)
#define GPIO_LOCK_LK8_Msk              (0x1UL << GPIO_LOCK_LK8_Pos)          /*!< 0x00000100 */
#define GPIO_LOCK_LK8                  GPIO_LOCK_LK8_Msk                     /*!< Port lock, pin 8 */
#define GPIO_LOCK_LK9_Pos              (9U)
#define GPIO_LOCK_LK9_Msk              (0x1UL << GPIO_LOCK_LK9_Pos)          /*!< 0x00000200 */
#define GPIO_LOCK_LK9                  GPIO_LOCK_LK9_Msk                     /*!< Port lock, pin 9 */
#define GPIO_LOCK_LK10_Pos             (10U)
#define GPIO_LOCK_LK10_Msk             (0x1UL << GPIO_LOCK_LK10_Pos)         /*!< 0x00000400 */
#define GPIO_LOCK_LK10                 GPIO_LOCK_LK10_Msk                    /*!< Port lock, pin 10 */
#define GPIO_LOCK_LK11_Pos             (11U)
#define GPIO_LOCK_LK11_Msk             (0x1UL << GPIO_LOCK_LK11_Pos)         /*!< 0x00000800 */
#define GPIO_LOCK_LK11                 GPIO_LOCK_LK11_Msk                    /*!< Port lock, pin 11 */
#define GPIO_LOCK_LK12_Pos             (12U)
#define GPIO_LOCK_LK12_Msk             (0x1UL << GPIO_LOCK_LK12_Pos)         /*!< 0x00001000 */
#define GPIO_LOCK_LK12                 GPIO_LOCK_LK12_Msk                    /*!< Port lock, pin 12 */
#define GPIO_LOCK_LK13_Pos             (13U)
#define GPIO_LOCK_LK13_Msk             (0x1UL << GPIO_LOCK_LK13_Pos)         /*!< 0x00002000 */
#define GPIO_LOCK_LK13                 GPIO_LOCK_LK13_Msk                    /*!< Port lock, pin 13 */
#define GPIO_LOCK_LK14_Pos             (14U)
#define GPIO_LOCK_LK14_Msk             (0x1UL << GPIO_LOCK_LK14_Pos)         /*!< 0x00004000 */
#define GPIO_LOCK_LK14                 GPIO_LOCK_LK14_Msk                    /*!< Port lock, pin 14 */
#define GPIO_LOCK_LK15_Pos             (15U)
#define GPIO_LOCK_LK15_Msk             (0x1UL << GPIO_LOCK_LK15_Pos)         /*!< 0x00008000 */
#define GPIO_LOCK_LK15                 GPIO_LOCK_LK15_Msk                    /*!< Port lock, pin 15 */
#define GPIO_LOCK_LKK_Pos              (16U)
#define GPIO_LOCK_LKK_Msk              (0x1UL << GPIO_LOCK_LKK_Pos)          /*!< 0x00010000 */
#define GPIO_LOCK_LKK                  GPIO_LOCK_LKK_Msk                     /*!< Lock sequence key */

/* GPIO_SPD */
#define GPIO_SPD_SPD0_Pos              (0U)
#define GPIO_SPD_SPD0_Msk              (0x1UL << GPIO_SPD_SPD0_Pos)          /*!< 0x00000001 */
#define GPIO_SPD_SPD0                  GPIO_SPD_SPD0_Msk                     /*!< Set very high output speed when MDx is 0b11, pin 0 */
#define GPIO_SPD_SPD1_Pos              (1U)
#define GPIO_SPD_SPD1_Msk              (0x1UL << GPIO_SPD_SPD1_Pos)          /*!< 0x00000002 */
#define GPIO_SPD_SPD1                  GPIO_SPD_SPD1_Msk                     /*!< Set very high output speed when MDx is 0b11, pin 1 */
#define GPIO_SPD_SPD2_Pos              (2U)
#define GPIO_SPD_SPD2_Msk              (0x1UL << GPIO_SPD_SPD2_Pos)          /*!< 0x00000004 */
#define GPIO_SPD_SPD2                  GPIO_SPD_SPD2_Msk                     /*!< Set very high output speed when MDx is 0b11, pin 2 */
#define GPIO_SPD_SPD3_Pos              (3U)
#define GPIO_SPD_SPD3_Msk              (0x1UL << GPIO_SPD_SPD3_Pos)          /*!< 0x00000008 */
#define GPIO_SPD_SPD3                  GPIO_SPD_SPD3_Msk                     /*!< Set very high output speed when MDx is 0b11, pin 3 */
#define GPIO_SPD_SPD4_Pos              (4U)
#define GPIO_SPD_SPD4_Msk              (0x1UL << GPIO_SPD_SPD4_Pos)          /*!< 0x00000010 */
#define GPIO_SPD_SPD4                  GPIO_SPD_SPD4_Msk                     /*!< Set very high output speed when MDx is 0b11, pin 4 */
#define GPIO_SPD_SPD5_Pos              (5U)
#define GPIO_SPD_SPD5_Msk              (0x1UL << GPIO_SPD_SPD5_Pos)          /*!< 0x00000020 */
#define GPIO_SPD_SPD5                  GPIO_SPD_SPD5_Msk                     /*!< Set very high output speed when MDx is 0b11, pin 5 */
#define GPIO_SPD_SPD6_Pos              (6U)
#define GPIO_SPD_SPD6_Msk              (0x1UL << GPIO_SPD_SPD6_Pos)          /*!< 0x00000040 */
#define GPIO_SPD_SPD6                  GPIO_SPD_SPD6_Msk                     /*!< Set very high output speed when MDx is 0b11, pin 6 */
#define GPIO_SPD_SPD7_Pos              (7U)
#define GPIO_SPD_SPD7_Msk              (0x1UL << GPIO_SPD_SPD7_Pos)          /*!< 0x00000080 */
#define GPIO_SPD_SPD7                  GPIO_SPD_SPD7_Msk                     /*!< Set very high output speed when MDx is 0b11, pin 7 */
#define GPIO_SPD_SPD8_Pos              (8U)
#define GPIO_SPD_SPD8_Msk              (0x1UL << GPIO_SPD_SPD8_Pos)          /*!< 0x00000100 */
#define GPIO_SPD_SPD8                  GPIO_SPD_SPD8_Msk                     /*!< Set very high output speed when MDx is 0b11, pin 8 */
#define GPIO_SPD_SPD9_Pos              (9U)
#define GPIO_SPD_SPD9_Msk              (0x1UL << GPIO_SPD_SPD9_Pos)          /*!< 0x00000200 */
#define GPIO_SPD_SPD9                  GPIO_SPD_SPD9_Msk                     /*!< Set very high output speed when MDx is 0b11, pin 9 */
#define GPIO_SPD_SPD10_Pos             (10U)
#define GPIO_SPD_SPD10_Msk             (0x1UL << GPIO_SPD_SPD10_Pos)         /*!< 0x00000400 */
#define GPIO_SPD_SPD10                 GPIO_SPD_SPD10_Msk                    /*!< Set very high output speed when MDx is 0b11, pin 10 */
#define GPIO_SPD_SPD11_Pos             (11U)
#define GPIO_SPD_SPD11_Msk             (0x1UL << GPIO_SPD_SPD11_Pos)         /*!< 0x00000800 */
#define GPIO_SPD_SPD11                 GPIO_SPD_SPD11_Msk                    /*!< Set very high output speed when MDx is 0b11, pin 11 */
#define GPIO_SPD_SPD12_Pos             (12U)
#define GPIO_SPD_SPD12_Msk             (0x1UL << GPIO_SPD_SPD12_Pos)         /*!< 0x00001000 */
#define GPIO_SPD_SPD12                 GPIO_SPD_SPD12_Msk                    /*!< Set very high output speed when MDx is 0b11, pin 12 */
#define GPIO_SPD_SPD13_Pos             (13U)
#define GPIO_SPD_SPD13_Msk             (0x1UL << GPIO_SPD_SPD13_Pos)         /*!< 0x00002000 */
#define GPIO_SPD_SPD13                 GPIO_SPD_SPD13_Msk                    /*!< Set very high output speed when MDx is 0b11, pin 13 */
#define GPIO_SPD_SPD14_Pos             (14U)
#define GPIO_SPD_SPD14_Msk             (0x1UL << GPIO_SPD_SPD14_Pos)         /*!< 0x00004000 */
#define GPIO_SPD_SPD14                 GPIO_SPD_SPD14_Msk                    /*!< Set very high output speed when MDx is 0b11, pin 14 */
#define GPIO_SPD_SPD15_Pos             (15U)
#define GPIO_SPD_SPD15_Msk             (0x1UL << GPIO_SPD_SPD15_Pos)         /*!< 0x00008000 */
#define GPIO_SPD_SPD15                 GPIO_SPD_SPD15_Msk                    /*!< Set very high output speed when MDx is 0b11, pin 15 */

#endif // GD32E10X_GPIO_H_

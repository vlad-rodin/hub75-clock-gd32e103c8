#ifndef BIT_BANDING_H_
#define BIT_BANDING_H_

__attribute__( ( always_inline ) ) static inline void *bit_banding(volatile void *Address, uint32_t BitNumber)
{
	return ((void *)(0x02000000U + ((uint32_t)Address & 0x60000000U) + (uint32_t)Address*32 + BitNumber*4));
}

__attribute__( ( always_inline ) ) static inline void *bit_banding_SRAM(volatile void *Address, uint32_t BitNumber)
{
	return ((void *)(0x22000000U + (uint32_t)Address*32 + BitNumber*4));
}

__attribute__( ( always_inline ) ) static inline void *bit_banding_PERIPHERAL(volatile void *Address, uint32_t BitNumber)
{
	return ((void *)(0x42000000U + (uint32_t)Address*32 + BitNumber*4));
}

__attribute__( ( always_inline ) ) static inline void set_bit(volatile void *Address, uint32_t BitNumber)
{
	*(uint8_t *)bit_banding(Address, BitNumber) = 1;
}

__attribute__( ( always_inline ) ) static inline void clr_bit(volatile void *Address, uint32_t BitNumber)
{
	*(uint8_t *)bit_banding(Address, BitNumber) = 0;
}

#endif // BIT_BANDING_H_

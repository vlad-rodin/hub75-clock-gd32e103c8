#ifndef MACRO_H_
#define MACRO_H_

#include "libraries.h"

#define def2str(s)        def2str_(s)
#define def2str_(s)       #s

#define defcat(...)       defcat_(__VA_ARGS__)
#define defcat_(a,b,...)  a ## b ## __VA_ARGS__

#define arrlen(Array)     (sizeof(Array)/sizeof(Array[0]))

#define max(a,b)        \
({                      \
	typeof(a) _a = (a); \
	typeof(b) _b = (b); \
	_a > _b ? _a : _b;  \
})

#define min(a,b)        \
({                      \
	typeof(a) _a = (a); \
	typeof(b) _b = (b); \
	_a < _b ? _a : _b;  \
})

// Convert nibble to character
static inline char hex2chr(uint8_t Nibble)
{
	return (Nibble >= 0x0A) ? (Nibble + 'A' - 0x0A) : (Nibble + '0');
}

// Convert character to nibble
static inline uint8_t chr2hex(char Character)
{
	return ((Character >= 'A') ? (Character - 'A' + 0x0A) : Character) & 0x0F;
}

// Convert BCD to decimal
static inline uint8_t bcd2dec(uint8_t Value)
{
	return (Value & 0x0F) + 10 * (Value >> 4);
}

#endif // MACRO_H_

#ifndef RGB_H_
#define RGB_H_

#include "libraries.h"

#define ROW_MAX 15
#define CLM_MAX 31

typedef union
{
	struct
	{
		uint8_t B;
		uint8_t G;
		uint8_t R;
	};
	uint32_t U;
} rgb_t;

void rgb_init();
void rgb_free();
void rgb_set_pixel(uint_fast8_t Row, uint_fast8_t Column, uint32_t Color);

#endif // RGB_H_

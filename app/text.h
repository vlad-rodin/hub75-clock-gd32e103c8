#ifndef TEXT_H_
#define TEXT_H_

#include "libraries.h"

typedef struct font_t
{
	const uint8_t *Data;
	uint8_t        Width;
	uint8_t        Height;
	uint8_t        Scale;
} font_t;

extern const font_t regular_3x4_f;
extern const font_t regular_3x5_f;
extern const font_t regular_5x7_f;

void txt_putc(uint_fast8_t  Row,
              uint_fast8_t  Column,
              char          Character,
              const font_t *pFont);
void txt_puts(uint_fast8_t  Row,
              uint_fast8_t  Column,
              const char    String[],
              const font_t *pFont);

#endif // TEXT_H_

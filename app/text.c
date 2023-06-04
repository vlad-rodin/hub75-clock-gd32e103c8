#include "text.h"
#include "index.h"

#define unsigned const unsigned
#include "fonts/regular_3x4.xbm"
#include "fonts/regular_3x5.xbm"
#include "fonts/regular_5x7.xbm"
#undef unsigned

const font_t regular_3x4_f =
{
	.Data   = regular_3x4_bits,
	.Width  = 3,
	.Height = 4,
	.Scale  = 1,
};

const font_t regular_3x5_f =
{
	.Data   = regular_3x5_bits,
	.Width  = 3,
	.Height = 5,
	.Scale  = 1,
};

const font_t regular_5x7_f =
{
	.Data   = regular_5x7_bits,
	.Width  = 5,
	.Height = 7,
	.Scale  = 1,
};

void txt_putc(uint_fast8_t  Row,
              uint_fast8_t  Column,
              char          Character,
              const font_t *pFont)
{
	Character -= ' ';

	uint32_t b0 = ((uint32_t)(Character & 0xF0) * pFont->Height + (Character & 0x0F)) * pFont->Width;

	for (uint32_t x = 0, r0 = Row; x < pFont->Height; x++, r0 += pFont->Scale, b0 += 16*pFont->Width)
	{
		for (uint32_t y = 0, c0 = Column, b = b0; y < pFont->Width; y++, c0 += pFont->Scale, b++)
		{
			const bool isOn = (pFont->Data[b >> 3] >> (b & 0x7)) & 1;

			for (uint_fast8_t i = 0, r = r0; i < pFont->Scale; i++, r++)
			{
				for (uint_fast8_t j = 0, c = c0; j < pFont->Scale; j++, c++)
				{
					idx_set_pixel(r, c, isOn);
				}
			}
		}
	}
}

void txt_puts(uint_fast8_t  Row,
              uint_fast8_t  Column,
              const char    String[],
              const font_t *pFont)
{
	char Character;
	while ((Character = *(String++)) != 0)
	{
		txt_putc(Row, Column, Character, pFont);
		Column += pFont->Scale * (pFont->Width + 1);
	}
}

#include "index.h"
#include "random.h"
#include "rcu.h"
#include "rgb.h"

static const uint32_t PERIOD = 500;

typedef enum index_t
{
	__ = 0,
	UP,
	a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, aA, aB, aC,
	b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, bA, bB, bC,
	c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, cA, cB, cC,
	d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, dA, dB, dC,
	e0, e1,

	IDX_MAX  = e1,
} index_t;

static const uint8_t _position2index[16][32] =
{	//       00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F
	[0x0] = {UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP},
	[0x1] = {UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP},
	[0x2] = {UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP},
	[0x3] = {UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP},
	[0x4] = {UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP,UP},
	[0x6] = {__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__,__},
	[0x6] = {__,a0,a0,a1,a1,a2,a2,__,b0,b0,b1,b1,b2,b2,__,__,__,__,c0,c0,c1,c1,c2,c2,__,d0,d0,d1,d1,d2,d2,__},
	[0x7] = {__,a0,a0,a1,a1,a2,a2,__,b0,b0,b1,b1,b2,b2,__,__,__,__,c0,c0,c1,c1,c2,c2,__,d0,d0,d1,d1,d2,d2,__},
	[0x8] = {__,aB,aB,__,__,a3,a3,__,bB,bB,__,__,b3,b3,__,e0,e0,__,cB,cB,__,__,c3,c3,__,dB,dB,__,__,d3,d3,__},
	[0x9] = {__,aB,aB,__,__,a3,a3,__,bB,bB,__,__,b3,b3,__,e0,e0,__,cB,cB,__,__,c3,c3,__,dB,dB,__,__,d3,d3,__},
	[0xA] = {__,aA,aA,aC,aC,a4,a4,__,bA,bA,bC,bC,b4,b4,__,__,__,__,cA,cA,cC,cC,c4,c4,__,dA,dA,dC,dC,d4,d4,__},
	[0xB] = {__,aA,aA,aC,aC,a4,a4,__,bA,bA,bC,bC,b4,b4,__,__,__,__,cA,cA,cC,cC,c4,c4,__,dA,dA,dC,dC,d4,d4,__},
	[0xC] = {__,a9,a9,__,__,a5,a5,__,b9,b9,__,__,b5,b5,__,e1,e1,__,c9,c9,__,__,c5,c5,__,d9,d9,__,__,d5,d5,__},
	[0xD] = {__,a9,a9,__,__,a5,a5,__,b9,b9,__,__,b5,b5,__,e1,e1,__,c9,c9,__,__,c5,c5,__,d9,d9,__,__,d5,d5,__},
	[0xE] = {__,a8,a8,a7,a7,a6,a6,__,b8,b8,b7,b7,b6,b6,__,__,__,__,c8,c8,c7,c7,c6,c6,__,d8,d8,d7,d7,d6,d6,__},
	[0xF] = {__,a8,a8,a7,a7,a6,a6,__,b8,b8,b7,b7,b6,b6,__,__,__,__,c8,c8,c7,c7,c6,c6,__,d8,d8,d7,d7,d6,d6,__},
};

#define ROW_SIZE (sizeof(_position2index)/sizeof(_position2index[0]))
#define CLM_SIZE (sizeof(_position2index[0])/sizeof(_position2index[0][0]))

static uint8_t Buffer[ROW_SIZE][CLM_SIZE];

void idx_main()
{
	static uint32_t t1;
	static struct
	{
		uint8_t B;
		uint8_t G;
		uint8_t R;
	} SamplePoints[2][IDX_MAX];

	if (rgb_isready())
	{
		if (t1)
		{
			t1--;
		}
		else
		{
			t1 = PERIOD - 1;

			memcpy(SamplePoints[0], SamplePoints[1], sizeof(SamplePoints[0]));
			for (uint_fast8_t i = 0; i < IDX_MAX; i++)
			{
				const uint32_t Color = rnd_color();
				SamplePoints[1][i].R = Color >> 16;
				SamplePoints[1][i].G = Color >>  8;
				SamplePoints[1][i].B = Color >>  0;
			}
		}

		const uint32_t t0 = PERIOD - 1 - t1;
		uint32_t _index2color[IDX_MAX + 1];
		_index2color[0] = 0;
		for (uint_fast8_t i = 0; i < IDX_MAX; i++)
		{
			_index2color[i + 1]
				= ((uint8_t)((t1*SamplePoints[0][i].R + t0*SamplePoints[1][i].R)
					/ (PERIOD - 1)) << 16)
				| ((uint8_t)((t1*SamplePoints[0][i].G + t0*SamplePoints[1][i].G)
					/ (PERIOD - 1)) <<  8)
				| ((uint8_t)((t1*SamplePoints[0][i].B + t0*SamplePoints[1][i].B)
					/ (PERIOD - 1)) <<  0)
				;
		}

		for (uint_fast8_t Row = 0; Row < ROW_SIZE; Row++)
		{
			for (uint_fast8_t Column = 0; Column < CLM_SIZE; Column++)
			{
				rgb_set_pixel(Row, Column, _index2color[Buffer[Row][Column]]);
			}
		}

		rgb_flush();
	}
}

void idx_set_pixel(uint_fast8_t Row, uint_fast8_t Column, bool isOn)
{
	if ((Row < ROW_SIZE) && (Column < CLM_SIZE))
	{
		Buffer[Row][Column] = isOn ? _position2index[Row][Column] : 0;
	}
}

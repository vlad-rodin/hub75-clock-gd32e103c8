#ifndef RGB_H_
#define RGB_H_

#include "libraries.h"

#define ROW_MAX 15
#define CLM_MAX 31

void rgb_init();
void rgb_set_pixel(uint_fast8_t Row, uint_fast8_t Column, uint32_t Color);
bool rgb_isready();
void rgb_flush();

#endif // RGB_H_

#ifndef INDEX_H_
#define INDEX_H_

#include "libraries.h"

void idx_main();
void idx_set_pixel(uint_fast8_t Row, uint_fast8_t Column, bool isOn);
bool idx_isready();
void idx_flush();

#endif // INDEX_H_

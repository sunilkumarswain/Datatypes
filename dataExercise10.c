#include <stdio.h>
#include <stdint.h>

#include "datatype.h"

uint8_t setBits(uint8_t x, int pos)
{
	x |= (1 << pos);
	return x;
}

uint8_t clearBits(uint8_t x, int pos)
{
	x &= ~(1 << pos);
	return x;
}

uint8_t toggleBit(uint8_t x, int pos)
{
	x ^= (1 << pos);
        return x;
}

uint8_t checkBit(uint8_t x, int pos)
{
	return ((x >> pos) & 1);
}

void dataExercise10()
{
    uint8_t  num = 0x12; //1100
    printf("%u", setBits(num, 2));
    printf("%u", clearBits(num, 2));
    printf("%u", toggleBit(num, 2));
    printf("%u", checkBit(num, 2));
}

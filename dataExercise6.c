#include <stdio.h>
#include <stdint.h>

uint8_t getbits(uint8_t x, int p, int n)
{
	return ((x >> (p-n+1)) & ((1 << n)-1));
}

uint8_t extractbits(uint8_t x, int start, int end)
{
	return ((x & (((1 << (end-start))-1) << start)) >> start);
}

void dataExercise6()
{
	uint8_t x = 12; //00001100 p = 4, n = 3 start 2 end 4
	printf("getbits:%d, extractbits:%d\n", getbits(x, 4, 3), extractbits(x, 2, 4));
}

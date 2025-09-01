//Replace right most n bits x with n bits of y starting at position p 
#include <stdio.h>
#include <stdint.h>

//input: x = 0011 0001, y = 1001 0011, p = 5, n = 4 
//output: 00001101

uint8_t createLsbMask(uint8_t n)
{
    uint8_t mask1 = (1 << n);
    return mask1;
}

uint8_t createLsbMaskOnes(uint8_t n)
{
    uint8_t mask1 = (1 << n)-1;
    return mask1;
}

uint8_t createMidMask(uint8_t p, uint8_t n)
{
    uint8_t mask1 = ((1 << n)-1) << (p-n+1);
    return mask1;
}

uint8_t replaceBits(uint8_t x, uint8_t y, uint8_t p, uint8_t n)
{
    uint8_t mask1 = (1 << n)-1;
    uint8_t mask2 = ((1 << n)-1) << (p-n+1);
    return (x & ~mask2) | (y & mask1) << (p-n+1);
}

void dataExercise7()
{
    uint8_t x = 0x31; //0011 0001
    uint8_t y = 0x93; //1001 0011
    uint8_t n = 4;
    printf("createLsbMask:0x%x\n", createLsbMask(n)); //10000
    printf("createLsbMaskOnes:0x%x\n", createLsbMaskOnes(n)); //01111
    printf("createMidMask:0x%x\n", createMidMask(5, n)); //00111100
    printf("replaceBits:0x%x\n", replaceBits(x, y, 5, n)); //0x31 & ~00111100 = 00000001 | 0x93 & 00001111 = 0x00000011 = 00000011
}

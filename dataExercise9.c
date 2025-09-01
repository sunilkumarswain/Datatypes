/* Write a function rightrot(x, n) that returns the value of the integer x rotated
 to the right by n positions.*/
 
#include <stdio.h>
#include <stdint.h>

uint32_t leftRotate(uint32_t num, int n)
{
    int size = sizeof(uint32_t)*8;
    return ((num << n) | (num >> (size-n)));
}

uint32_t rightRotate(uint32_t num, int n)
{
    int size = sizeof(uint32_t)*8;
    return ((num >> n) | (num << (size-n)));
}

void dataExercise9() {
    uint32_t num = 0x2C2C2C2C;
    printf("Result 32 0: 0x%x\n", num); 
    uint32_t res = leftRotate(num, 4);
    printf("Result 32 1: 0x%x\n", res); 
    res = rightRotate(res, 4);
    printf("Result 32 2: 0x%x", res);
}


/* Program to count no of flips required to change from number a to b */
#include <stdio.h>
#include <stdint.h>

int flipBits(uint32_t a, uint32_t b)
{
    uint32_t res, count = 0;
    res = a^b;
    while (res > 0)
    {
        if (res & 1)
        {
            count++;
        }
        res = res >> 1;
    }    
    return count;
} 

void dataExercise11()
{
    uint32_t x = 0x18, y = 0x28; //0001 1000, 0010 1000 
    printf("%d\n", flipBits(x, y));
}

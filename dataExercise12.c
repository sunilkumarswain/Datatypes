#include <stdio.h>
#include <stdint.h>

uint8_t reverseBitsInByte(uint8_t val);
uint32_t reverseBitsInt(uint32_t num);

void dataExercise12()
{
    uint8_t buf = 0xA0; // 10100000
    uint8_t res8 = reverseBitsInByte(buf);
    printf("Reversed byte: 0x%02X\n", res8);

    uint32_t x = 0xA0; // 10100000
    uint32_t res32 = reverseBitsInt(x);
    printf("Reversed 32-bit int: 0x%08X\n", res32); // Expected: 0x05000000
}

uint8_t reverseBitsInByte(uint8_t val)
{
    // Reverse adjacent bits, then pairs, then nibbles
    val = ((val & 0x55) << 1) | ((val & 0xAA) >> 1); // Swap adjacent bits
    val = ((val & 0x33) << 2) | ((val & 0xCC) >> 2); // Swap pairs of bits
    val = ((val & 0x0F) << 4) | ((val & 0xF0) >> 4); // Swap nibbles
    return val;
}

uint32_t reverseBitsInt(uint32_t num)
{
    uint32_t i, reversed = 0;
    for (i = 0; i < 32; i++)
    {
        if (num & (1U << i))
        {
            reversed |= (1U << (31 - i));
        }
    }
    return reversed;
}


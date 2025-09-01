/* Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged. */
#include <stdio.h>

unsigned invert(unsigned x, int p, int n);
unsigned invert2(unsigned x, int p, int n);

void dataExercise8() {
    unsigned x = 170;  // Binary: 10101010
    int p = 4;
    int n = 3;
    unsigned result = invert(x, p, n);
    printf("Result: %u\n", result); // Output should be 154 (Binary: 10011010)
    result = invert2(x, p, n);
    printf("Result: %u\n", result);
}

unsigned invert(unsigned x, int p, int n) {
    unsigned mask = ~(~0 << n) << (p - n + 1); // mask = 11111111 << 3 = ~11111000 = 00000111 << 2 = 00011100
    return x ^ mask; // XOR the mask with x to invert the selected bits
}

unsigned invert2(unsigned x, int p, int n) {
    unsigned mask = ((1 << n)-1) << (p-n+1); // mask = 00000111 << 2 = 00011100
    return x ^ mask; // XOR the mask with x to invert the selected bits
}



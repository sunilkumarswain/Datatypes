/* Function to remove a part from a number without modifying remaining bits */
//i/p: 11011010 o/p: 10000010
#include <stdio.h>

int intersectPart(int number, int start_bit, int end_bit) {
    // Create a mask to retain the bits within the specified range
    int mask = ((1 << (end_bit - start_bit + 1)) - 1) << start_bit;
    // Apply the mask to the number to intersect the specified part
    return number & mask;
}

int remove_part(int number, int start_bit, int end_bit) {
    // Create a mask to preserve the bits outside the range to be removed
    int mask = (~0 << (end_bit + 1)) | ((1 << start_bit) - 1); //mask = 111111111 << 7 which is 10000000 | 00000111
    // Apply the mask to the number to remove the specified part
    return number & mask;
}

int union_part(int number1, int number2, int start_bit, int end_bit) {
    // Create masks to isolate the bits within the specified range for both numbers
    int mask1 = ((1 << (end_bit - start_bit + 1)) - 1) << start_bit;
    int mask2 = ((1 << (end_bit - start_bit + 1)) - 1) << start_bit;

    // Extract the bits from the specified range for each number right justified
    int bits1 = (number1 & mask1) >> start_bit;
    int bits2 = (number2 & mask2) >> start_bit;

    // Perform union operation by ORing the extracted bits
    int result = (bits1 | bits2) << start_bit;

    return (number1 & ~mask1) | result;
}

void dataExercise14() {
    int number = 0b11011010; // Example number: 0xDA, 218 in decimal 0x1000 0010
    int start_bit = 3; // Example start bit: 3
    int end_bit = 6; // Example end bit: 6
    int result = remove_part(number, start_bit, end_bit);
    int number1 = 0b01101010; // Example number1: 106 in decimal 0110 1010
    int number2 = 0b11010101; // Example number2: 213 in decimal 1101 0101

    printf("Original number: 0x%x\n", number);
    printf("Removing bits from position %d to %d...\n", start_bit, end_bit);
    printf("Result: 0x%x\n", result); // 1000 0010

    printf("Union of bits from position %d to %d:\n", start_bit, end_bit);
    result = union_part(number1, number2, start_bit, end_bit);
    printf("Result: 0x%x\n", result); //0111 1110

    result = intersectPart(number, start_bit, end_bit);

    printf("Result: 0x%x\n", result); // 0001 1000

}


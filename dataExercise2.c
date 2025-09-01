/*
 * writing a simple program that declares char array, int array, hex bytes access and prints them.
 *
 * */
#include <stdio.h>
#include <stdint.h>

/*
Unsigned Char (uint8_t):

Size: Typically 1 byte (8 bits).
Range: 0 to 255.
Used to represent small integers or characters.
Often used for storing ASCII characters or small integer values within the range of 0 to 255.

Unsigned Int (uint32_t):

Size: Depends on the compiler and architecture, but typically at least 2 bytes (16 bits).
Range: 0 to 65535 or 0 to 4294967295 (depending on the size of unsigned int).
Used to represent larger integer values.
Can hold values ranging from 0 to at least 65535 or 0 to at least 4294967295, depending on the size of unsigned int on the specific platform.
*/

void dataExercise2() {
    // Declare a character string using uint8_t
    uint8_t char_string[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0' };

    // Declare an integer array using uint8_t
    uint8_t int_array[] = { 1, 2, 3, 4, 5 }; //same as uint32_t int_array[] = { 1, 2, 3, 4, 5 }; but why 32 bit size when ints are small < 255

    // Declare a hex byte array using uint8_t
    uint8_t hex_bytes[] = { 0x0A, 0x1F, 0x3B, 0x4E, 0x5D };

    // Access and print the character string
    for (int i = 0; char_string[i] != '\0'; ++i) {
        printf("%c", char_string[i]);
    }
    printf("\n");

    // Access and print the integer array
    for (int i = 0; i < sizeof(int_array) / sizeof(int_array[0]); ++i) {
        printf("%d ", int_array[i]);
    }
    printf("\n");

    // Access and print the hex byte array
    for (int i = 0; i < sizeof(hex_bytes) / sizeof(hex_bytes[0]); ++i) {
        printf("%02X ", hex_bytes[i]);
    }
    printf("\n");
}


//Macro to get bigger between two numbers
#define MAX(x, y) ((x) > (y) ? (x) : (y))
//Macro to get bigger between three numbers
#define MAX(A,B,C)  ((A > B) ? (A > C ? A : C) : (B > C ? B : C))
//Macro to get bigger between four number
#define MAX(A,B,C,D)  ((A > B && A > C && A > D) ? A : (B > C && B > D) ? B : (C > D) ? C : D) 
//Macro to set nth-bit
#define SET_BIT(x, pos) (x |= (1U << pos))
//Macro to clear nth-bit
#define CLEAR_BIT(x, pos) (x &= (~(1U << pos)))
//Macro to toggle nth-bit
#define TOGGLE_BIT(x, pos) x ^= (1U << pos)
//Macro to check nth-bit and get it
#define GET_BIT(x, pos) ((x & (1U << pos)) >> pos)
#define GETBIT(x, pos) ((x >> pos) & 1)
//Macro to set a number of bits from lsb starting from a certain position
#define SET_BITS(x, bits, pos) (x |= (((1 << bits)-1) << pos))
#define SET_BITS(x, start_bit, end_bit) (x |= (((1 << (end_bit-start_bit+1))-1) << start_bit))
//Macro to reset a number of bits from lsb starting from a certain position
#define RESET_BITS(x, bits, pos) (x &= ~(((1U << bits)-1) << pos))
#define RESET_BITS(x, start_bit, end_bit) (x &= ~(((1 << (end_bit - start_bit+1))-1) << start_bit))
//Macro to swap nibbles of a byte
#define SWAP_NIBBLES(x) (((x & 0x0F) << 4) | ((x & 0xF0) >> 4))
//Macro to swap byte of 32-bit +ve integer variable
#define SWAP_BYTES(u32Value) ((u32Value & 0x000000FF) << 24)\
|((u32Value & 0x0000FF00) << 8) \
|((u32Value & 0x00FF0000) >> 8) \
|((u32Value & 0xFF000000) >> 24)
//Macro to swap words of 32-bit +ve integer variable
#define SWAP_WORDS(i) (((i & 0xFFFF0000) >> 16) | ((i & 0x0000FFFF) << 16))
//Macro to swap bytes of integer variable
#define SWAP_BYTES(i) (((i & 0xFF000000) >> 8) | ((i & 0x00FF0000) << 8))
//function to take hex number as input and return hex number in reverse order. For example 0xA09B should be returned as 0xB90A.
#define HEX_REVERSE(x) ((x & 0x000000FF) << 24 | (x & 0x0000FF00) << 8 | (x & 0x00FF0000) >> 8 | (x & 0xFF000000) >> 24)
//macro to swap odd-even bits
#define SWAP_ODD_EVEN_BIT(x) (((x & 0xAAAAAAAA) >> 1) | ((x & 0x55555555) << 1))
//macro to swap two numbers
#define SWAP(x, y) (x ^= y ^= x ^= y)
//macro to get low and high bytes of 16 bit unsigned integer
#define LOWBYTE(v)   ((unsigned char) (v))
#define HIGHBYTE(v)  ((unsigned char) (((unsigned int) (v)) >> 8))
//macro to multiply 3.5 to an integer using bitwise operation
#define MULTIPLY(data) ((data << 1) + data + (data >> 1))
//macro to multiply a number by 2 using bitwise operation
#define MULTIPLYBYTWO(data) (data << 1)
//macro to divide a number by 2 using bitwise operation
#define DIVIDEBYTWO(data) (data >> 1)
//macro to rotate bits of a number left to right certain number of times
#define INT_BITS 32
#define ROTATE_LEFT(pos, data) ((data << pos) | (data >> (INT_BITS - pos)))
#define ROTATE_RIGHT(pos, data) ((data >> pos) | (data << (INT_BITS - pos)))
//Check if an integer is odd or even
#define CHECKODDEVEN(n) ((n & 1) == 1) ? 1 : 0
//Read data from a ARM 32bit register
#define GPIO_PORTD_DATA_R (*((volatile unsigned long *)0x400073FC)) 
//Write a program to check an integer is a power of 2
#define CHECKPOWERTWO(x) ((x && !(x & (x - 1))) == 1) ? 1 : 0
//Clear lsb bit
#define CLEAR_LSB_BIT(x) (x & (x-1))
//Check if x and y have opposite signs
#define OPPOSITE_SIGNS(x, y) ((x ^ y) < 0) ? TRUE : FALSE
//Check if number is positive or not x >> 31 is -1 if x is negative, 0 otherwise
#define CHECK_POSITIVE(x) (x >> 31) == 0 ? TRUE : FALSE
//make neagative of a number
#define MAKE_NEGATIVE(x) (~x + 1)
//Test if mine has either of two lowest bits on	
#define CHECK_LOWEST_EITHER(x) ((x & 0x03) != 0) ? 1 : 0
//Test if mine has both of two lowest bits on	
#define CHECK_LOWEST_BOTH(x) ((x & 0x03) == 3) ? 1 : 0
//set lowest 8 bits of x
#define SET_8_BITS(x) (x |= 0xFF)
//clear odd bits of x
#define CLEAR_ODD(x) (x & 0xAA)
//clear even bits of x
#define CLEAR_EVEN(x) (x & 0x55)

void dataExercise15() 
{

}

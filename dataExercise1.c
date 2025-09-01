/*
1. Convert Character to Integer
char - '0': Converts a digit character (e.g., '5') to its integer equivalent (5).
Example:
char c = '7';
int num = c - '0'; // num = 7
2. Convert Integer to Character
int + '0': Converts an integer (e.g., 5) to its corresponding digit character ('5').
Example:
int num = 8;
char c = num + '0'; // c = '8'
3. Convert to Uppercase
char & ~0x20: Forces a letter to uppercase by clearing bit 5.
Example:
char upper = lower - 'a' + 'A';
char c = 'b';
char upper = c & ~0x20; // upper = 'B'
char - 32: Works for converting lowercase ('a' to 'z') to uppercase ('A' to 'Z').
Example:
char c = 'h';
char upper = c - 32; // upper = 'H'
4. Convert to Lowercase
char lower = upper - 'A' + 'a';
char | 0x20: Forces a letter to lowercase by setting bit 5.
Example:
char c = 'M';
char lower = c | 0x20; // lower = 'm'
char + 32: Converts uppercase ('A' to 'Z') to lowercase ('a' to 'z').
Example:
char c = 'P';
char lower = c + 32; // lower = 'p'
5. Check Character Type
Digit Check (isdigit):
c >= '0' && c <= '9': Checks if c is a numeric digit.
Alphabet Check (isalpha):
(c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'): Checks if c is an alphabetic letter.
Uppercase Check (isupper):
c >= 'A' && c <= 'Z'
Lowercase Check (islower):
c >= 'a' && c <= 'z'
6. Toggle Case
char ^ 0x20: Toggles case (uppercase to lowercase and vice versa).
Example:
char c = 'g';
char toggled = c ^ 0x20; // toggled = 'G'
7. Convert Hexadecimal Character
For Hex Digit (0-9 and A-F):
To Integer:
int value = (c >= 'A' && c <= 'F') ? (c - 'A' + 10) : (c - '0');
To Character:
char hex = (val > 9) ? (val - 10 + 'A') : (val + '0');
*/
#include <stdio.h>

void dataExercise1()
{
    /* Convert char to integer */
    char ch = '7';
    int num = ch - '0';
    printf("num:%d\n", num);
    /* Convert Integer to Character */
    int my_num = 7;
    char my_ch = my_num + '0';
    printf("my_ch:%c\n", my_ch);
    /* Convert to Uppercase */
    char lower_char = 'a';
    printf("upper_char:%c\n", lower_char - 'a' + 'A');
    /* Convert to Lowercase */
    char u_char = 'A';
    printf("l_char:%c\n", u_char - 'A' + 'a');
    /* Checks if c is a numeric digit. */
    char m_ch = '6';
    if (m_ch >= '0' && m_ch <= '9')
    {
        printf("m_ch is a digit\n");
    } 
    /* Checks if c is an alphabetic letter. */
    char a_ch = 'd';
    if ((a_ch >= 'A' && a_ch <= 'Z') || (a_ch >= 'a' && a_ch <= 'z'))
    {
        printf("a_ch is a alphabetic letter\n");
    }
    /* Checks if c is an upper case letter. */
    char u_ch = 'R';
    if (u_ch >= 'A' && u_ch <= 'Z')
    {
        printf("a_ch is a upper case\n");
    }
    /* Checks if c is an lower case letter. */
    char l_ch = 'd';
    if (l_ch >= 'a' && l_ch <= 'z')
    {
        printf("l_ch is a lower case\n");
    }
    /* Toggle case */
    char c_ch = 'a';
    char cc_ch = c_ch ^ 0x20;
    printf("cc_ch:%c\n", cc_ch);
    /* Convert Hexadecimal Character to int */
    char hex_char1 = '5';
    printf("hex_char1:%d\n", (hex_char1 >= 'A' && hex_char1 <= 'F') ? hex_char1 - 'A' + 10 : hex_char1 - '0');
    char hex_char2 = 'D';
    printf("hex_char2:%d\n", (hex_char2 >= 'A' && hex_char2 <= 'F') ? hex_char2 - 'A' + 10 : hex_char2 - '0');
    /* Convert Hexadecimal number to character */
    int hex_int1 = 13;
    printf("hex_int1:%c\n",  (hex_int1 >= 10 && hex_int1 <= 15) ? hex_int1 - 10 + 'A' : hex_int1 + '0');
    int hex_int2 = 3;
    printf("hex_int2:%c\n",  (hex_int2 >= 10 && hex_int2 <= 15) ? hex_int2 - 10 + 'A' : hex_int2 + '0');
}

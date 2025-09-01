/* Exercise 4:
 * Implement htoi function which converts a string of hexadecimal digits into its equivalent integer value
 * Input: 0x12C = 12*10^0+2*16^1+1*16^2 = 12+32+256 = 300
 * Output: 300
 * */

#include <stdio.h>

#define YES 1
#define NO 0

int my_htoi(char s[])
{
	int hexDigit, n, inHex;
	int i = 0;
	if (s[i] == '0')
	{
		++i;
		if (s[i] == 'x' || s[i] == 'X')
		{
			++i;
		}
	}
	n = 0;
	inHex = YES;
	for(; inHex == YES; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			hexDigit = s[i] - '0';
		} else if (s[i] >= 'a' && s[i] <= 'f') {
			hexDigit = s[i] - 'a' + 10;
		} else if (s[i] >= 'A' && s[i] <= 'F') {
			hexDigit = s[i] - 'A' + 10;
		} else {
			inHex = NO;
		}
		if (inHex == YES)
		{
			n = 16 * n + hexDigit;
		}
	}
	return n;
}

void dataExercise4()
{
	char s[] = "0x12C";
	int res;
	res = my_htoi(s);
	printf("The result is: %d\n", res);
}

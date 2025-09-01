/* Exercise 3
 * Implementing atoi to convert string s to integer without using library function 
 * Input string: "123" output int:123 
 * */

#include <stdio.h>

int my_atoi(char s[])
{
	int i, n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
	{
		n = 10 * n + s[i] - '0';
	}
	return n;
}

void dataExercise3()
{
	int res;
	char s[10] = "123";
	res = my_atoi(s);
	printf("atoi result is %d\n", res);
}

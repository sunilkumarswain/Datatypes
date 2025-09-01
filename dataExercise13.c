/* Check lsb bit set */
#include <stdio.h>

int checkLsbSet(int num)
{
    int i;
    for (i = 0; i < 32; i++)
    {
        if ((num & (1 << i)) != 0)
        {
            return i;
        }
    }
    return -1;
}

int checkMsbSet(int num)
{
    int i;
    for (i = 31; i >= 0; i--)
    {
        if ((num & (1 << i)) != 0)
        {
            return i;
        }
    }
    return -1;
}

void dataExercise13()
{
    int a = 0x2C; //0010 1100
    printf("%d", checkLsbSet(a)); //Ans is 2
    int aa = 0xACACACAC; //1010 1100
    printf("%d", checkMsbSet(aa));
}
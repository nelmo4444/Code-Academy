#include <stdio.h>
#include <unistd.h>

void convert(int num)
{
    int i;
    for (i = 1 << 7; i > 0; i >>= 1)
    {
        if (num & i)
        {
            printf("*");
        }
        else
        {
            printf(".");
        }
    }
    printf("\n");
}

int iPow(int base, int exp)
{
    int result = 1;
    for (;;)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        if (!exp)
            break;
        base *= base;
    }

    return result;
}
int main()
{
    int i = 7;
    while (i > 0)
    {
        convert(iPow(2, i));
        i--;
        sleep(2);
    }

    return 0;
}
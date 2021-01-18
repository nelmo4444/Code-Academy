#include <stdio.h>

int main()
{
    int x = 10;
    int y = 10;
    int true = x == y;
    int false = x != y;

    printf("\nTrue=%d, False=%d\n", true, false);
    return 0;
}
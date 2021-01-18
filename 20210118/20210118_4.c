#include <stdio.h>

int main()
{
    int x = 10;
    int y = 10;
    int true = x && y & x << 1;
    printf("\nTrue=%d", true);
    true = x && y ^ x << 1;
    printf("\nTrue=%d", true);
    return 0;
}
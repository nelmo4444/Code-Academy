#include <stdio.h>
int main()
{
    int nResult = 13;
    int nX = 4;
    printf("Result = %d\n", nResult);
    nResult += nX;
    printf("Result += %d -> %d\n", nX, nResult);
    nResult = 1;
    printf("Result = %d\n", nResult);
    nResult <<= nX;
    printf("Result <<= %d -> %d\n", nX, nResult);
    nResult = 10;
    printf("Result = %d\n", nResult);
    nResult %= nX;
    printf("Result %%= %d -> %d\n", nX, nResult);
    nResult = 8;
    printf("Result = %d\n", nResult);
    nResult &= nX;
    printf("Result &= %d -> %d\n", nX, nResult);
    return 0;
}
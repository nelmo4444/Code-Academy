#include <stdio.h>
int main()
{
    int iX = 13;
    int iY = 44;
    int iResult = 0;
    iResult = iX - iY;
    printf("%d - %d = %d \n", iX, iY, iResult);
    iResult = iY / iX;
    printf("%d / %d = %d \n", iY, iX, iResult);
    iResult = iY % iX;
    printf("%d / %d Remainder: %d\n", iY, iX, iResult);

    float fX = 13;
    float fY = 44;
    float fResult;

    fResult = fX * fY;
    printf("%f * %f = %f \n", fX, fY, fResult);
    fResult = fX + fY;
    printf("%f + %f = %f \n", fX, fY, fResult);

    return 0;
}
#include <stdio.h>
int main()
{
    int nX = 33;
    printf("Vuvedete stoinost za nX\n");
    scanf("%d", &nX);
    int nY = 20;
    if (nX == nY)
    {
        printf("%d and %d are equal\n", nX, nY);
    }
    else
    {
        printf("%d and %d are not equal\n", nX, nY);
    }
    if (nX > nY)
    {
        printf("%d is greater than %d\n", nX, nY);
    }
    if (nX < nY)
    {
        printf("%d is smaller than %d\n", nX, nY);
    }
    if (nX >= nY)
    {
        printf("%d is bigger or equals %d \n", nX, nY);
    }

    return 0;
}

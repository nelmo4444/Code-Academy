#include <stdio.h>
int addInt(int a, int b);
int main()
{
    int nX = 1, nY = 2;
    printf("\nInit values: X= %d, Y= %d\n", nX, nY);
    nX = addInt(1, 2), 2 * 3, addInt(3, 4);
    nY = (7 * 8, addInt(8, 9), 9 - 4);
    printf("\nX= %d, Y= %d\n", nX, nY);
    return 0;
}

int addInt(int a, int b)
{
    return a + b;
}

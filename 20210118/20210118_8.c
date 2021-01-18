#include <stdio.h>
int main()
{
    char c;
    printf("Vuvedi symvol: \n");
    c = getchar();

    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        printf("%c e bukva ot ASCII", c);
    else
        printf("%c ne e bukva ot ASCII", c);

    return 0;
}
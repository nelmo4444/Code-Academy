#include <stdio.h>

int main()
{
    int nA = 1;
    printf("Vuvedete stoinost za nA\n");
    scanf("%d", &nA);
    int nB = 1;
    printf("Vuvedete stoinost za nB\n");
    scanf("%d", &nB);

    int nCompare = (nA == nB ? printf("nA i nB sa ednakvi\n") : printf("nA i nB sa razlichni\n"));

    return 0;
}
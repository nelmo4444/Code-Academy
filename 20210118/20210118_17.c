#include <stdio.h>

void randomGenerator();
void lRandomGenerator();

int main()
{
    randomGenerator();
    lRandomGenerator();
    return 0;
}

void randomGenerator()
{
    int A = 1;
    A ^= A << 13;
    printf("%d\n", A);
    A ^= A >> 17;
    printf("%d\n", A);
    A ^= A << 5;
    printf("%d\n", A);
}

void lRandomGenerator()
{
    unsigned long long int A = 1234567891234567891;
    A ^= A << 13;
    printf("\n%u\n", A);
    A ^= A >> 17;
    printf("%u\n", A);
    A ^= A << 5;
    printf("%u\n", A);
}
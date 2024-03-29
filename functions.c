#include <stdio.h>

int power(int m, int n);

/* test power function */

int main()
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}

//This is what the power function looks like
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
    {
        p = p * base;
    }
    p = p * base;
    return p;
}

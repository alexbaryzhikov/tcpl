#include <stdio.h>

int power(int base, int n);

/* Test power function. */
int main() {
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %5d %7d\n", i, power(2, i), power(-3, i));
    return 0;
}

/* Raise base to n-th power; n >= 0 */
/* (old-style version) */
power(base, n)
int base, n;
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;

    return p;
}

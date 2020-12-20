#include <stdio.h>

char massimo(char x, char y)
{
    printf("x: %i, y: %i\n", x, y);
    if (x > y)
        return x;
    else
        return y;
}

int main(void)
{
    char x, y, z;

    x = 6;
    y = -3;

    z = massimo(x, y);

    printf("Il valore massimo è %i\n", z);

    return 0;
}
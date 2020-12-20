#include <stdio.h>

int is_multiple(int x, int y)
{
    printf("x: %i, y: %i\n", x, y);
    if (x % y == 0)
        return 1;
    else
        return 0;
}

int main(void)
{
    int x, y, z;

    x = 6;
    y = -3;

    z = is_multiple(x, y);

    printf("Il valore %i è multiplo di %i? %i\n", x, y, z);

    x = 18;
    y = 15;

    z = is_multiple(x, y);

    printf("Il valore %i è multiplo di %i? %i\n", x, y, z);

    return 0;
}
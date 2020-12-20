#include <stdio.h>
#include <math.h>

char max_pot10(unsigned int val)
{
    printf("val: %i\n", val);
    char ordine;
    for (ordine = 0; pow(10, ordine) < val; ordine++)
        printf("Ordine: %i\n", ordine);
    if (ordine == 0)
        return -1;
    return ordine;
}

int main(void)
{
    unsigned int val = 12345;

    char max_pot = max_pot10(val);

    printf("L'ordine massimo di %i è %i\n", val, max_pot);

    val = 1;

    max_pot = max_pot10(val);

    printf("L'ordine massimo di %i è %i\n", val, max_pot);

    return 0;
}
#include <stdio.h>
#include <math.h>

unsigned int fattoriale(unsigned char val)
{
    unsigned int ris = 1;
    for (unsigned char i = val; i != 0; i--)
        ris *= i;
    return ris;
}

int main(void)
{
    printf("Byte of char:\t\t%lu\n", sizeof(char));
    printf("Max number in char:\t%.0f\n", pow(2, 8));
    printf("Byte of int:\t\t%lu\n", sizeof(int));
    printf("Max number in int:\t%.0f\n", pow(2, 32));

    unsigned char val = 12;

    unsigned int ris = fattoriale(val);

    printf("Il fattoriale di %i è %i\n", val, ris);

    val = 13;

    ris = fattoriale(val);

    printf("Il fattoriale di %i è %i\n", val, ris);

    return 0;
}
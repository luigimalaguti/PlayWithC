#include <stdio.h>
#include <math.h>

double square_dist(double x1, double y1, double x2, double y2)
{
    printf("x1: %f, y1: %f\n", x1, y1);
    printf("x2: %f, y2: %f\n", x2, y2);
    double dist = pow(x1 - x2, 2) + pow(y1 - y2, 2);
    return sqrt(dist);
}

int main(void)
{
    double x1 = 3;
    double y1 = 2;

    double x2 = 1;
    double y2 = 5;

    double dist = square_dist(x1, y1, x2, y2);

    printf("La distanza tra (%f, %f) e (%f, %f) è %f\n", x1, y1, x2, y2, dist);

    return 0;
}
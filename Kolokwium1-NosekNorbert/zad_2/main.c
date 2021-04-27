#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double srednia(double x, double y, double z)
{
    double sr_geo = sqrt(x * y * z);

    return sr_geo;
}



int main()
{
    double x, y, z;

    printf("Wpisz pierwsza liczbe : ");
    scanf("%lf", &x);
    printf("Wpisz druga liczbe : ");
    scanf("%lf", &y);
    printf("Wpisz trzecia liczbe : ");
    scanf("%lf", &z);

    printf("%lf", srednia(x, y, z));

    return 0;
}

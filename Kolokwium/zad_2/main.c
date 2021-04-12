#include <stdio.h>
#include <stdlib.h>
#include<math.h>

double srednia(double x, double y, double z)
{
    double sr_geo;

    sr_geo = x * y * z;

    return sqrt(sr_geo);
}



int main()
{
    double x, y, z;

    printf("Wpisz pierwsza liczbe : ");
    scanf("%f", &x);
    printf("Wpisz druga liczbe : ");
    scanf("%f", &y);
    printf("Wpisz trzecia liczbe : ");
    scanf("%f", &z);

    printf("%f", srednia(x, y, z));

    return 0;
}

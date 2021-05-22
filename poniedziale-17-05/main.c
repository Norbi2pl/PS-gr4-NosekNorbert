#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    double a, b, c;
};

double obwod(struct trojkat t)
{
    return t .a+t .b+t .c;
}


typedef enum zwierzak
{
    kot = 0,
    pies,
    chomik,
    ryba,
    papuga
} zwierzak;


int main()
{
    zwierzak zwierz = ryba;
    printf("Numer zwierzaka %d\n", (int)zwierz);

    return 0;
}

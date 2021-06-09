#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void odwroc(short tab[], int lewy, int prawy)
{
    short *p, *l;
    p = tab + prawy;
    l = tab + lewy;

    for (p, l; l < tab + ((prawy - lewy + 1) / 2) + lewy; --p, ++l)
    {
        int tmp = *l;
        *l = *p;
        *p = tmp;
    }
}

int main()
{
    const int N = 500;
    int n;
    int lewy = 0;
    int prawy = 0;

    printf("Wpisz liczbe z przedzialu [1, %d] :", N);
    scanf("%d", &n);


    if(n <= 0 || n > N)
        {
            printf("Liczba elementow musi byc z przedzialu [1, %d] :", N);
            return 1;
        }

    short tab[n];
    srand(time(NULL));

    for(short *p = tab; p < tab + n; ++p)
    {
        *p = rand() % 300 -200;
    }

    if(lewy > 0 || lewy <= n)
    {
        printf("Podaj liczbe z przedzialu [0, %d] :", n);
        scanf("%d", &lewy);
    }

    if(prawy > lewy || prawy <= n)
    {
        printf("Podaj liczbe z przedzialu [%d, %d] :", lewy, n);
        scanf("%d", &prawy);
    }


    for(short *p = tab; p < tab + n; ++p)
    {
        printf("%5d ", *p);
    }

    printf("\n----------------------------------------------------------------------------\n");
    odwroc(tab, lewy, prawy);

    for(short *p = tab; p < tab + n; ++p)
    {
        printf("%5d ", *p);
    }


    return 0;
}

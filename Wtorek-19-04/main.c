#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow n: ");
    int n;
    scanf("%d", &n);

    if(n <= 0 || n > N)
        {
            printf("Liczba elementow musi byc z przedzialu [1, %d\n]!", N);
            return 1;
        }
    // Inicjalizuje n poczatkowych elementów tablicy
    // liczbami o warto ́sciach z przedziału [1..lim]

    short lim = 999;
    srand(time(0));

    // inicjalizacja generatora liczb pseudolosowych

    for(short *p = tab; p < tab + n; ++p)
        {
            *p = rand() % lim + 1;
        }
    // Wypisuje n poczatkowych elementów tablicy

    for(short *p = tab; p < tab + n; ++p)
        {
            printf("%5d ",*p);
        }
    printf("\n");

    // teraz robimy zad 1 b)

    /*

    for(short *p = tab; p < tab + n; ++p)
        {
            if(*p <= 0)
            {
                continue;
            }
            if(*p % 2 == 1)
            {
                *p = *p * 2;
            }
            else if(*p % 2 == 0)
            {
                *p *= (-1);
            }

            if(*p > 0)
            {
                *p = 1;
            }
            else if(*p < 0)
            {
                *p = (-1);
            }
        }

    for(short *p = tab; p < tab + n; ++p)
        {
            printf("%5d ",*p);
        }
    printf("\n");

    */

    // teraz robimy zad 1 c)

    /*

    int lewy, prawy;

    printf("Wprowadz liczbe calkowita mniejsza od n :");
    scanf("%d", &lewy);
    printf("Wprowadz liczbe calkowita mniejsza od n :");
    scanf("%d", &prawy);

    if(lewy < 0 || prawy < 0 || lewy > n || prawy > n)
    {
        printf("Zly przedzial ! Wpisz jeszcze raz :");
        scanf("%d", &lewy);
        scanf("%d", &prawy);
    }

    short tmp;
    short *l;
    short *p;

    for(l = tab + lewy, p = tab + prawy; l < tab + ((prawy - lewy + 1) / 2) + lewy; ++l, --p)
    {
        tmp = *l;
        *l = *p;
        *p = tmp;
    }

    for(short *p = tab; p < tab + n; ++p)
        {
            printf("%5d ", *p);
        }
    printf("\n");

    */

    //teraz robimy zad 1 d)

    /*

    int par = 0;
    int nie_par = 0;

    for(short *p = tab; p < tab + n; ++p)
    {
        if(*p % 2 == 0)
        {
            par++;
        }
        else
        {
            nie_par++;
        }
    }

    printf("Suma przystych to : %d\n", par);
    printf("Suma nie przystych to : %d\n", nie_par);

    */

    //teraz robimy zad 1 e

    // 1d i e, 2 b i c

    return 0;
}

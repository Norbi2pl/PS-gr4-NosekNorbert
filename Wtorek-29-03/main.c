#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generuj(int n)
{
    int N = 1000;
    short tab[N];

    if(n > N || n < 0)
    {
        return -1;
    }

    short lim = 100;
    srand(time(0));
    for(int j = 0; j < n; ++j)
    {
        tab[j] = rand() % lim + 1;
    }
}


int main()
{
    /*

    const int N = 1000;
    short tab[N];

    printf("Podaj liczbe calkowita : ");
    int n;
    scanf("%d", &n);

    if(n > N || n < 0)
    {
        return -1;
    }

    short lim = 100;
    srand(time(0));
    for(int j = 0; j < n; ++j)
    {
        tab[j] = rand() % lim + 1;
    }

    for(int j = 0; j < n; ++j)
        {
            printf("%5d ", tab[j]);
        }
    printf("\n");

    */

    //zad2.1

    /*

    for(int j = 0; j < n; ++j)
        {
            if(tab[j] <= 0)
                {
                    continue;
                }
            if(tab[j] % 2 == 1)
            {
                tab[j] = 3*tab[j] + 1;
            }
            else
            {
                do{tab[j] /= 2;
            }
            while(tab[j] % 2 == 0);
            }
        }
        printf("\n");

    for(int j = 0; j < n; ++j)
        {
            printf("%5d ", tab[j]);
        }
    printf("\n");

    */

    //zad 2.2

    /*

    for(int j = 0; j < n; ++j)
    {
        if(tab[j] % 2 == 1)
        {
            tab[j] = tab[j] * 2;
        }
        else if(tab[j] % 2 == 0)
        {
           tab[j] *= -1;
        }
    }
    printf("\n");


    for(int i = 0; i < n; ++i)
    {
        if(tab[i] < 0)
        {
            tab[i] = -1;
        }
        else
        {
            tab[i] = 1;
        }
    }
    printf("\n");

    for(int j = 0; j < n; ++j)
        {
            printf("%5d ", tab[j]);
        }
    printf("\n");

    */

    //zad2.4

    /*

    int wynik_par = 0;
    int wynik_nie_par = 0;

    for(int j = 0; j < n; ++j)
    {
        if(tab[j] % 2 == 0)
        {
            wynik_par += 1;
        }
        else
        {
            wynik_nie_par += 1;
        }
    }
    printf("%\n");

     printf("Ilosc liczb parzystych to : %d\n", wynik_par);
     printf("Ilosc liczb nie parzystych to : %d\n", wynik_nie_par);

    */

     //zad2.5

    /*

    int najwieksza = tab[0];

    for(int j = 0; j < n; j++)
        {
            if(tab[j] > najwieksza)
            {
                najwieksza = tab[j];
            }
            else
            {
                continue;
            }
        }
    printf("%d", najwieksza);


    */



    return 0;
}

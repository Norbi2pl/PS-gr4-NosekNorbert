#include <stdio.h>
#include <stdlib.h>

float zad_1(int n)
{
    if(n < 0)
    {
        printf("Podana liczba jest mniejsza od 0! Wpisz ponownie :");
        scanf("%d", &n);
    }
    float x;
    int wynik_dod = 0;
    int wynik_podz = 0;

    for(int i = 0; i < n; ++i)
    {
        printf("Wpisz liczbe rzeczywista : ");
        scanf("%f", &x);

        if(x / 5 == 0)
        {
            wynik_podz++;
        }
        else if(x > 0)
        {
            wynik_dod++;
        }

    }
    printf("Liczb dodatnich jest : %d\n", wynik_dod);
    printf("Liczb podzielnych przez 5 jest : %d\n", wynik_podz);
}

int main()
{
    int n;

    printf("Wpisz liczbe naturalna : ");
    scanf("%d", &n);

    zad_1(n);


    return 0;
}

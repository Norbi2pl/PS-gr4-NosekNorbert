#include <stdio.h>
#include <stdlib.h>

double ciag(int n)
{
    double wynik, dzial_1, dzial_2;

    dzial_1 = 2 * n + 1;
    dzial_2 = n * n - 4;

    wynik = dzial_1 / dzial_2;

    return wynik;
}

int main()
{
    int n;

    printf("Wpisz liczbe calkowita do n-tego wyrazu :");
    scanf("%d", &n);

    if(n == 2 || n < 0)
    {
        printf("Podana liczba wyzeruje mianownik lub jest mniejsza od 0!!");
        return 1;
    }

    printf("%lf", ciag(n));

    return 0;
}

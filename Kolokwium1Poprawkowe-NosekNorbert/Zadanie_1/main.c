#include <stdio.h>
#include <stdlib.h>

float ciag(int n)
{
    float wynik;

    wynik = (2 * n + 1) / (n * n - 4);

    return wynik;
}

int main()
{
    int n;

    printf("Wpisz liczbe calkowita do n-tego wyrazu :");
    scanf("%d", &n);

    if(n == 2 || n == (-2))
    {
        printf("Podana liczba wyzeruje mianownik!");
        return 1;
    }

    ciag(n);

    return 0;
}

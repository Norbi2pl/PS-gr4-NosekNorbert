#include <stdio.h>
#include <stdlib.h>

int ile_cyfr(int n)
{
    int wynik = 0;

    if(n < 10)
    {
        wynik++;
        return wynik;
    }

    do
    {
        wynik++;

        n = n / 10;
    }
    while(n > 10);

    wynik++;

    return wynik;
}

int main()
{
    int n;

    printf("Wpisz dowolna liczbe : ");
    scanf("%d", &n);

    printf("%d", ile_cyfr(n));


    return 0;
}

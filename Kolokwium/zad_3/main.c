#include <stdio.h>
#include <stdlib.h>

int ile_cyfr(int n)
{
    int wynik = 0;

    for(int i = 0; i < n; ++i)
    {
        if(n < 10)
        {
            wynik++;
        }
        else
        {
            wynik++;
        }

         n = n / 10;

    }
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

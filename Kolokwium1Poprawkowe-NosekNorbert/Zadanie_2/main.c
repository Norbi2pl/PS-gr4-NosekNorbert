#include <stdio.h>
#include <stdlib.h>

int liczby_pierw(int n)
{
    if(n < 2)
    {
        return 0;
    }

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;

    printf("Wprowadz liczbe :");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Podana liczba jest mniejsza od 0!!");
        return 1;
    }

    printf("Liczba %d posiada takie liczby pierwsze bedace jej dzielnikami : \n", n);

    for(int i = 1; i <= n; ++i)
    {
        if(liczby_pierw(i) && n % i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

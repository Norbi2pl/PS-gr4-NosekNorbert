#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int podz = 0;
    int dodat = 0;
    float x;

    printf("Wprowadz liczbe naturalna :");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Podana liczba jest mniejsza od 0!!");
        return 1;
    }

    for(int i = 0; i < n; ++i)
    {
        printf("Wpisz liczbe rzeczywista : ");
        scanf("%f", &x);

        if((int)x % 7 == 0)
        {
            podz++;
        }
        if(n > 0)
        {
            dodat++;
        }
    }

    printf("Liczb dodatnich jest : %d\n", dodat);
    printf("Liczb podzielnych przez 7 jest : %d\n", podz);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int funkcja_zad1(int n)
{
   if(n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}

int funkcja_zad3(int n)
{
    int x;

    for(int k = 1; k < n; k++)
    {
        if(n % k == 0)
            x = k;
    }
    return x;
}

int funkcja_zad5(int n)
{
    int a = 2;
    int wynik = 1;

    for(int i = 1; i <= n; i++)
    {
        wynik = (wynik * a);
    }

    return wynik;
}

int funkcja_zad7(int n,int m)
{
    int wynik = 1;

    for(int i = 1; i <= m; i++)
    {
        wynik = (wynik * n);
    }

    return wynik;
}

float funkcja_zad8(float n)
{
    if(n < 0)
    {
        return 1;
    }

    for(float i = 1; i < n; i++)
    {
        if(i * i == n)
        {
            printf("%f", i);
        }
    }

}



int main()
{


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int funkcja_zad21(int n)
{
    if(n < 0)
    {
        return -1;
    }
    else if(n == 0)
    {
        return 1;
    }
    else
    {
        int wynik = 2 * funkcja_zad21(n - 1) + 5;
        return wynik;
    }
}

int funkcja_zad22(int n)
{
    if(n < 0)
    {
        return -1;
    }
    else if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        int an = funkcja_zad22(n - 1) + 2 * funkcja_zad22(n - 2) + 3;
        return an;
    }
}

/*
int funkcja_zad28(int n, int m)
{
    if(n < 0 || m < 0)
    {
        return -1;
    }
    else if(n > 0 || m == 0)
    {
        return n;
    }
}
*/

int main()
{


    return 0;
}

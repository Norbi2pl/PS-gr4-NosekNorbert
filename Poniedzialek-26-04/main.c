#include <stdio.h>
#include <stdlib.h>

int mniejsza(int *a, int *b)
{
    if(*a<*b)
    {
        return *a;
    }
    else
    {
        return *b;
    }
}

int* mniejsza1(int *a, int *b)
{
    if(*a<*b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void zmien(int num, int* pkt)
{
    *pkt = num;
}

void zad_326()
{
    int num = 0;
    int *pkt = malloc(sizeof(int));
    printf("Wprowadz liczbe wieksza od 0!");
    scanf("%d", &num);
    zmien(num, pkt);
    printf("Zmieniony numer %d\n", *pkt);
}

double *zad_3210()
{
    return malloc(sizeof(double));
}

double* zad_3212(int n)
{
    return malloc(n*sizeof(double));
}

int dlugosc(char *nap)
{
    int i = 0;
    while(nap[i] != 0)
    {
        i++;
    }
    return i;

}

int porownaj(char *nap1, char *nap2)
{
    int i = 0;

    while(nap1[i] != 0)
    {
        if(nap1[i] != nap2[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    char an[] = "abcde";
    char bn[] = "abcda";

    printf("%d", porownaj(an, bn));

    return 0;
}

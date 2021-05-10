#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *nap)
{
    int i = 0;
    while(nap[i] != 0)
    {
        i++;
    }
}

char kopiujn(char *nap1, char *nap2, int n)
{
    int i = 1;
    while(nap2[i] != 0)
    {
        i++;
    }

    for(int j = 0; j < n; ++j)
    {
        nap2[i + j] = nap1[j];
    }

    for(int k = 0;nap2[k] != 0; ++k)
    {
        printf("%c", nap2[k]);
    }
}



int main()
{
    char nap2[] = "abc";
    char nap1[] = "abe";
    int n = 2;

    kopiujn(nap1, nap2, n);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void smallUpper(char *nap)
{
    for(int i=0; nap[i]!=0; i++)
    {
        if(nap[i] >= 97 && nap[i] <= 122) //tablica ASCII :D
        {
            nap[i]-=32;
        }
    }
}

int main()
{
    char nap[50];

    printf("Wpisz wyraz :");
    scanf("%s", &nap);

    smallUpper(nap);
    printf("%s", nap);


    return 0;
}

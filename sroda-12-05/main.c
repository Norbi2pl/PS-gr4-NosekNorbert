#include <stdio.h>
#include <stdlib.h>

int tab_6_2_12(int n, int m, int **t)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            sum += t[i][j];
        }
    }
    return sum;
}


int tab_6_2_15(int n, int ***arr)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            for(int k = 0; k < 100; k++)
            {
                sum += arr[i][j][k];
            }
        }
    }
    return sum;
}

int tab_6_2_18(int ** tab, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d", tab[i][j]);
        }
        printf("\n");
    }
}

int tab_6_2_20(int ** tab, int n, int m)
{
    int a = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            tab[i][j] += a;
            a++;
            printf("%d ,", tab[i][j]);
        }
        printf("\n");
    }
}



int main()
{
    int n = 4;
    int m = 4;
    int **tab;
    tab = malloc(n*sizeof(int*));

    for(int k = 0; k < n; k++)
        tab[k] = malloc(m*sizeof(int));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            tab[i][j] = i + j;
    }

    printf("%d", tab_6_2_20(tab, n, m));

    //6.2.12,15,18,24,26


    return 0;
}

#include <stdio.h>

void insertionsort(int *v, int n)
{
    int i, j, aux;
    for (i = 1; i < n; i++)
    {
        j = i;
        while ((j != 0) && (v[j] < v[j - 1]))
        {
            aux = v[j];
            v[j] = v[j - 1];
            v[j - 1] = aux;
            j--;
        }
    }
}


// o algoritmo do insertionsort é estável, explique.
int main()
{
    int v[10] = {5, 2, 1, 4, 3, 6, 8, 9, 7, 10},
        length = sizeof(v) / sizeof(int);

    insertionsort(v, length);

    for (size_t i = 0; i < length; i++)
    {
        printf("%i\t", v[i]);
    }
    printf("\n");
    return 0;
}
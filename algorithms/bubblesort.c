#include <stdio.h>
#include <stdbool.h>

#define N 10

void bubblesort(int *v, int n)
{
    int i;
    bool troca;
    do
    {
        troca = false;
        for (size_t i = 0; i <= n - 2; i++)
        {
            if (v[i] > v[i + 1])
            {
                troca = true;
                int aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }

    } while (troca == true);
}
int main(int argc, char const *argv[])
{
    int v[N] = {9, 1, 0, 8, 7, 6, 2, 4, 3, 2};

    bubblesort(v, N);
    for (size_t i = 0; i < N; i++)
    {
        printf("%d\t", v[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
#include <stdbool.h>

#define N 11

// intercalado
// div inteira / 2
// é insertionsort não swap
// fazer p v[16] e v[17]
void shellsort(int *v, int n)
{
    int gap = n / 2;
    int aux, j;
    // int c1 = 0, c2 = 0, c3 = 0;
    while (gap > 0)
    {
        // c1++;
        for (int i = gap; i < n; i++)
        {
            // c2++;
            aux = v[i];
            j = i;
            while (j >= gap && v[j - gap] > aux)
            {
                // c3++;
                v[j] = v[j - gap];
                j = j - gap;
            }
            v[j] = aux;
        }
        gap /= 2;
    }

    // printf("c1: %d; c2: %d; c3: %d \ttotal: %d \n", c1, c2, c3, (c1 * c2 * c3));
}

int main(int argc, char const *argv[])
{
    int v[N] = {9, 1, 0, 8, 7, 6, 5, 4, 3, 10, 2};

    shellsort(v, N);
    for (size_t i = 0; i < N; i++)
    {
        printf("%d\t", v[i]);
    }
    printf("\n");
    return 0;
}

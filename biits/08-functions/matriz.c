#include <stdio.h>
#define N 2
#define M 3

void display(int m[][3], int I, int J)
{

    for (size_t i = 0; i < I; i++)
    {
        for (size_t j = 0; j < J; j++)
        {
            printf(" %d", m[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    
    int matriz[N][M] =
        {
            {1, 2, 3},
            {4, 5, 6}};

    display(matriz, N, M);
    return 0;
}

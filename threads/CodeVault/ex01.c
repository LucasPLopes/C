#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <math.h>
#include <stdbool.h>


// gcc -pthread -std=c11 ex01.c -o out -lm && ./out

void *routine()
{
    printf("Hello world from threds\n");
}
int isPrime(int n)
{
    if (n <= 1)
        return -1;
    double square = sqrt(n);
    for (int i = 2; i <= square; i++)
        if (n % i == 0)
            return -1;

    return n;
}

int main(int argc, char const *argv[])
{
    pthread_t thread, thread2;
    int i = 2;

    int n1 = ++i, n2 = ++i;
    if (pthread_create(&thread, NULL, &routine, NULL) != 0)
        return 1;
    if (pthread_create(&thread2, NULL, &routine, NULL) != 0)
        return 2;

    if (pthread_join(thread, NULL) != 0)
        return 3;
    if (pthread_join(thread2, NULL) != 0)
        return 4;

    return 0;
}

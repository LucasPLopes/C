#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

// How to pass arguments to and get results from threads. (pthread_create, pthread_join)
// https://www.youtube.com/watch?v=It0OFCbbTJE

void *routine(void *data)
{

    int *iptr = (int *)data;
    int *iptr2 = (int *)malloc(sizeof(int));
    *iptr2 = 10;
    int times = 5;
    while (times-- > 0)
    {
        sleep(1);
        (*iptr)++;
        (*iptr2) += 2;
        printf("routine data: %d, internal: %d\n", *iptr, *iptr2);
    }
    return iptr2;
}
void myTurn()
{
    int times = 8;
    while (times-- > 0)
    {
        sleep(1);
        printf("myTurn\n");
    }
}

void yourTurn()
{
    int times = 5;
    while (times-- > 0)
    {
        sleep(2);
        printf("yourTurn\n");
    }
}
int main(int argc, char const *argv[])
{
    pthread_t newThread;
    int v = 7;
    int *result;

    pthread_create(&newThread, NULL, routine, &v);
    yourTurn();
    pthread_join(newThread, (void *)&result);
    printf("thread's done, v: %d\tresult: %d\n", v, *result);
    return 0;
}

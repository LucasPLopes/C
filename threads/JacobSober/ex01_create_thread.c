#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *routine(void *data)
{
    int times = 5;
    while (times-- > 0)
    {
        sleep(1);
        printf("routine\n");
    }
    return NULL;
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
    pthread_create(&newThread, NULL, routine, NULL);
    yourTurn();
    pthread_join(newThread, NULL);
    return 0;
}

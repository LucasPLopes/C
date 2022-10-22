#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>


void *entry_point(void *value) {
    printf("Hello from entry point\n");
    int *num = (int * )value;
    printf("Value %d\n", *num);
    return NULL;
}

int main(int argc, char const *argv[])
{
    pthread_t thread;
    int num =123;

    pthread_create(&thread, NULL, entry_point, &num);
    pthread_join(thread, NULL);

    printf("after thread %d\n", num);

    return 0;
}

#include<stdio.h>

void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char const *argv[])
{
    int a = 100, b = 50;

    printf("Before swap a: %d\tb: %d\n",a,b);
    swap(&a,&b);
    printf("After swap a: %d\tb: %d\n",a,b);
    
    return 0;
}

#include<stdio.h>

void display(int *v, int n){
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ",v[i]);
    }
    printf("\n");
    
}

int main(int argc, char const *argv[])
{
    int *v ;
    int v2[10] = {0,1,2,3,4,5,6,7,8,9};
    v = v2;
    display(v, 10);
    display(v2,10);
    return 0;
}

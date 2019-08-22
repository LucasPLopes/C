#include <stdio.h>

int *max(int *a, int *b)
{
    if (*a > *b)
        return (int *)a;
    else if (*b > *a)
        return (int *)b;
    else
        return NULL;
}

int main(int argc, char const *argv[])
{
    int a = 100, b = 50, *c, d = 100, *p;
    c = &d;
    p = max(&a, &b);
    printf("Maximu(a,b) = %d\n", *p);

    p = max(&a, c);

    if (p != NULL)
        printf("Maximum(100,100) = %d\n", *p);
    else
        printf("max(100,100)-> NULL => Segmentation fault\n");
    return 0;
}

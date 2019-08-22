#include <stdio.h>

void cube(int *pa)
{
    *pa = (*pa) * (*pa) * (*pa);
}


int main()
{
    int a = 3, *pa;
    
    pa = &a;
    *pa = 5;

    cube(&a);
    printf("5**3 = %d\n",a);

}
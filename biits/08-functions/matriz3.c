#include <stdio.h>

void display(char matriz[][10], char *msg, int n)
{

    printf("%s\t:", msg);
    for (size_t i = 0; i < n; i++)
    {
        printf(" %s", matriz[i]);
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    char rainbow[][10] =
        {
            "Red", "Orange", "Green", "Indigo", "Purple", "Yellow", "Violet"};
            
    display(rainbow, "Color of raibow", 7);
    return 0;
}

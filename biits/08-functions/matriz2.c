#include<stdio.h>

void display(char * m){
    for (size_t i = 0; m[i] != '\0'; i++)
    {
        printf("%c",m[i]);
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    char  message[] = "Hello world!";
    display(message);

    return 0;
}

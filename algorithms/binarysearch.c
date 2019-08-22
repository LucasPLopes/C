#include <stdio.h>

int binarysearch(int *v, int begin, int end, int value)
{
    while (begin <= end)
    {
        int middle = begin + (end - begin) / 2;
        if (v[middle] == value)
            return middle;
        if (v[middle] < value)
            begin = middle + 1;
        else
            end = middle - 1;
            
        
    }
    return (-1);
}

int main(int argc, char const *argv[])
{
    int v[11] = {0,1,2,3,4,5,6,7,8,9,10};
    int pos = binarysearch(v,0,10,7);

    printf("7 at the position: %i\n",pos);

    return 0;
}

#include<stdio.h>


void selectionsort(int *v, int n){
    int index;
    int aux ;
    for(int i  = 0; i < n; i++)
    {
        index = i;
        for(int j = i +1 ; j< n - 1; j++){
            if(v[j] < v[index])
                index = j;
        }
        if(index != i)
        {
            aux = v[index];
            v[index] = v[i];
            v[i] = aux;
        }
    }
}

int main(){
    int v[10] = {5,2,1,4,3,6,8,9,7,10}, 
        length = sizeof(v)/sizeof(int);

    selectionsort(v,length);

    for (size_t i = 0; i < length; i++)
    {   
        printf("%i\t", v[i]);
    }
        printf("\n");
    return 0;
}
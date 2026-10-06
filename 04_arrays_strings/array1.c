#include<stdio.h>
int main()
{
    int array1[5] = {1,2,3,4,5};
    for(int i = 0 ; i <sizeof array1/ sizeof array1[0] ; ++i){
        printf("%d\t", array1[i]);
    }
    printf("\r\n");
    return 0;
}
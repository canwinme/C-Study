#include<stdio.h>
void swapping(int*, int*);
int main()
{
    int first = 10000;
    int second = 20000;
    swapping(&first,&second);
    printf("changed value2 : %d,%d\r\n",first,second);
    return 0;
}
void swapping(int* first, int* second)
{
    int temp = 0;
    temp = *first;
    *first = *second;
    *second = temp;
    printf("changed value : %d,%d\r\n",*first,*second);
}
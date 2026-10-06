#include<stdio.h>
int main()
{
    int value1 = 1;
    printf("%p\r\n", &value1);
    printf("%lu\r\n", &value1);
    int * ptr_value1 = &value1;
    printf("%p\r\n", ptr_value1);
    printf("%d\r\n", *ptr_value1);
    ptr_value1=NULL;
    return 0;
}
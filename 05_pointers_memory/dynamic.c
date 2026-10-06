#include<stdio.h>
#include<stdlib.h>
int main()
{
    int value1 = 10;
    int *ptr_value2 = (int *)malloc(sizeof(int)*5);
    if(ptr_value2 == NULL)
    {
        puts("There is no extra memory\n");
        return 1;
    }
    ptr_value2[0] = 10; ptr_value2[1] = 20; ptr_value2[2] = 30; ptr_value2[3] = 40; ptr_value2[4] = 50;
    for (int i = 0; i < 5; i++) printf("ptr_value2[%d] : %d\n", i, ptr_value2[i]);
    free(ptr_value2);
    ptr_value2 = NULL;
    return 0;
}

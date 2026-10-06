#include<stdio.h>

int main()
{
    int count = 0;
    for(int i = 1; i <= 24; i++)
    {
        for(int j = 1; j <= 9; j++)
        {
           printf("%d * %d = %d\r\n", i, j, i * j); 
           ++count;
        }
    }
    printf("total count: %d\r\n", count);
    return 0;
}
#include<stdio.h>

int main()
{
    for(int i = 1; i <= 24; i++)
    {
        for(int j = 1; j <= 9; j++)
        {
           printf("%d * %d = %d\r\n", i,  j, i * j); 
        }
        printf("%s\r\n", "--------------------");   
    }
    return 0;

}
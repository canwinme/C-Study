#include<stdio.h>

int main(void)
{
    double apple;
    int bannana;
    int orange;
    apple = 5.0/ 2.0;
    bannana = (double)5 / 2.0;
    orange = 5 % 2;
    printf("apple : %.1lf\n", apple);
    printf("bannana : %d\n", bannana);
    printf("orange : %d\n", orange);
    return 0;
}
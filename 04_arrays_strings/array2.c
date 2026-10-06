#include<stdio.h>
void calculate(const int[],int);
int main(void)
{
    int score[5] = {0,};
    for (int i = 0; i< sizeof score/ sizeof score[0]; i++) scanf("%d", (score + i));
    calculate(score, sizeof score/sizeof score[0]);
    return 0;
}
void calculate(const int array[], int size)
{
    int total = 0;
    double average = 0.0;
    for (int i = 0; i < size; ++i) total += array[i];
    average = (double) total / (double) size;
    printf("Total : %d , avaerage : %lf\r\n", total , average);
}

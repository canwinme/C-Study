#include<stdio.h>
#include<stdlib.h>
int main()
{
    puts("How many subjects?: ");
    int subject = 0;
    scanf("%d", &subject);
    int *ptr_subject = (int *)malloc(sizeof(int) * subject);
    if(ptr_subject == NULL)
    {
        puts("There is no extra memory\n");
        return 1;
    }
    for (int i = 0; i< subject; i++) scanf("%d", (ptr_subject + i));
    int total = 0;
    double average = 0.0;
    for (int i = 0; i < subject; i++) total += ptr_subject[i];
    average = (double)total / subject;
    fprintf(stdout, "Total: %d\n", total);
    fprintf(stdout, "Average: %.2f\n", average);
    free(ptr_subject);
    ptr_subject = NULL;
    return 0;
}
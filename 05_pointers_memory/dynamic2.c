#include<stdio.h>
#include<stdlib.h>
int main()
{
    int count = 0;
    puts("Choose subject count: ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        puts("Enter subject name: ");
        fgets(subject[i], sizeof(subject[i]), stdin);
    }
    int *ptr_value = (int *)malloc(sizeof(int)*count);
    if(ptr_value == NULL)
    {
        puts("There is no extra memory\n");
        return 1;
    }
    for (int i = 0; i < count; i++) printf("ptr_value[%d] : %d\n", i, ptr_value[i]);
    free(ptr_value);
    ptr_value = NULL;
    return 0;
}
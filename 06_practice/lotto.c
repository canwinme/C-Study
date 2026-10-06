#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int count = 0;
    scanf ("%d",  &count);
    int lotto1[count];
    for(int i = 0; i < count; i++) scanf("%d ", lotto[i]);
    int lotto[6] = {0,};
    srand(time(NULL));
    for(int i = 0; i < 6; i++)
    {
        lotto[i] = rand() % 45 + 1;
        for(int j = 0; j < i; j++)
        {
            if(lotto[i] == lotto[j]) { i--; break; }
        }
    }
    for(int i = 0; i < 6; i++) printf("%d ", lotto[i]);
    return 0;
}
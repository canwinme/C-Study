#include<stdio.h>

int main()
{
    int height;
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);
    for(int i = 0; i < height; i++)
    {
        for (int l = 0; l < height - i; l++) printf(" ");
        for (int j = 0; j < i + 1; j++) printf("%s", "*");
        printf("\r\n");
    }
    return 0;
}
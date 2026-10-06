#include<stdio.h>

int main()
{
    char key[5];;
    scanf("%s", key);

    switch(key[0]){
        case 'W':
        case 'w': printf("Up\n"); break;
        case 'S':
        case 's': printf("Down\n"); break;
        case 'A':
        case 'a': printf("Left\n"); break;
        case 'D':
        case 'd': printf("Right\n"); break;
        default: printf("Invalid input\n"); break;
    }
}
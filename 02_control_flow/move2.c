#include<stdio.h>

int main(void)
{
    char key;
    scanf("%c", &key);
    if (key == 'W'|| key == 'w') printf("Up\n");
    else if (key == 'S' || key == 's') printf("Down\n");
    else if (key == 'A' || key == 'a') printf("Left\n");
    else if (key == 'D' || key == 'd') printf("Right\n");
    else printf("Invalid input\n");
}
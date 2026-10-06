#include <stdio.h>

int main(void)
{
    int age;
    double height;

    printf("Enter your age and height: ");
    scanf("%d%lf", &age, &height);
    printf("Age: %d, Height: %.1lfcm\n", age, height);

    return 0;
}
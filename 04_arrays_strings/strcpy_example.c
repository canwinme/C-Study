#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char buffer[BUFSIZ] = {"\0",};
    char str[] = "Hello World";
    strcpy(buffer, str);
    printf("Input String : %s\r\n", buffer);
    return 0;
}s
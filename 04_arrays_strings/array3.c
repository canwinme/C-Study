#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char buffer[BUFSIZ] =  {'\0',};
    printf("%s  ", "Please, input your chat");
    fgets(buffer,BUFSIZ, stdin);
    fprintf(stdout, "%s\r\n", buffer);
    return 0;
}
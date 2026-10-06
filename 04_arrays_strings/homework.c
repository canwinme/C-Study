#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char buffer[BUFSIZ] =  {'\0',};
    puts("input chat");
    fgets(buffer,BUFSIZ, stdin);
    for(int i = sizeof buffer - 2; i >= 0; --i) printf("%c", buffer[i]);
    puts("\r\n");
    return 0;
}
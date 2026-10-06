#include<stdio.h>
int main()
{
    const char words[] = "Love is pain, the pain is sorrow."
    char buffer[BUFSIZ] = {'\0',};
    for (int i = 0; i < sizeof words; ++i) buffer[i] = words[i];
    puts(buffer);
    return 0;
}
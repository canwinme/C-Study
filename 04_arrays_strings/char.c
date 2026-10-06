#include<stdio.h>
int main(){
    const char* str1 = "Apple and\0 Banana";
    char str2[] = {"Apple and\0 Banana"};
    printf("String1 : %s\r\n", str1);
    printf("String2 : %s\r\n", str2);
    return 0;
}
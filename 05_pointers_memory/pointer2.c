#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int count = 5;
int num[6] = {0,};
scanf("count :%d", &count);
for (int i = 0; i < count; i++) scanf("write number : %d", num[i]);
return 0;
}
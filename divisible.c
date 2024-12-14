#include <stdio.h>

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    (num%5==0)?printf("%d is divisible by 5\n",num):
    (num%11==0)?printf("%d is divisible by 11\n",num):
    printf("%d is not divisible by 5 and 11\n",num);
    return 0;
}
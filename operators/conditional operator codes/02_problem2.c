#include <stdio.h>
#include <conio.h>
int main(){
    int num; // variable declaration
    printf("enter the number:");
    scanf("%d", &num);
    (num%2==0) ? (printf("number is even")) : (printf("number is odd")); 
    //conditional operator is used to check weather the number is even or odd
    return 0;
}
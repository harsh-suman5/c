#include <stdio.h>

int main(){
    int age;
    printf("enter your age: ");
    scanf("%d",&age);
    (age>=18)?printf("%d is eligible\n",age):printf("%d is not eligible\n",age);
    return 0;
}
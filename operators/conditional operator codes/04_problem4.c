#include <stdio.h>

int main(){
    int a, b; // variable declared
    printf("enter any two number: "); // printing statement
    scanf("%d%d", &a, &b); // user defined statement
    (a>b) ? (printf("a is maximum")) : (printf("b is maximum"));
    // conditions are applied to check weather the number are maximum
    return 0;
}
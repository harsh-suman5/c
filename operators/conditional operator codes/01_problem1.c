#include <stdio.h>
int main(){
    int a,b; // varible declaration
    printf("enter any two number:\n"); 
    scanf("%d%d", &a, &b);
    (a>= 0) ? (printf("a is possitive")) : (printf("b is  possitive")); // conditional statement
    return 0;
}
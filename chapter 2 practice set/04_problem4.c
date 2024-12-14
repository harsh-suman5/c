#include<stdio.h>
int main()
{
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;
    float a = 3*x/y-z+k;
    // 3*x/y - z+k;
    // 6/y - z+k;
    // 2-z+k;
    // -1+k 
    // -1 + 1 
    // 0
    printf("the value of the expression is = %f", a);
    return 0;
}
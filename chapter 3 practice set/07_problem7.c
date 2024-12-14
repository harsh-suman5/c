#include <stdio.h>

int main(){
    float d, h1, h2;
    printf("enter the value to find the area of quadrilateral:\n");
    scanf("%f%f%f", &d, &h1, &h2);
    float area = 0.5*d*(h1+h2);
    printf("the area of quadrilateral are:%.2f\n", area);

    return 0;
}

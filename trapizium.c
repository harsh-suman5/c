// to find the area of trapizium
#include <stdio.h>

int main() {
    float base1, base2, height, area; // floating data type and variable declaration 


    printf("Enter the length of the first base: ");
    scanf("%f", &base1); 

    printf("Enter the length of the second base: ");
    scanf("%f", &base2);

	    printf("Enter the height of the trapezium: ");
    scanf("%f", &height);


    area = 0.5 * (base1 + base2) * height;


    printf("The area of the trapezium is: %.2f\n", area);

    return 0;
}


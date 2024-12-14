#include <stdio.h>

int main(){
    int year; // variable given
    printf("enter year: "); // printing statement
    scanf("%d", &year); // input function for the user
    ((year%4==0) && (year%100!=0)) ? (printf("this is a leap year")) : (printf("this is not a leap year"));
    // conditional operator is used to check weather the inputed year is leap year or not
    return 0; // return statement
}
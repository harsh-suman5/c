#include<stdio.h>
int main()
{
    int year ;
    printf("enter the required year:\n");
    scanf("%d",year);
    if(year%4==0 && year%400==0 && year%100!=0)
    {
        printf("year is leap year \n");
    }
    else {
        printf("year is not a leap year");
    }
         
     return 0;
}
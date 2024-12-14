#include<stdio.h>
#include <conio.h>
int main()
{
    float income;
   
    float tax;
    printf("income: \n");
    scanf("%f", &income);
    
    if (income<250000)
    {
        tax = 0;
    }
    else if (income<=500000 && income>=250000) {
        tax = (income-250000)*0.5;
       
    }
    else if(income<=1000000 && income>=500000){
        tax = (income-500000)*0.2;
    }
     else {
        tax = (income-1000000)*0.3;
    }
     printf("your income tax is : %.3f",tax);

     return 0;
}
#include <stdio.h>
int main()
{
    int age = 45;
    if (age>60)
    {
        printf("you are eligible for vote and you are a senior citizen\n");
    }
    else if(age>18)
    {
        printf("you can vote\n");

    }
    else{
        printf("you cannot vote");
    }
    
}
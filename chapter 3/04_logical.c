#include <stdio.h>
int main()
{
    int a = 0; int b = 1;
     printf("the value of a and b is %d\n", a&&b);
      printf("the value of a or b is %d\n",a||b);
       printf("the value of not(a) is %d\n", !a);
        // is same as writing ....
    if(a){
        if(b){
            printf("both are true");
        }
    }
    return 0;
}
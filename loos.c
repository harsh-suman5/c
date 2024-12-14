#include <stdio.h>
#include <conio.h>
int main(){
    /*for(initialization;condtion;updation){
    statement
    }*/
   int i;
 int sum=0;
   for(i=1;i<=200;i++){
    printf("%d ",i);
    sum=sum+i;
   }
   printf("\nthe sum are: %d",sum);
   
    return 0;
}
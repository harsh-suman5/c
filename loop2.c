#include<stdio.h>
#include <conio.h>
void main(){
int n,i;
printf("enter the number: ");
scanf("%d",&n);

for(i=0;i<1;i++)
{
if(n%2==0){

printf("%d is even",n);

}

else{
	printf("%d is odd",n);
	
}
}
getch();
}

#include <stdio.h>
int main(){
	int a = 10;
	int b = 5;
	int sum,sub,product,div,remainder;
	sum = a+b;
	sub =a-b;
	product = a*b;
	div= b/a;
	remainder = b%a;
	printf("the arithmetic result of the expression is:%d\n%d\n%d\n%d\n%d\n",sum,sub,product,div,remainder);
	return 0;

}

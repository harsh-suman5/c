// infinity multiplication source code
#include <stdio.h>
int main()
{
	int n;
	
	printf("enter the number:\n");
	scanf("%d", &n);
	int i = 1;
	do{
		
		printf("%d x %d = %d\n", n, i, n * i);
		i++;
	}
	while(1);
	return 0;
}

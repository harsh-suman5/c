#include <stdio.h>
#include <string.h>
int main()
{
	char password[] = "secret";
	char input[20];
	
	do{
		printf("enter the password:\n");
		scanf("%s", input);
		
	}
	while(strcmp(input, password)!=0);
	printf("access granted!\n");
	return 0;
}

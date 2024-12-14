#include <stdio.h>
int main()
{
	int num;
	do{
		printf("enter the number:\n");
		scanf("%d", &num);
		if(num > 0)
		{
			printf("number is possitive. \n");
		}
		else if(num < 0 && num != -999)
		{
			printf("number is nigative. \n");
		}
	}
	while(num != -999);
	{
		printf("existing the program. \n");
	}
	return 0;
}

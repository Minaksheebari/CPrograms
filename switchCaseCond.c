#include<stdio.h>

int main()
	{
	int value;
	
	printf("Enter any number from 10,100,1000: ");
	scanf("%d",&value);
	
	switch(value)
	{
		case 10: printf("Number is TEN");
			 break;
		case 100: printf("Number is HUNDRED");
			 break;
		case 1000: printf("Number is THOUSAND");
			 break;
		default: printf("Entered wrong input");
	}
	
	return 0;
}


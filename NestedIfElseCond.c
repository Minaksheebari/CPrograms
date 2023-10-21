#include<stdio.h>

int main()
{
	int num1,num2;
	
	printf("Enter First Number: ");
	scanf("%d",&num1);
	
	printf("Enter Second Number: ");
	scanf("%d",&num2);
	
	if(num1 != num2)
	{
		printf("Number1 & Number 2 are NOT EQUAL.\n");
		if(num1>num2)
		{
			printf("Number 1 is GREATER THAN number 2. ");
		}
		else
		{
			printf("Number 1 is LESS THAN number 2.");
		}
	}
	else
	{
		printf("Number 1 & Number 2 are EQUAL");
	}
	
	return 0;
}


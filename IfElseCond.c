#include<stdio.h>

int main()
{
	int age;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("Eligible for Voting..!!");
	}
	else
	{
		printf("NOT Eligible for Voting..!!");
	}
	return 0;
}


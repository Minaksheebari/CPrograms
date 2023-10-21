#include<stdio.h>

int main()
{
	int age;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if(age>=18){
		printf("You are Adult. Now you can Vote ..!!");
	}
	if(age<18){
		printf("Wait more for Voting Right..!!");
	}

	return 0;
}


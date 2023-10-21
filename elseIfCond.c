#include<stdio.h>

int main()
{
	int value;
	
	printf("Enter your Number from 1 to 5: ");
	scanf("%d",&value);
	
	if(value==1)
	{
		printf("You have entered ONE");
	}
	else if(value==2)
	{
		printf("You have entered TWO");
	}
	else if(value==3)
	{
		printf("You have entered THREE");
	}
	else if(value==4)
	{
		printf("You have entered FOUR");
	}
	else if(value==5)
	{
		printf("You have entered FIVE");
	}
	else
	{
		printf("Oopss...you have entered something else..!!");
	}
	
	return 0;  

}


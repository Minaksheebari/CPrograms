#include<stdio.h>

int main()
{
	double num,sum=0;

	do{
		printf("Enter number: ");
		scanf("%lf",&num);
		sum+=num;
	}while(num != 0.0);
	
	printf("\n Sum = %lf",sum);
	
	
	return 0;
}


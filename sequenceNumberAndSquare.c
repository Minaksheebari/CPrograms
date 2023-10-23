#include<stdio.h>

int main()
	{
	
	//Print numbers
	int num,val,i,sum=0;
	
	for(num=1;num<=10;++num)
	{
		printf("%d ",num);
	}
	
	
	//Finding square
	printf("\nEnter number to get square of number: ");
	scanf("%d",&val);
	
	for(i=1;i<=val;i++){
	    sum=sum + val;
	}
	printf("Square is: %d",sum);
	
	return 0;
}


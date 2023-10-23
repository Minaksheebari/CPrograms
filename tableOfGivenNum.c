#include<stdio.h>

int main()
{
	int tnum,i=1;
	
	printf("\n******* Table *******\n");
	printf("Enter number to print table: ");
	scanf("%d",&tnum);
	
	printf("Table of %d\n",tnum);
	while(i<=10)
	{
		printf("%d X %d = %d \n",tnum,i,(tnum*i));
		i++;
	}
	
	return 0;
}


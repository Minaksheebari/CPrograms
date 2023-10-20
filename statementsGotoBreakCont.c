#include<stdio.h>

int main(){
	int i;

	printf("Before for loop\n");

	for(i=1;i<=10;i++)
	{
		printf("%d ", i);
		if(i==5){
		      continue;
		}
		if(i==8){
			break;
		}
		if(i==10)
			goto there;
	}
	
	there:
		printf("\n10th Iteration");
		printf("\nThank you for running program..!!");
	printf("\nAfter for loop");
	
return 0;
}


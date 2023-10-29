#include<stdio.h>

int main()
{
	int n,i,c=0;
	
	printf("Enter a positive number: ");
	scanf("%d",&n);

	//remenber to set value of i=1.
	for(i=1;i<=n;i++){
	       if(n%i==0){
		   c++;
	       }
	}
	if(c==2){
		printf("%d is a prime number.", n);
	}
	else{
		printf("%d is NOT a prime number.", n);
	}

	return 0;
}


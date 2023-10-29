#include<stdio.h>

int main()
{
	 int n,i;
	 unsigned long long fact =1;
	 
	 printf("Enter positive number: ");
	 scanf("%d", &n);

	 //Check if user entered negative integer
	 if(n<0)
		printf("Wrong input..!! Enter Positive number.");
	 else{
		for(i=1;i<=n;i++){
			fact *= i;  	 // fact = fact * i
		}
		printf("Factorial of %d = %llu", n , fact);
	 }   
	return 0;   
}


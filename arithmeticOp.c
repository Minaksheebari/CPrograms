#include<stdio.h>

int main(){
	int num1,num2;
	
	printf("Enter first number: ");
	scanf("%d",&num1);
	
	printf("Enter second number: ");
	scanf("%d",&num2);
	
	printf("Addition of %d and %d is: %d\n",num1,num2,num1+num2);
	printf("Subtraction of %d and %d is: %d\n",num1,num2,num1-num2);
	printf("Multiplication of %d and %d is: %d\n",num1,num2,num1*num2);
	printf("Division of %d and %d is: %d\n",num1,num2,num1/num2);
	printf("Modulus of %d and %d is: %d",num1,num2,num1%num2);	
return 0;
}

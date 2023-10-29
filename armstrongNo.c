#include<stdio.h>

int main()
{
	int n, original, rem,res=0;
	
	printf("Enter 3 digit pasitive number: ");
	scanf("%d",&n);
	original = n;

	while(original != 0){
		//rem contains the last digit
		rem = original % 10;
		res = res + rem * rem * rem;
		//removing last digit from the original number
		original = original / 10;
	}
	//now check both using if
	if(res==n)
		printf("%d is a Armstrong Number.",n);
	else
		printf("%d is NOT Armstrong Number.",n);

	return 0;
}


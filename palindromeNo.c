#include<stdio.h>

int main()
{
	int n, rev = 0, rem, original;
	
	printf("Enter any positive number: ");
	scanf("%d",&n);
	original = n;
	//reverse the given number
	while(n != 0){
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	//now check both using if
	if(original==rev)
		printf("%d is a Palindrome Number.",original);
	else
		printf("%d is NOT a Palindrome Number.",original);

	return 0;
}


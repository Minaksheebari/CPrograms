#include<stdio.h>

int main()
{
	 int n,i;
	 //initialize 1st and 2nd term
	 int t1=0, t2=1;

	 //initialize third term
	 int nextTerm = t1 + t2;

	 //get number of terms from user
	 printf("Enter the number of terms: ");
	 scanf("%d", &n);

	 //print first two terms
	 printf("Fibonacci series: %d %d ",t1,t2);

	 //print 3rd term
	 for(i=3;i<=n;i++){
	 printf("%d ",nextTerm);
	 t1=t2;
	 t2=nextTerm;
	 nextTerm = t1+ t2;
	 }
     
	return 0;     
}


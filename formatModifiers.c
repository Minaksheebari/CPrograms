#include<stdio.h>

void main(){
	int a;
	char name[10];
	double num;

	printf("Enter integer value for A= ");
	scanf("%d",&a);
	printf("A= %d\n",a);
	
	printf("Enter string name = ");
	scanf("%s",&name);
	printf("R= %s\n",name);
	
	printf("Enter decimal number = ");
  	scanf("%lf", &num); 
  	printf("%lf\n", num);
	
}



#include<stdio.h>

int main()
{
	//compile time array initialization.
	int arr1[] = {5,10,15,20,25,30};

	//run time array initialization
	int arr2[4];
	int i,j;


	printf("Enter 4 elements into array: \n");
	for(i=0;i<4;i++){
		printf("Enter a[%d] : ",i);
		scanf("%d",&arr2[i]);
	}
	//printing compile time aaray
	printf("Compile time array: ");
	for(j=0;j<6;j++){
		printf("%d ", arr1[j]);
	}
	//printing run time aaray
	printf("\nRun time array: ");
	for(j=0;j<4;j++){
		printf("%d ", arr2[j]);
	}
	
	//changes in arr1 i.e. compile time
	arr1[2] = 18;
	//printing after changes results
	printf("\nAfter changes results: ");
	for(j=0;j<6;j++){
		printf("%d ", arr1[j]);
	}
	//printing even numbers in array
	printf("\nEven numbers are: ");
	for(i=0;i<6;i++){
		if(arr1[i]%2==0){
		printf("%d ",arr1[i]);
		}
	}

return 0;
}


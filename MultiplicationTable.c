#include<stdio.h>
#define COLMAX 10
#define ROWMAX 10

int main()
{
	int row, col, y;

	printf("             MULTIPLICATION TABLE            \n");
	printf("-------------------------------------------------\n");
	
	//outer loop
	do{
		col=1;
		//inner loop
		do{
			row=1;
			y = row * col;
			printf("%4d", y);	
			// the width of number printed is 4 space width. This is used to align the printed numbers.
			col += 1;

		}while(col<=COLMAX);
		printf("\n");
		row = row + 1;

	}while(row<=ROWMAX);
	printf("-----------------------------------------------\n");

	return 0;
}


#include <stdio.h>
int main() 
{
 int n,i,j;

 printf("Enter the number of rows in pyramid of stars you want to see ");
 scanf("%d",&n);
 for (i=n; i>=1; i--) 
 {
    for (j=1; j<=i; j++) 
    {
        printf(" * ");
    }
    printf("\n");
 }
 return 0;
}

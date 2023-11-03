 #include <stdio.h>
int main() 
{
 int n,i,j,k,samp=1;
 
 printf("Enter the number of rows in pyramid of stars you want to see ");
 scanf("%d",&n);
 for (i=n; i>=1; i--) 
 {
    for (k=samp; k>=0; k--) 
    {
       printf(" "); // Put only 1 space
    }
    for (j=i; j>=1; j--) 
    {
       printf("*");
    }
    samp = samp + 1;
    printf("\n");
 }
return 0;
}

#include<stdio.h>
int main()
{
   int i,j,term;
  
   printf("Enter the number of row you want to see");
   scanf("%d",&term);
   for (i = term ; i >= 1 ; i--)
   {
       for(j = 1 ; j <= i ; j++)
       {
           printf("%d",i);
       }
       printf("\n");
   }
   getch();
   return 0;
}

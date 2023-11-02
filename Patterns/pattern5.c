 #include<stdio.h>
 
int main()
{
      int n, j, i, num = 1, space;
      

      printf("Enter the number of rows in pyramid you want to see ");
 
      scanf("%d",&n);
 
      space = n - 1;
 
      for ( i = 1 ; i <= n ; i++ )
      {
          num = i;
 
          for ( j = 1 ; j <= space ; j++ )
              printf(" ");
 
          space--;
 
          for ( j = 1 ; j <= i ; j++ )
          {
              printf("%d", num);
              num++;
          }
          num--;
          num--;
          for ( j = 1 ; j < i ; j++)
          {
              printf("%d", num);
              num--;
          }
          printf("\n");
 
      }
      getch();
      return 0;
}

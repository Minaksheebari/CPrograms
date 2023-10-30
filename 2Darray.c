#include<stdio.h>
int main()
{
    int n, m, i, j;
    printf("Enter number of students : ");
    scanf("%d",&n);
    printf("Enter number of subjects : ");
    scanf("%d",&m);
    int student [n][m];
    int sum = 0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("Enter student %d subject %d marks : ",i+1, j+1);
            scanf("%d",&student[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {   
        sum = 0;
        for(j=0; j<m; j++)
        {
            sum = sum + student[i][j];
        }
        printf("Total marks of %d student is : %d\n",i+1, sum);
    }
    return 0;
}


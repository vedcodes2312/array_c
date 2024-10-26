//sum  of two 3x3 matrices
/*NOTE:This program is for 3x3 matrix but you can extend it to matrices of 
higher or lower order by changing m and n 

AUTHOR:VED VYAS       GITHUB:vedcodes2312                         */

#include<stdio.h>//preprocessor directive standard i/p o/p header file
#include<stdlib.h>//standard library
int main()
{
system("cls");   
int m=3,n=3;
int a[m][n],b[m][n],sum[m][n];
printf("enter elements of first matrix A:\n");
 for (int i = 0; i < m; i++) //input elements of the matrix
  {
        for (int j = 0; j < n; j++) 
        {
            printf("element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

     
printf("enter elements of second matrix B:\n");
    for (int i = 0; i < m; i++) //input elements of the matrix
  {
        for (int j = 0; j < n; j++) 
        {
            printf("element [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
printf("\nmatrix A\n"); //printing first matrix
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("[%d][%d]=%d\t ",i,j, a[i][j]);
        }
        printf("\n");
    }

     printf("\nmatrix B\n"); //printing the second matrix
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("[%d][%d]=%d\t ",i,j, b[i][j]);
        }
        printf("\n");
    }

    //addition of matrices A  and B

    for (int i = 0; i < m; i++)
     {
        for (int j = 0; j < n; j++) 
        {
            sum[i][j]= a[i][j]+ b[i][j];
        }
    }
//printing the result matrix after summation
printf("sum of matrices A and B that is A+B\n");
for (int i = 0; i < m; i++) 
{
        for (int j = 0; j < n; j++) 
        {
            printf("[%d][%d]=%d\t ",i,j, sum[i][j]);
        }
        printf("\n");
}
return 0;

} //end of program
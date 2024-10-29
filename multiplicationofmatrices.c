/*              multiplication of matrices 
let two matrices be A and B
A has order pXq and B has order qXr then on multiplying A and B we get C matrix
C=AxB of order pXr
NOTE: NUMBER OF COLUMNS IN FIRST MATRIX,here 'A'=NUMBER OF ROWS IN SECOND MATRIX,here'B' 
author: vedcodes2312                                                                      */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int r1,c1,r2,c2;
    //for the first matrix
    printf("Enter the number of rows in the first matrix:\n");
    scanf("%d",&r1);
    printf("Enter the number of columns in the first matrix:\n");
    scanf("%d",&c1);
    //for the second matrix
    printf("Enter the number of rows in the second matrix:\n");
    scanf("%d",&r2);
    printf("Enter the number of columns in the second matrix:\n");
    scanf("%d",&c2);

    if(c1 != r2)
    {
        printf("matrices cannot be multiplied");
        return 0;
    }
    int a[r1][c1],b[r2][c2],product[r1][c2];
    //first matrix
    //entering elements 
    printf("Enter the elements of the first matrix:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
          printf("element at[%d][%d]",i,j);
          scanf("%d",&a[i][j]);
        }
    }


    //printing first matrix
    printf("first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) 
        {
            printf("[%d][%d]=%d\t ",i,j, a[i][j]);
        }
        printf("\n");
    }

    //second matrix
    //entering  elements 

    printf("Enter the elements of the second matrix:\n");
for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
          printf("element at[%d][%d]",i,j);
          scanf("%d",&b[i][j]);
        }
    }


    //printing second matrix
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) 
        {
            printf("[%d][%d]=%d\t ",i,j, b[i][j]);
        }
        printf("\n");
    }

    
 //multiplication of matrices
 for(int i=0;i<r1;i++)
 {
    for(int j=0;j<c2;j++)
    {
        product[i][j]=0;
    }
 }
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c2;j++)
    {
        for(int k=0;k<c1;k++)
        {
            product[i][j]+=a[i][k]*b[k][j];
        }
    }
  }
//printing the final result
printf("\n result matrix \n");
 for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c2;j++)
    {
       printf("[%d][%d]=%d\t",i,j,product[i][j]);
    }
    printf("\n");
  }
return 0;

}    










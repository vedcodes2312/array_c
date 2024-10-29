/* scalar multiplication of a constant on a matrix
say a matrix A is multiplied by constant 'k' then new matrix B=kA
default for 3x3 matrix,but can be for any order just by changing values of m and n
AUTHOR: vedcodes2312                                                                 */

#include<stdio.h>        //preprocessor directive with header file
#include<stdlib.h>  //standard library
int main()      //execution starts from here
{
system("cls");
int m=3,n=3,scalar;    
int matrix[m][n];
printf("enter elements of the matrix:\n");
 for (int i = 0; i < m; i++) //input elements of the matrix
  {
        for (int j = 0; j < n; j++) 
        {
            printf("element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

 printf("\noriginal matrix:\n"); //printing the original matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) 
        {
            printf("[%d][%d]=%d\t ",i,j, matrix[i][j]);
        }
        printf("\n");
    }

//input the value of scalar
   printf("\nenter the scalar value: ");
   scanf("%d",&scalar);

for (int i = 0; i < m; i++) //input elements of the matrix
  {
        for (int j = 0; j < n; j++) 
        {
            matrix[i][j] *= scalar; //matrix[i][j]= matrix[i][j] * scalar

        }
  }
  printf("\n new matrix after scalar multiplication:\n"); //printing the new matrix

 for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
         {
            printf("[%d][%d]=%d\t ",i,j, matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//end of program

   
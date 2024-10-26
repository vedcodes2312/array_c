//Program to print transpose of a matrix,3x3
/*NOTE:This program is for 3x3 matrix but you can extend it to matrices of 
higher order by changing m and n 

AUTHOR: @vedcodes2312                         */

#include<stdio.h>//preprocessor directive with header file
#include<conio.h>//console input output header file
#include<stdlib.h>//standard library
int main()//execution starts from here
{
system("cls");
int m=3,n=3;    
int matrix[m][n],transpose[m][n];
printf("enter elements of the matrix:\n");
 for (int i = 0; i < m; i++) //input elements of the matrix
  {
        for (int j = 0; j < n; j++) 
        {
            printf("element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; i++) //calculate transpose
     {
        for (int j = 0; j < n; j++)
         {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\noriginal matrix:\n"); //printing the original matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("[%d][%d]=%d\t ",i,j, matrix[i][j]);
        }
        printf("\n");
    }
    
 printf("\ntranspose of matrix:\n"); //printing the transpose matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("[%d][%d]=%d\t ",i,j, transpose[i][j]);
        }
        printf("\n");
    }
  

return 0;

}


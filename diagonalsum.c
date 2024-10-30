//sum of diagonal elements      github: vedcodes2312
/* let a matrix B of order pXq , if p=q=n, then order is nXn,such matrix is known as a square matrix*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int r,c;
    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d %d",&r,&c);
    if(r != c)
    {
        printf("The matrix is not a square matrix.\n");
    }
    int a[r][c];
    int diagsum1=0;    //for principal/primary diagonal
    int diagsum2=0;     //for secondary diagonal
    int totaldiagsum=0;         //for combine sum of elements of both diagonals
    //input elements
    printf("\n enter  the elements of the matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter element a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    //printing the matrix
     printf("\n the matrix \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("[%d][%d]=%d\t",i,j,a[i][j]);
        }
   printf("\n");
}

//primary or principal or main or leading diagonal sum
for(int i=0;i<r;i++)
{
    diagsum1 = diagsum1 + a[i][i]; //diagsum1 += a[i][i]
}
//secondary diagonal or anti-diagonal or trailing diagonal sum

for(int i=0;i<r;i++)
{
    diagsum2=diagsum2 + a[i][c-i-1]; //diagsum2 += a[i][c-i-1]
}


totaldiagsum = diagsum1 + diagsum2;

/* if matrix size is odd,like for 3x3 square matrix,9 elements in overall matrix,
subtract the central element which was added twice     */

if(r % 2 != 0)
{
    totaldiagsum = totaldiagsum - a[r/2][r/2]; //totaldiagsum  - =  a[r/2][r/2]

}

printf("sum of elements of principal  diagonal is %d\n",diagsum1);
printf("sum of elements of secondary diagonal is %d\n",diagsum2);
printf("combine sum of both diagonal elements is %d\n",totaldiagsum);

return 0;

}
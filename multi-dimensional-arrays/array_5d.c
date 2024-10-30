//five dimensional array      GITHUB:vedcodes2312

//array of 4D arrays

#include<stdio.h>
#include<stdlib.h>
int main()
{

    system("cls");
    //initializing a 3x3x3x3x3 array

    int a[3][3][3][3][3];
    int b=1; //to fill array with values
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
          {
            for(int m=0;m<3;m++)
          {
          for(int n=0;n<3;n++)
          {
            a[i][j][k][m][n]=b;
            b++;
          }
        }
      }
     }
    }
    //printing the array
    printf("five dimensional array\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
            for(int m=0;m<3;m++)
            {
        for(int n=0;n<3;n++)
            {
                printf("[%d][%d][%d][%d][%d]=%d\t",i,j,k,m,n,a[i][j][k][m][n]);
            }
            printf("\n");
        }
           printf("\n");
    }
    printf("\n");
    }
    printf("\n");
    }
    return 0;
}
            
            
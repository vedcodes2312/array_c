//three dimensional array      GITHUB:vedcodes2312
 
//array of 2D arrays

#include<stdio.h>
#include<stdlib.h>
int main()
{

    system("cls");
    //initializing a 3x3x3 array

    int a[3][3][3];
    int b=1; //to fill array with values
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          for(int k=0;k<3;k++)
          {
            a[i][j][k]=b;
            b++;
          }
        }
    }
    //printing the array
    printf("three dimensional array\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("[%d][%d][%d]=%d\t",i,j,k,a[i][j][k]);
            }
            printf("\n");
        }
           printf("\n");
    }
    return 0;
}
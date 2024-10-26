//basic 2d array program
//printing of 2d array with indexing
//syntax: data_type array_name[rows_size][column_size]
/*     matrix of 3 rows and 2 columns
               column1  column2
      row1     [0][0]    [0][1]         1   2                                                          
      row2     [1][0]    [1][1]         3   4  
      row3     [2][0]    [2][1]         5   6               */


#include<stdio.h>
int main()
{
int array[3][2]={ {1,2},{3,4},{5,6} };
                     
int row,column;

 for(row=0;row<3;row++)
{
    for(column=0;column<2;column++)
    {
       printf("array[%d][%d]=%d\n",row,column,array[row][column]);
    }  
}       
return 0;         
}
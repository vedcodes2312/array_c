//sum using  array 
#include<stdio.h>//preprocessor directive and header file
int main()//body of the program
{
    int array[5];
    int i,sum=0;
    printf("array size is 5 elements\n");
    printf("\n enter elements \n");
    for(i=0;i<5;i++)
    {
      
        scanf("%d",&array[i]);
        sum+=array[i];//sum = sum + array[i]
        
        
    }
    
    printf("sum using array is = %d",sum);
    return 0;
}
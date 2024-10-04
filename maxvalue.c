//max value using array
#include<stdio.h>
int main()
{
    int array[7];
    int i,max=0;
    printf("enter array elements max upto 7\n");
    for(i=0;i<7;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>max)
        {
            max=array[i];

        }
    }
    printf("max value is %d",max);
    return 0;
}
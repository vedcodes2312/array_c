/* sum of odds and sum of even values
take an array of integer data type of size 5,scan the values from the user. now print the output like
for example :
values in array : 1 2 3 4 5 {even value are 2,4 odd are 1,3,5 for reference }
sum of odd values : 9
sum of even values : 6                                            */

#include<stdio.h>//preprocessor directive,header file
int main()//heart and soul of the code
{
    int a[5];
    int i,evensum=0,oddsum=0;
    printf("enter array element values not more than 5 values\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(a[i] % 2 == 0)
        {
           evensum = evensum + a[i]; //evensum+=a[i]
        }
        else
        {
            oddsum = oddsum + a[i];//oddsum+=a[i]

        }

    }

    printf("values in array:\n");
    for(i=0;i<5;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("\n");
    printf("sum of odd values: %d\n",oddsum);
    printf("sum of even values: %d\n",evensum);
    return 0;

}
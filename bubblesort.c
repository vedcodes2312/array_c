//bubble sort in c of 7 numbers

#include<stdio.h>//preprocessor directive
#include<conio.h>//console input output header file
#define SIZE 7
int main()
{
int a[SIZE],temp;
int i,j;



for(i=0;i<SIZE;i++)
{
    printf("\n eneter value of a[%d]\t",i);
    scanf("%d",&a[i]);
}
printf("\n series before sorting\n");
for(i=0;i<SIZE;i++)
{
    printf("\t%d",a[i]);
}
for(i=0;i<SIZE;i++)
{
    for(j=0;j<SIZE-1;j++)
     {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;    
        }
     }//end of inner for loop
}//end of outer for loop
printf("\n series after sorting \n");
for(i=0;i<SIZE;i++)
{
    printf("\t%d",a[i]);
}
getch();
return 0;
}
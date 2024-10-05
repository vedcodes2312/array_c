//fibonacci series using array
#include<stdio.h>
int main()
{
    int i,n,a[10];
    a[0]=0;
    a[1]=1;
    printf("enter n \n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d \t",a[0]);
    }

    if(n==2)
    {
        printf("%d \t %d \t",a[0],a[1]);

    }
    if(n>2)
    {
       printf("%d \t %d \t",a[0],a[1]);
       for(i=2;i<n;i++)
       {
        a[i]=a[i-1]+a[i-2];
        printf("%d \t",a[i]);
       }

    }
}
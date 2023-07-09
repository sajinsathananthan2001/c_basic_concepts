//Program to print multiplication tables in C Programming
 
#include<stdio.h>
 
int main()
{
    int i,t,n;
    printf("\nEnter The Table Name : ");
    scanf("%d",&t);//2
    printf("\nEnter The Limit      : ");
    scanf("%d",&n);//5
    for(i=1;i<=n;i++)
    {
        printf("\n%d X %d = %d",t,i,(t*i));
    }
    return 0;
}
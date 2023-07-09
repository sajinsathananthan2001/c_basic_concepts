//doWhile loop in c 


#include<stdio.h>
int main()
{
    int i=0,n;
    printf("\nEnter The Limit : ");
    scanf("%d",&n);
    do
    {
       printf("\n%d",i);
       i+=2; //i=i+2
    }while(i<=n);
    return 0;
}
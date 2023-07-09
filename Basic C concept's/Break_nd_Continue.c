//Break & Continue
#include<stdio.h>
int main()
{
    int i,n,num,sum=0;
    printf("\nEnter The Limit : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("\nEnter The Number : ");
        scanf("%d",&num); //1 2 3 0 5
        if(num==0)
            continue;
       sum+=num;
    }
    printf("\nTotal : %d",sum);
    return 0;
}
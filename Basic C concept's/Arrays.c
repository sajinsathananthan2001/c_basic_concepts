//Arrays
#include<stdio.h>
int main()
{
    int i,a[100],n;
    printf("\nEnter The Limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter The Value : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
 
    }
    return 0;
}
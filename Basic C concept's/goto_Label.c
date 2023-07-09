//goto label
#include<stdio.h>
 
int main()
{
    int i=0;
    joes:
    printf("\n%d",i);//0 1 2 3 4
    i++;//1 2 3 4 5
    if(i!=5)
    {
        goto joes;
    }
    printf("\nEnd");
    return 0;
}
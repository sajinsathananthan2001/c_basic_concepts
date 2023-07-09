//Dangling Pointer
#include<stdio.h>
#include<stdlib.h>
 
int * value()
{
    int a=10;
    return &a;
}
 
int main()
{
    int *ptr=NULL;
    ptr=value(); //&a
    printf("%d",*ptr);
    return 0;
}
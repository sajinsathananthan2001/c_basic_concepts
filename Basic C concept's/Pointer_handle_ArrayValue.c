#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int *p;
    //{10,      20,     30,     40,     50}
    //{6356712,6356716,6356720,6356724,6356728}
    p=&a;
 
 
    printf("\nSize of integer    : %d",sizeof(int)); //4
    printf("\nSize of a          : %d",sizeof(a));  //20
    printf("\nLength of a        : %d",sizeof(a)/sizeof(int));//5
    printf("\nAddress of A       : %d",&a);//6356712
    printf("\nValue  of P        : %d",p);//6356712
 
    p++;
    printf("\nValue  of P        : %d",p);//6356716
    printf("\nValue  of *P       : %d",*p);//20
 
    printf("\nValue  of *++P        : %d",*++p);//30
    printf("\nValue  of ++*P        : %d",++*p);//31
 
    return 0;
}
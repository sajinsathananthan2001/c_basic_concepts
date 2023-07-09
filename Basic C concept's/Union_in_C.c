//Union in C Programming
#include<stdio.h>
 
/*
    1.User Define Data Type
    2.Union Members Share the Same Memory Location
    3.Union Size is based in biggest size of a data type
 
*/
 
struct demo
{
    int a;//4
    char b;
};
union udemo
{
    int a;//4
    char b;
}o;
 
int main()
{
   /* printf("\nInteger : %d",sizeof(int));
    printf("\nchar : %d",sizeof(char));
    printf("\nUnion Size : %d",sizeof(union udemo));
    printf("\nStruct Size : %d",sizeof(struct demo));*/
    o.a=65;
    printf("\nUnion A : %d",o.a);
    printf("\nUnion B : %c",o.b);
    return 0;
}
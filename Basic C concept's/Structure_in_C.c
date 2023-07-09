//Structure in C
#include<stdio.h>
struct student
{
    char *name;
    int age;
    float per;
};
int main()
{
    struct student o,o2;
   /*
    printf("\nSize of Struct : %d",sizeof(o));//4
    printf("\nSize of char : %d",sizeof(char));//4
    printf("\nSize of int : %d",sizeof(int));//4
    printf("\nSize of float : %d",sizeof(float));//4
    */
    o.name="Tutor Joes";
    o.age=30;
    o.per=85.5;
 
    printf("\nName        : %s",o.name);
    printf("\nAge         : %d",o.age);
    printf("\nPercent     : %f",o.per);
 
    return 0;
}
//typedef in C Programming
#include<stdio.h>
 
 
 
typedef struct student
{
    char *name;
    int age;
    float per;
} student;
 
int main()
{
    typedef int INTEGER;
    INTEGER a;
    student o;
 
    a=100;
    printf("\nA : %d",a);
 
 
    o.name="Tutor Joes";
    o.age=30;
    o.per=85.5;
 
    printf("\nName        : %s",o.name);
    printf("\nAge         : %d",o.age);
    printf("\nPercent     : %f",o.per);
    return 0;
}
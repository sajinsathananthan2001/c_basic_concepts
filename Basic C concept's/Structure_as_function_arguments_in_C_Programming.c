//Structure  as function arguments in C Programming
 
 
#include<stdio.h>
struct student
{
    char *name;
    int age;
    float per;
};
void display(struct student o)
{
    printf("\nName        : %s",o.name);
    printf("\nAge         : %d",o.age);
    printf("\nPercent     : %f",o.per);
}
int main()
{
    struct student o={"RAM",25,75.5};
    display(o);
 
    return 0;
}
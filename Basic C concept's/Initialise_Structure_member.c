//Initializing & Accessing the Structure Members in C Programming
 
#include<stdio.h>
 
struct student
{
    char *name;
    int age;
    float per;
};
int main()
{
    struct student o={"Tutor Joes",30,85.5};
 
    printf("\nName        : %s",o.name);
    printf("\nAge         : %d",o.age);
    printf("\nPercent     : %f",o.per);
    return 0;
}
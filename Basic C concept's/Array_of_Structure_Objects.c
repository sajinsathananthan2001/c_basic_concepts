//Array of Structure Objects
 
#include<stdio.h>
struct student
{
    char *name;
    int age;
    float per;
};
int main()
{
    struct student o[2];
 
    o[0].name="Ram Kumar";
    o[0].age=25;
    o[0].per=65.25;
 
    o[1].name="Sam Kumar";
    o[1].age=12;
    o[1].per=80;
 
    printf("\n------------------------------");
    printf("\nName        : %s",o[0].name);
    printf("\nAge         : %d",o[0].age);
    printf("\nPercent     : %f",o[0].per);
    printf("\n------------------------------");
    printf("\nName        : %s",o[1].name);
    printf("\nAge         : %d",o[1].age);
    printf("\nPercent     : %f",o[1].per);
    printf("\n------------------------------\n\n");
 
    return 0;
}
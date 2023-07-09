//Access members of structure using pointer.
 
#include<stdio.h>
 
 
struct student
{
    char *name;
    int age;
    float per;
};
int main()
{
 
    struct student o={"RAM",25,75.5};
    struct student *ptr=&o;
 
    printf("\nName    : %s",(*ptr).name);
    printf("\nAge     : %d",ptr->age);
    printf("\nPercent : %f",ptr->per);
 
    return 0;
}

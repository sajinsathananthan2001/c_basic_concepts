//Preprocessor Directives  in C Programming
 
#include<stdio.h>
#define LIMIT 5
#define MSG "Tutor Joes"
 
#define custom_message(a)\
printf("\n" #a " Welcome to our institution")
 
int main()
{
 
    for(int i=0;i<LIMIT;i++)
    {
        printf("\n%d",i);
    }
 
    printf("\n%s",MSG);
    custom_message("Ram Kumar");
 
    printf("\nFile Name  : %s",__FILE__);
    printf("\nTime       : %s",__TIME__);
    printf("\nLINE       : %d",__LINE__);
 
    return 0;
}
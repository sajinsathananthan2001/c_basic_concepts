//Input and output functions in C Programming
 
#include<stdio.h>
int main()
{
    int a;
    char c;
    char name[50];
    printf("\nEnter The Value of A : ");
    scanf("%d",&a);
    printf("\n A : %d",a);
    printf("\nEnter The Character : ");
    fflush(stdin);
    c=getchar();
    putchar(c);
    printf("\nEnter Name: ");
    fflush(stdin);
    gets(name);
    puts(name);
    return 0;
}
 
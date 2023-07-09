#include<stdio.h>
int main()
{
    int a = 10;
    char b = '$';
    float c = 67.8f;
    long int d = 3030l;

    printf("%d \n %c \n %0.2f",a,b,c);

    int aa = 0x41;
    float cc = 243e-2f;


    printf("%d \n %f",aa,cc);

    return 0;
}
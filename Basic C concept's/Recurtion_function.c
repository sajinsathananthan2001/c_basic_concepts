//Recursion Function in C Programming
#include<stdio.h>
/*
    5!
    1*2*3*4*5
*/
 
int factorial(int i) //5
{
    if(i<=1){
        return 1;
    }
    return i*factorial(i-1);  //5*4*3*2*1
}
 
int main()
{
    int x;
    printf("Enter the num : ");
    scanf("%d",&x);
    printf("Factorial : %d",factorial(x));
    return 0;
}
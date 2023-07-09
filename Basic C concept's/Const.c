//Const
#include<stdio.h>
 
 
int main()
{
    //Case 3:
 
    char a[3]={'a','b','c'};
    char  * const p=a;
 
    printf("\n *p = %c",*p);
 
    *p='x';
    //p++; //Cannot change the value its const
    printf("\n *p = %c",*p);
 
    return 0;
}
 
 
 
/*
 
 
  //Case 1:
 
    char a[3]={'a','b','c'};
    const char *p=a;
 
    printf("\n *p = %c",*p);
 
    //*p='x';  // Cannot change the value its const
    p++;
    printf("\n *p = %c",*p);
 
 
*/
 
/*
//Case 2:
 
    char a[3]={'a','b','c'};
    char const *p=a;
 
    printf("\n *p = %c",*p);
 
    //*p='x';  // Cannot change the value its const
    p++;
    printf("\n *p = %c",*p);
 
*/
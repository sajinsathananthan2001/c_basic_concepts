//Read a File in C Programming
//r w a
#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp=fopen("sample.txt","r");
    if(fp==NULL)
    {
        printf("\nFile Cant Open or File Not Found..");
    }
    while(1)
    {
        c=fgetc(fp);
        if(c==EOF)
            break;
        printf("%c",c);
    }
    return 0;
}
//Write a File
#include<stdio.h>
int main()
{
   FILE *fp;
   //fp=fopen("sample.txt","w");
   fp=fopen("sample.txt","a");
   fprintf(fp,"Stanley\n");
   fclose(fp);
    return 0;
}
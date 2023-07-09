//realloc in Pointers
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //void * realloc(void *ptr,size_t new_size)
    int i;
    int *ptr=(int *) malloc(3*sizeof(int));
 
    if(ptr==NULL)
    {
        printf("Memory Not Available ...");
        exit(1);
    }
 
    printf("\nEnter 3 Nos : \n");
    for(i=0; i<3; i++)
    {
        scanf("%d",ptr+i);
    }
 
    ptr=(int *) realloc(ptr,5*sizeof(int));
    for(i=3; i<5; i++)
    {
        scanf("%d",ptr+i);
    }
 
    for(i=0; i<5; i++)
    {
        printf("%d  ",*(ptr+i));
    }
    return 0;
}
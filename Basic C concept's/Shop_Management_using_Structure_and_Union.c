//Shop Management using Structure and Union
#include<stdio.h>
 
//Book -> Name,Author,price
//Cell-> Model,Price,color
struct store
{
    double price;  //8
    char *name;    //4
    char *author;  //4
    char *model;   //4
    char *color;   //4
 
}o;
 
	struct store2
	{
		double price;  //8
		union{
			struct{
				char *name;    //4
				char *author;  //4
			} book;
			 struct{
				char *model;    //4
				char *color;    //4
			} cell;
		}product;
 
	}o2;
 
int main()
{
    o.model="Nokia";
    o.color="Red";
    o.price=3550.00;
    printf("\nSize : %d",sizeof(struct store)); //24
    printf("\nSize : %d",sizeof(struct store2)); //16
    o2.product.cell.model="Nokia";
    o2.product.cell.color="Red";
    o2.price=3550.00;
    return 0;
}
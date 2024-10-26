#include<stdio.h>
#include<conio.h>
void main() 

{
    int number, number2, i, product;
    
    printf("Print multiplication table for any number upto any range. \n");
    printf("Enter the number for which you would like to generate the multiplication table. \n");
    scanf("%d",&number);
    
    printf("\n Enter the number up to which you would like the multiplication table. \n ");
    scanf("%d",&number2);
    
    printf("\n Multiplication Table for %d \n", number);
    
    for (int i=1; i< number2+1; i++)
    {
        product = number * i;
        printf("%d * %d = %d \n", number, i, product);
    }

}
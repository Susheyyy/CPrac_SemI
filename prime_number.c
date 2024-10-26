#include<stdio.h>
#include<conio.h>
void main() 

{
    int check=0, number, i;

    printf("Check whether a number is prime number or not. \n");
    printf("Enter the number you would like to check: \n");
    scanf("%d",&number);
    
    for (int i=2; i<=number/2; ++i)
    {
        if (number%i == 0)
        check = 1; 
    }

    if (check==0 && number!=0 || number!=1)
    {
        printf("%d is a Prime Number.", number);
    }
    else
    {
        printf("%d is not a Prime Number", number);
    }

}
#include <stdio.h>

void main() 
{
    int check, number, i, temp;

    printf("Print Prime Numbers from 1 to N. \n\n");
    printf("Enter the number up to which prime numbers should be printed. \n");
    scanf("%d",&number);
    
     printf("Prime numbers are: \n");
    
    for (temp =1; temp<=number; temp++)
    {
        check =0;
        
    for (i=2; i<=temp/2; i++)
    {
        if (temp%i==0)
        { 
            check++ ;
        }
        
    }
    
        if (check==0 && temp!= 1)
        {
       
        printf("%d \t",temp); 
    }
    }

}







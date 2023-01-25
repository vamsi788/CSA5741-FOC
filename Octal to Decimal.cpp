#include <stdio.h>
#include <math.h>

int main()
{
    int octal, decimal = 0;
    int i = 0;
    
    printf("Enter the Octal Number = ");
    scanf("%d",&octal);

    while(octal != 0)
    {
        decimal = decimal + (octal % 10) * pow(8, i++);
        octal = octal / 10;
    }

    printf("The Decimal Value = %d\n", decimal); 
    
    return 0;
}

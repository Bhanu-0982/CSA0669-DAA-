#include <stdio.h>
int main()
{
    int number, reversed = 0;
   
    printf("Enter any number = ");
    scanf("%d", &number);
   
    while(number != 0)
    {
       
        reversed = (reversed * 10) + (number % 10);
       
        number /= 10;
    }
    printf("Reverse = %d", reversed);
    return 0;
}

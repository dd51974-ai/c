#include <stdio.h>

int main(void)
{
    long original_number;
    printf("Number \n");
    scanf("%ld", &original_number);

    long number = original_number;
    int position = 0;
    int sum = 0;

    // make sum of Luhn
    while (number > 0)
    {
        int digit = number % 10;/* code */
        printf("%ld\n", number);
        number /= 10; 
    }
    
}
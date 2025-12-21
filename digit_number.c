#include <stdio.h>

int main(void)
{
    long original_number;
    printf("Number: ");
    scanf("%ld", &original_number);

    long number = original_number;
    int position = 1;
    int sum = 0;

    // make sum of Luhn
    while (number > 0)
    {
        int digit = number % 10;
        
        if (position % 2 == 0)
        {
            sum += digit; //add for odd place
        }

        else
        {
            int doubled = digit * 2;
            if (doubled >= 10)
            {
                sum += (doubled / 10) + (doubled % 10);
            }
            else
            {
                sum += doubled;
            }
        }
        number /= 10;
        position++;
    }

    // judge Luhn
    if (sum % 10 == 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // count length
    int length = 0;
    long temp = original_number;
    while (temp >0)
    {
        temp /= 10;
        length++;
    }

    // get start
    long start = original_number;
    while (start >= 100)
    {
        start /= 10;
    }

    int first_digit = start / 10;

    //judge credit card of campany
    if ((length == 15) && (start == 34 || start ==37))
    {
        printf("AMEX\n");/* code */
    }
    else if ((length == 16) && (start >= 51 && start <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((length == 13 || length == 16) && (first_digit == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVAILD\n");
    }
    return 0;
}
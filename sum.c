#include <stdio.h>

int main(void)
{
    int sum = 0;
    int position = 1;
    int number = 1;
    while (number > 0)
    {   
        int digit = number % 10;/* code */
        if (position % 2 ==1)
        {
            sum += digit;
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
    
}
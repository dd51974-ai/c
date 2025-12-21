#include <stdio.h>

int main(void)
{
    int number = 12345;
    int position = 0;
    while (number > 0)
    {
        int digit = number % 10;/* code */
        printf("%d\n", digit);
        number = number / 10;
    }
    
}
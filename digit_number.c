#include <stdio.h>

int main(void)
{
    int n = 1234;
    int position = 1;

    while (n > 0)
    {
        int digit = n % 10;
        printf("position %d: digit = %d\n", position, digit);

        n /= 10;
        position++;
    }
    return 0;
}
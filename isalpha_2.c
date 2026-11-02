#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c = 'A';
    fgets(c, sizeof(c), stdin);

    if (isalpha(c))
    {
        printf("This is a letter \n");
    }
    else
    {
        printf("This is not a letter \n");
    }
}
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char text[100];

    printf("Text: ");
    scanf("%s", text);
    
    if (isalpha(text[0]))
    {
        printf("This is an alphabet.\n");
    }
    else
    {
        printf("This is NOT an alphabet.\n");
    }
}

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[100];

    printf("Before: ");
    fgets(s, sizeof(s), stdin);

    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper((unsigned char)s[i]));
    }
}
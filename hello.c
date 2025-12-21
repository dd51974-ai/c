#include <stdio.h>

int main(void)
{
    char name[] = "AI";
    printf("Hello %s\n", name);

    long what_name;
    printf("What's your name?: ");
    what_name = getchar();
    printf("%ld\n", what_name);
    return 0;
}

#include <stdio.h>

int main(void)
{
    char name[] = "AI";
    printf("Hello %s\n", name);

    char your_name[50];
    printf("What's your name?: ");
    scanf("%49s", your_name); // Delete "\n"
    for (int i = 0; i <=3; i++) // Changed your_name to i
    {
        printf("Hello %s\n", your_name);
    }    
}

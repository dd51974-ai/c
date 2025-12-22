#include <stdio.h>

int main(void)
{
    char name[] = "AI";
    printf("Hello %s\n", name);

    char your_name[50];
    printf("What's your name?: ");
    scanf("%49s\n", your_name);
    for (int your_name = 0; your_name <=3; your_name++)
    {
        printf("Hello %d\n", your_name);
    }    
}

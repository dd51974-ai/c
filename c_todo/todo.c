#include <stdio.h>
#include <stdbool.h>

typedef struct todo
{
    /* data */
    char title[100]; // title name
    bool tasks_done; // if done something tasks
} Task;

int main(void)
{
    Task tasks[100];
    int task_count = 0;
    while (1)
    {
        
        int choice ;
        printf("1. Add Task\n");
        printf("2. Show Tasks\n");
        printf("3. Complete Task\n");
        printf("4. Delete Taks\n");
        printf("5. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            /* code */
            printf("Add Task\n");
            scanf(" %99[^\n]",);
            tasks[task_count].tasks_done = false;
            task_count++;
            break;
        case 2:
            printf("Show Tasks\n");
            int todo;
            break;
        case 3:
            printf("Complete Task\n");
            break;
        case 4:
            printf("Delete Task\n");
            break;
        case 5:
            return 0;
        }
    
    }

}
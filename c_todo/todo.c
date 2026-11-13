#include <stdio.h>
#include <stdbool.h>

typedef struct todo // structure
{
    /* data */
    char title[100]; // title name
    bool tasks_done; // if done something tasks
} Task;

int main(void)
{
    Task tasks[100];
    int task_count = 0; // task_countは整数型の変数
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
            // ①タスク名を入力して保存する
            scanf(" %99[^\n]", tasks[task_count].title); // Save
            // ② 完了状態をfalseにする
            tasks[task_count].tasks_done = false;
            // ③ 条件登録を増やす
            task_count++;
            break;
        case 2:
            printf("===== MY TODO LIST =====\n");
            for (int i = 0;i < task_count; i++)
            {
                if (tasks[i].tasks_done)
                {
                    printf("%d.", i+1);
                    printf("%s", tasks[i].title);
                    printf("[Done]");
                    printf("\n");

                }
                else
                {
                    printf("%d.", i+1);
                    printf("%s", tasks[i].title);
                    printf(" [Not Done]\n");
                    printf("\n");
                }
                
                
            }
            break;
            
        case 3:
        {
            printf("完了したい番号を入力して下さい\n");
            int task_number ;
            scanf("%d", &task_number) ;
            if (tasks[task_number + 1].tasks_done == false)
            {
                tasks[task_number - 1].tasks_done = true;
                printf("%d.", task_count - 1);
                printf("%s.", tasks[task_count].title);
                printf("Done\n");
            }
            else
            {
                printf("error\n");
                printf("\n");   
            }
        
            break;
        }
            
        
            
        case 4:
        {
            printf("Delete Task\n");
            int delete_number;
            scanf("%d", &delete_number);
            if (tasks[delete_number +1].tasks_done == true)
            break;
        }
        case 5:
            return 0;
        }
    
    }

}
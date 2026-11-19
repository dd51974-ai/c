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
            printf("Want to complete to the number.\n");
            int task_number ;
            printf("No.");
            scanf("%d", &task_number) ;
            if (tasks[task_number >= 1].tasks_done == false && task_number == task_count) // -1を>=1に書き換え
            {
                tasks[task_number >= 1].tasks_done = true; // -1を>=1に書き換え
                printf("No.");
                printf("%d.", task_count >= 1);
                printf("%s", tasks[task_count].title);
                printf("Done\n");
            }
            else
            {
                printf("Sorry, this is wrong number.\n");
                printf("\n");   
            }
        
            break;
        }
            
        
            
        case 4:
        {
            printf("Delete Task\n");
            int delete_number;
            printf("No.");
            scanf("%d", &delete_number);
            if (delete_number >= 1&& delete_number <= task_count)
            {
                for (int i = delete_number - 1; i < task_count - 1; i++)
                {
                    tasks[i] = tasks[i + 1]; //ここで次のタスクを前の位置に移動させる
                }
                task_count--; // task_countの番号を消す
                printf("Delete\n");
                printf("No.%d", delete_number);
                printf("\n");
                break;
            }
            else
            {
                printf("Invalid task number\n"); // 番号が一致しなかった時のエラー
                break;
            }
        }
        case 5:
            return 0;
        }
    
    }

}
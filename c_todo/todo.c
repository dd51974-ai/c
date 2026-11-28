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
        printf("Select Number\n"); // 選択肢を与える表示を作った
        printf("1. Add Task\n");
        printf("2. Show Tasks\n");
        printf("3. Complete Task\n");
        printf("4. Delete Taks\n");
        printf("5. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (task_count < 100) // タスクが100件超えないプログラムを作った
            {
                printf("Add Task\n");
                // ①タスク名を入力して保存する
                scanf(" %99[^\n]", tasks[task_count].title); // Save
                // ② 完了状態をfalseにする
                tasks[task_count].tasks_done = false;
                // ③ 条件登録を増やす
                task_count++;
            }
            else
            {
                printf("Task list is full\n");
            }
            
            break;
        case 2:
            printf("===== MY TODO LIST =====\n");
            if (task_count == 0) // taskが0件の時に表示される
                {
                    printf("No tasks available\n");
                }
            else
            {
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
            }
            break;
            
        case 3:
        {
            printf("Want to complete to the number.\n");
            int task_number ;
            printf("No.");
            scanf("%d", &task_number) ;
            if (task_number >= 1 && task_number <= task_count) // [task_number - 1]を>=1に変更
            {
                if (tasks[task_number - 1 ].tasks_done == true) // 既に完了してるか確認するための内側のif,else
                {
                    printf("This task is already completed!\n");
                }
                else
                {
                    tasks[task_number - 1].tasks_done = true;
                    printf("No.%d. %s Done\n", task_number, tasks[task_number - 1].title); // if elseより先に書くと判定する前にDoneが表示されるのでelseに書き込み
                }            
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
            
            if(task_count == 0) // タスクが無い時に表示されるプログラムを作った, delete_numberからtask_countに変更
            {
                printf("No tasks available\n"); // タスクが無い
            }
             
            else //タスクがある時のプログラム
                {
                    printf("No."); // elseに移動した
                    scanf("%d", &delete_number); // elseの中に移動
                    if (delete_number >= 1 && delete_number <= task_count)
                    {
                        // for文で移動
                        for (int i = delete_number - 1; i < task_count - 1; i++)
                        {
                            tasks[i] = tasks[i + 1]; //ここで次のタスクを前の位置に移動させる
                        }
                        // task_count--;
                        task_count--; // task_countの番号を消す
                        printf("Delete\n");
                        printf("No.%d", delete_number);
                        printf("\n");
                        printf("This task number is delete!\n"); //消去したことを表示させた
                        break;
                    }
                    else
                    {
                        printf("Invalid task number\n"); // 番号が一致しなかった時のエラー
                        break;
                    }   
                }                
            
            break;
        }
        case 5:
            return 0;
        }
    
    }

}
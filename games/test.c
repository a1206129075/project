
#include"game.h"
void test()
{int input;
 srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择:>\n");

        scanf("%d",&input);
        switch(input)
        {
        case 1:
            printf("三子棋\n");
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default :
            printf("输入错误，请重新选择！\n");
            break;
        }
    }while (input);
}

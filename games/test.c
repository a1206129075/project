
#include"game.h"
void test()
{int input;
 srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("��ѡ��:>\n");

        scanf("%d",&input);
        switch(input)
        {
        case 1:
            printf("������\n");
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default :
            printf("�������������ѡ��\n");
            break;
        }
    }while (input);
}

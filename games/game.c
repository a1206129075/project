#include"game.h"
void game()
{
    char ret=0;
    char board[ROW][LOW]={0};//����һ�������̵�����
    //��ʼ������
    InitBoard(board,ROW,LOW);
    //��ӡ����
    DisplayBoard(board,ROW,LOW);
    //����

    while(1)
    {
        PlayerBoard(board,ROW,LOW); //�������
        DisplayBoard(board,ROW,LOW);
       ret=Iswin(board,ROW,LOW);//�ж���Ӯ����
        if(ret !='C')
        {
            break;
        }
        Computermove(board,ROW,LOW);//��������
         DisplayBoard(board,ROW,LOW);
       ret = Iswin(board,ROW,LOW);
         if(ret !='C')
        {
            break;
        }

    }
      if(ret=='X')
        {
            printf("��һ�ʤ��\n");
        }
        if(ret=='O')
        {
            printf("���Ի�ʤ��\n");
        }
        if(ret=='$')
        {
            printf("ƽ�֣�����\n");
        }
}

#include"game.h"

void PlayerBoard(char board[ROW][LOW],int row,int low)
{int x,y;
 printf("������壬��������Ҫ�µ�����:>\n");
 while(1)
{

scanf("%d %d",&x,&y);
    if(x>=1 && x<=row && y>=1 && y<=low)
    {
        if(board[x-1][y-1]==' ')
        {
            board[x-1][y-1]='X';
            break;
        }
        else
        {
            printf("��λ���ѱ�ռ�ã�����������:>\n");
        }
    }
    else
    {
        printf("�����ʽ��������������:>\n");
     }
    }
}

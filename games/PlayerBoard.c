#include"game.h"

void PlayerBoard(char board[ROW][LOW],int row,int low)
{int x,y;
 printf("玩家下棋，请输入你要下的坐标:>\n");
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
            printf("该位置已被占用，请重新输入:>\n");
        }
    }
    else
    {
        printf("输入格式错误，请重新输入:>\n");
     }
    }
}

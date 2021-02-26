#include"game.h"
void game()
{
    char ret=0;
    char board[ROW][LOW]={0};//创建一个放棋盘的数组
    //初始化棋盘
    InitBoard(board,ROW,LOW);
    //打印棋盘
    DisplayBoard(board,ROW,LOW);
    //下棋

    while(1)
    {
        PlayerBoard(board,ROW,LOW); //玩家下棋
        DisplayBoard(board,ROW,LOW);
       ret=Iswin(board,ROW,LOW);//判断输赢条件
        if(ret !='C')
        {
            break;
        }
        Computermove(board,ROW,LOW);//电脑下棋
         DisplayBoard(board,ROW,LOW);
       ret = Iswin(board,ROW,LOW);
         if(ret !='C')
        {
            break;
        }

    }
      if(ret=='X')
        {
            printf("玩家获胜！\n");
        }
        if(ret=='O')
        {
            printf("电脑获胜！\n");
        }
        if(ret=='$')
        {
            printf("平局！！！\n");
        }
}

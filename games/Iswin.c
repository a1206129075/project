#include"game.h"
char Iswin(char board[ROW][LOW],int row,int low)
{
    int i,j;
    for(i=0;i<row;i++)
    {
         if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]!=' ')
         {
             return board[i][0];
         }
    }
    for(j=0;j<low;j++)
    {
        if(board[0][j]==board[1][j] && board[1][j]==board[2][j] && board[0][j]!=' ')
        {
            return board[0][j];
        }
    }

        if((board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')||(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[1][1]!=' '))
        {
            return board[1][1];
        }
        if(1==IsFull(board,ROW,LOW))
        {
            return '$';
        }

    return 'C';

}

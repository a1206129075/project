
#include"game.h"

void InitBoard(char board[ROW][LOW],int row,int low)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<low;j++)
        {
            board[i][j]=' ';
        }
    }
}

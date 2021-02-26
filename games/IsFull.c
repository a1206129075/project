#include"game.h"
int IsFull(char board[ROW][LOW],int row,int low)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<low;j++)
            if(board[i][j]==' ')
            return 0;
    }
    return 1;
}

#include"game.h"
void Computermove(char board[ROW][LOW],int row,int low)
{
    printf("µçÄÔ×ß:>\n");
    int x,y;
    while(1)
    {
    x=rand()% row;
    y=rand()% low;
    if(board[x][y]==' ')

    {board[x][y]='O';
        break;
        }

     }

    }

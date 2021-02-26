
#include"game.h"

void DisplayBoard(char board[ROW][LOW],int row,int low)
{
    int i;
    for(i=0;i<row+1;i++)
    {   printf("----+---+----\n");
    if(i<row)
        printf("| %c | %c | %c |\n",board[i][0],board[i][1],board[i][2]);
        //if(i<row-1)
        //printf("！！！！！！\n");

    }
}

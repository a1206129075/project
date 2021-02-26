#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#define ROW 3
#define LOW 3
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void test();
void menu();
void InitBoard(char board[ROW][LOW],int row,int low);
void DisplayBoard(char board[ROW][LOW],int row,int low);
void PlayerBoard(char board[ROW][LOW],int row,int low);
void Computermove(char board[ROW][LOW],int row,int low);
char Iswin(char board[ROW][LOW],int row,int low);
int IsFull(char board[ROW][LOW],int row,int low);
void game();

#endif // GAME_H_INCLUDED

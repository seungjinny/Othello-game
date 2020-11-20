#include <stdio.h>
#include <stdlib.h>
#define size 6 // the size of the gameboard is 6x6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void GameBoard () // making the gameboard of othello 
{
	
	printf("  0 1 2 3 4 5 \n");
	printf(" -------------\n"); 
	
	int board[size][size] = {
	{0,0,0,0,0,0},
	{0,0,0,0,0,0},
	{0,0,1,2,0,0},
	{0,0,2,1,0,0},
	{0,0,0,0,0,0},
	{0,0,0,0,0,0},
	}; // 0: empty, 1: white, 2: black
	
	int r,c; // declaring the rows and columns of the board
	int name[size]={0,1,2,3,4,5};
	
		for (r=0; r<size; r++)
		{
			printf("%d|", name[r]);
			{
				for (c=0; c<size; c++)
			
				printf("%d|", board[r][c]);
				printf("\n");
				printf("-------------\n");
			}
   		}
			
}

void status ()
{
	int a=2;
	int b=2;
	int wh_or_bl; // put a new (white or black) othello
	int i,j; // 입력받을 수 scanf로 받기  
	
	printf("\nSTATUS - WHITE: %d, BLACK: %d\n\n", a, b);
	
	if (wh_or_bl++ % 2 == 0)
	{
		printf("put a new black othello: ");
		scanf("%d %d", &i, &j);
	}
	else
		printf("put a new white othello: ");
		scanf("%d %d", &i, &j);
}

int main (void)
{
	printf("Welcome to the Othello Game!\n");
	GameBoard();
	status();
	
	return 0;
}


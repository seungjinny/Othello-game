#include <stdio.h>
#include <stdlib.h>
#define size 6

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
	
	int r,c;
	int name[size]={0,1,2,3,4,5};
	 // declaring the rows and columns of the board
	
	
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

void Status ()
{
	int a=2;
	int b=2;
	
	printf("\n STATUS - WHITE: %d, BLACK: %d", a, b);
}

int main (void)
{
	printf("Welcome to the Othello Game!\n");
	GameBoard();
	Status();
	
	return 0;
}


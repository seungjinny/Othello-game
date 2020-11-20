#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void GameBoard () // making the gameboard of othello 
{
	
	printf("   0 1 2 3 4 5 \n");
	printf("  -------------\n"); 
	
	int board[6][6] = {
	{0,0,0,0,0,0},
	{0,0,0,0,0,0},
	{0,0,1,2,0,0},
	{0,0,2,1,0,0},
	{0,0,0,0,0,0},
	{0,0,0,0,0,0},
	}; // 0: empty, 1: white, 2: black
	
	int i,r,c; // declaring the rows and columns of the board
	
	
		
		for (r=0; r<6; r++)
		{
			for (c=0; c<6; c++)
			
			printf("%d|", board[r][c]);
			printf("\n");
			printf("-------------\n");
   		}
			
}

int main (void)
{
	printf("Welcome to the Othello Game!\n");
	GameBoard();
	
	return 0;
}


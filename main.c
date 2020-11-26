#include <stdio.h>
#include <stdlib.h>
#define size 6 // the size of the gameboard is 6x6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// gameboard of othello 전역변수로 선언  
int board[size][size] = {
	{0,0,0,0,0,0},
	{0,0,0,0,0,0},
	{0,0,1,2,0,0},
	{0,0,2,1,0,0},
	{0,0,0,0,0,0},
	{0,0,0,0,0,0},
	}; // 0: empty, 1: white, 2: black

void GameBoard () // making the gameboard of othello 
{
	
	printf("  0 1 2 3 4 5 \n");
	printf(" -------------\n"); // 가로
	
	
	int r,c; // declaring the rows and columns of the board
	int name[size]={0,1,2,3,4,5}; // 세로 
	
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
{ //put a new (white or black) othello
	
	int wh_or_bl; // defining whether the player is white or black 
	int i,j; // 입력받을 수 scanf로 받기  
	int wh=0, bl=0; // STATUS에 표시되는 white/black 의 개수  
	
	
	if (wh_or_bl++ % 2 != 0) // white's turn on odd games
	{ do // valid input 이 나올 때까지 한다  
		{
		printf("put a new white othello: "); 
		scanf("%d %d", &i, &j); // 사용자로부터 값 입력 받기   
		
		for (i=0; i<size; i++)
			if(board[i][j] == 1)
				wh++;
								
		for (j=0; j<size; j++)
			if(board[i][j] == 2)
				bl++;
			
			{
			if (i>5 || j>5)
				{
					printf("invalid input: the input number should be less than 6\n");
					printf("%d \n\nSTATUS - WHITE : %d, BLACK : %d\n", GameBoard, wh, bl);
				}
			
			else if (board[i][j] == 1 || board[i][j] == 2)
				{				
					printf("invalid input: already occupied\n\n"); 				
					printf("%d \n\nSTATUS - WHITE : %d, BLACK : %d\n", GameBoard, wh, bl);
				}
			
			else if (board[i][j] )
				{
					printf("invalid input: no flip happens\n\n");
					printf("%d \n\nSTATUS - WHITE : %d, BLACK : %d\n", GameBoard, wh, bl);
				}
			} 
				
		} while (board[i][j]== 0); // valid input 이 나올 때까지 한다  
			
			
	}
	else
		printf("put a new black othello: "); // black's turn on even games
		scanf("%d %d", &i, &j); // 사용자로부터 값 입력 받기  
			
			if (i>5 || j>5)
				printf("invalid input: the input number should be less than 6");
		
	// ::flip result:: 
	
}



int main (void)
{
	printf("Welcome to the Othello Game!\n\n");
	GameBoard();
	printf("\nSTATUS - WHITE: 2, BLACK: 2\n\n"); // initial status of the game
	status();
	
	return 0;
}


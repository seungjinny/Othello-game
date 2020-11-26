#include <stdio.h>
#include <stdlib.h>
#define size 6 // the size of the gameboard is 6x6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// gameboard of othello ���������� ����  
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
	printf(" -------------\n"); // ����
	
	
	int r,c; // declaring the rows and columns of the board
	int name[size]={0,1,2,3,4,5}; // ���� 
	
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
	int i,j; // �Է¹��� �� scanf�� �ޱ�  
	int wh=0, bl=0; // STATUS�� ǥ�õǴ� white/black �� ����  
	
	
	if (wh_or_bl++ % 2 != 0) // white's turn on odd games
	{ do // valid input �� ���� ������ �Ѵ�  
		{
		printf("put a new white othello: "); 
		scanf("%d %d", &i, &j); // ����ڷκ��� �� �Է� �ޱ�   
		
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
				
		} while (board[i][j]== 0); // valid input �� ���� ������ �Ѵ�  
			
			
	}
	else
		printf("put a new black othello: "); // black's turn on even games
		scanf("%d %d", &i, &j); // ����ڷκ��� �� �Է� �ޱ�  
			
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


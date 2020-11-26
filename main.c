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

int wh=2, bl=2; // status�� ������ white, black othello�� ���� ���������� ����  

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

int num_of_wh (wh) //status�� ������ white othello ���� ���� �Լ� 
{
	int i,j;
	
	for (i=0; i<size; i++)
	for (j=0; j<size; j++)
		if(board[i][j] == 1)
			wh++;
			
	return wh;
} 

int num_of_bl (bl) //status�� ������ black othello ���� ���� �Լ�  
{
	int i,j;
	
	for (i=0; i<size; i++)				
	for (j=0; j<size; j++)
		if(board[i][j] == 2)
			bl++;
			
	return bl;
}
	
	
// void flip_othello
	

void game () // invalid input 
{ 
	int player; // defining whether the player is white or black 
	int i,j; // �Է¹��� �� scanf�� �ޱ�    
	
	
	// WHITE 
	if (player++ % 2 == 0) // white's turn on odd games
	{ do // valid input �� ���� ������ �Ѵ�  
		{ 
		printf("put a new white othello: "); 
		scanf("%d %d", &i, &j); // ����ڷκ��� �� �Է� �ޱ�   
			
			{
			if (i>5 || j>5) // invalid input 1: the input number should be less than 6
				{
					printf("invalid input: the input number should be less than 6\n");
					num_of_wh (wh);
					num_of_bl (bl);
					printf("%d \n\nSTATUS - WHITE : %d, BLACK : %d\n\n", GameBoard, wh, bl);
				}
			
			else if (board[i][j] == 1 || board[i][j] == 2) // invalid input 2: already occupied
				{				
					printf("invalid input: already occupied\n\n"); 		
					num_of_wh (wh);
					num_of_bl (bl);
					printf("%d \n\nSTATUS - WHITE : %d, BLACK : %d\n\n", GameBoard, wh, bl);
				}
			
			else if ( /* ������ ���� ���� */ )
				// invalid input 3: no flip happens �������� �ʱ� ������   
				{
					printf("invalid input: no flip happens\n\n");
					num_of_wh (wh);
					num_of_bl (bl);
					printf("%d \n\nSTATUS - WHITE : %d, BLACK : %d\n\n", GameBoard, wh, bl);
				}
			else if (board[i-1][j-1]==0 && board[i-1][j]==0 && board[i-1][j+1]==0 && board[i][j-1]==0 && board[i][j+1]==0 && board[i+1][j-1]==0 && board[i+1][j]==0 && board[i+1][j+1]==0)
				// invlaid input 4: no flip happens ������ ���� ���� ������  
				{
					printf("invalid input: no flip happens\n\n");
					num_of_wh (wh);
					num_of_bl (bl);
					printf("%d \n\nSTATUS - WHITE : %d, BLACK : %d\n\n", GameBoard, wh, bl);
				} 
			} 
				
		} while ( flip_othello() ); // valid input 			
	}
	
	
	// BLACK 
	else // black's turn on even games
	{ do // valid input �� ���� ������ �Ѵ�  
		{ 
		printf("put a new black othello: "); 
		scanf("%d %d\n", &i, &j); // ����ڷκ��� �� �Է� �ޱ�   
			
			{
			if (i>5 || j>5) // invalid input 1: the input number should be less than 6
				{
					printf("invalid input: the input number should be less than 6\n\n");
					num_of_wh (wh);
					num_of_bl (bl);
					printf("%d \n\nSTATUS - WHITE : %d, BLACK : %d\n\n", GameBoard, wh, bl);
				}
			
			else if (board[i][j] == 1 || board[i][j] == 2) // invalid input 2: already occupied
				{				
					printf("invalid input: already occupied\n\n"); 		
					num_of_wh (wh);
					num_of_bl (bl);
					printf("%d \n\nSTATUS - WHITE : %d, BLACK : %d\n\n", GameBoard, wh, bl);
				}
			
			else if (board[i-1][j-1]==2 || board[i-1][j]==2 || board[i-1][j+1]==2 || board[i][j-1]==2 || board[i][j+1]==2 || board[i+1][j-1]==2 || board[i+1][j]==2 || board[i+1][j+1]==2) 
				// invalid input 3: no flip happens �������� �ʱ� ������  
				{
					printf("invalid input: no flip happens\n\n");
					num_of_wh (wh);
					num_of_bl (bl);
					printf("%d \n\nSTATUS - WHITE : %d, BLACK : %d\n\n", GameBoard, wh, bl);
				}
			else if (board[i-1][j-1]==0 && board[i-1][j]==0 && board[i-1][j+1]==0 && board[i][j-1]==0 && board[i][j+1]==0 && board[i+1][j-1]==0 && board[i+1][j]==0 && board[i+1][j+1]==0)
				// invlaid input 4: no flip happens ������ ���� ���� ������  
				{
					printf("invalid input: no flip happens\n\n");
					num_of_wh (wh);
					num_of_bl (bl);
					printf("%d \n\nSTATUS - WHITE : %d, BLACK : %d\n\n", GameBoard, wh, bl);
				}
			} 			
		} while (board[i][j] /*flip othello*/ ); // valid input 				
	}			
}

void flip_othello() // function of reversing black othello to white othell & white othello to black othello
{
	int i,j;
	int x,y;
	
	// left 
	for(j=y-1; j>=0; j--)
	{
		if (board[x][j]==2) // flip black to white
			board[x][j]=1;
		else break;
	}
	
	if (board[x][j] != 1)
	{
		for (j=y-1; j>=0; j--)
		{
			if (board[x][j]==1) // flip white to black
				board[x][j]=2;
			else break;
		}
	}
	
	// right
		for(j=y+1; j<size; j++)
	{
		if (board[x][j]==2) // flip black to white
			board[x][j]=1;
		else break;
	}
	
	if (board[x][j] != 1)
	{
		for (j=y+1; j<size; j++)
		{
			if (board[x][j]==1) // flip white to black
				board[x][j]=2;
			else break;
		}
	}
	
	// up
		for(i=x-1; i>=0; i--)
	{
		if (board[i][y]==2) // flip black to white
			board[i][y]=1;
		else break;
	}
	
	if (board[i][y] != 1)
	{
		for (i=x-1; i>=0; i--)
		{
			if (board[i][y]==1) // flip white to black
				board[i][y]=2;
			else break;
		}
	}
	
	// down
		for(i=x+1; i<size; i++)
	{
		if (board[i][y]==2) // flip black to white
			board[i][y]=1;
		else break;
	}
	
	if (board[i][y] != 1)
	{
		for (i=x+1; i<size; i++)
		{
			if (board[i][y]==1) // flip white to black
				board[i][y]=2;
			else break;
		}
	}
	
	// upper left diagonal
	i = x-1; j= y-1;
	
	while (i>=0 && j>=0)
	{
		if (board[i][j]==2) // flip black to white
			board[i][j]=1;
		else break; 
			i--; j--;	
	} 
	
	if (board[i][j] != 1)
	{
		i = x-1; j = y-1;
		while (i>=0 && j>=0)
		{
			if (board[i][j]==1) // flip white to black 
				board[i][j]=2;
			else break; 
				i--; j--;
		}
	}
	
	// upper right diagonal 
	i = x-1; j= y+1;
	
	while (i>=0 && j<size)
	{
		if (board[i][j]==2) // flip black to white
			board[i][j]=1;
		else break; 
			i--; j++;	
	} 
	
	if (board[i][j] != 1)
	{
		i = x-1; j = y+1;
		while (i>=0 && j<size)
		{
			if (board[i][j]==1) // flip white to black 
				board[i][j]=2;
			else break; 
				i--; j++;
		}
	}
	
	// bottom left diagonal 
	i = x+1; j= y-1;
	
	while (i<size && j>=0)
	{
		if (board[i][j]==2) // flip black to white
			board[i][j]=1;
		else break; 
			i++; j--;	
	} 
	
	if (board[i][j] != 1)
	{
		i = x+1; j = y-1;
		while (i<size && j>=0)
		{
			if (board[i][j]==1) // flip white to black 
				board[i][j]=2;
			else break; 
				i++; j--;
		}
	}
	
	// bottom right diagonal
	i = x+1; j= y+1;
	
	while (i<size && j<size)
	{
		if (board[i][j]==2) // flip black to white
			board[i][j]=1;
		else break; 
			i++; j++;	
	} 
	
	if (board[i][j] != 1)
	{
		i = x+1; j = y+1;
		while (i<size && j<size)
		{
			if (board[i][j]==1) // flip white to black 
				board[i][j]=2;
			else break; 
				i++; j++;
		}
	}
}


int main (void)
{
	printf("Welcome to the Othello Game!\n\n");
	GameBoard();
	printf("\nSTATUS - WHITE: 2, BLACK: 2\n\n"); // initial status of the game
	game();
	
	return 0;
}


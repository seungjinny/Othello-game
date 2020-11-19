#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void GameBoard () // making the gameboard of othello 
{
	int i,j;
	
	printf("   0 1 2 3 4 5 \n");
	printf("  -------------\n");
	
	for(i=0; i<6; i++)
	{
		printf("%d | | | | | | |\n", i);
		printf("  -------------\n");
		
	}
		
}

int main (void)
{
	GameBoard();
	
	return 0;
}


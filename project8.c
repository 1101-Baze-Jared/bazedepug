#include<stdio.h>
#define N 6
char buffer[N];




int main()
{
int choice, row, col, move1, move2, victory = 0;
int i = 6;
int counter;
char play1Name[100], play2Name[100];

printf("Enter Player One's Name\n");
scanf(" %s", play1Name);
printf("Enter Player Two's Name\n");
scanf(" %s", play2Name);
	
printf("Player 1: %s\n", play1Name);
printf("Player 2: %s\n", play2Name);
	
printf("Make your choice.\n");
printf("1: Play\n");
//printf("2: Load\n");
printf("3: Exit\n");

scanf(" %d", &choice);

if(choice == 1)
{
	char gameBoard[N*2][N];
	FILE* fourBoard= fopen("board.txt", "r");
	if(fourBoard == 0)
	{
		printf("The File did not Load");
		return 0;
	}

	for(row =0; row < N*2; row++)
	{
		fgets(buffer,N+1,fourBoard);
		for(col =0; col<N+1; col++)
		{
			gameBoard[row][col]=buffer[col];
		}
	}
	fclose(fourBoard);
	for(row =0; row < N*2; row+=2)
	{
		for(col =0; col<N+1; col++)
		{
			printf("[%c] ",gameBoard[row][col]);
		}
		printf("\n");
	}
	do
	{
	printf("Player 1 pick a column 1-7\n");
	scanf(" %d", &move1);
	
	gameBoard[6][move1] = 'x';
	for(row =0; row < N*2; row+=2)
		{
			for(col =0; col<N+1; col++)
			{
				printf("[%c] ",gameBoard[row][col]);
			}
			printf("\n");
		}
	}while(victory != 1);
	}
	else
	{
		return 0;
	}
return 0;
}



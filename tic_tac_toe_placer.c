#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int rowNum, colNum;
	// Declaring variables to keep track of user input

	char board[3][3] = {
		{'_', '_', '_'},
		{'_', '_', '_'},
		{'_', '_', '_'}
	};

	// Collect user input for row and store in rowNum
	printf("Please enter a row number: ");
	scanf("%d", &rowNum);

	// Collect user input for column and store in colNum
	printf("Please enter a column number: ");
	scanf("%d", &colNum);

	// Place collected value in desired location [rowNum][colNum]
	board[rowNum][colNum] = "X";

	// Nested for loop to print each space
	for (int i = 0; i < 3; i++) {
		for (int j = 0; i < 3; j++)

			printf("%c ", board[i][j]);
		printf("\n");
	}

	return 0;
}
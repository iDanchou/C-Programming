#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char randomWord[50];
	printf("Please enter a string with underscores: ");
	scanf("%s", randomWord);

	for (int i = 0; i < strlen(randomWord); i++) {

		if (randomWord[i] == '_')
		{
			randomWord[i] = ' ';
		}
	}
	printf("%s", randomWord);
	return 0;
}
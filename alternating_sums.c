#include <stdio.h>
#include <stdlib.h>

int main() {


	int ls[] = { 7, 4, 1, 5, 3, 2, 7, 6, 4, 2, 9, 1, 2, 6, 8, 2, 3, 4 };
	int total = 0;

	for (int i = 0; i < 18; i++) {
		printf("%d ", ls[i]);
		if (i % 2 == 0)
			total += ls[i];
		else
			total -= ls[i];
	}

	printf("\nThe alternating sum is: %d", total);
	return 0;

}

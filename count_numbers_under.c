#include <stdlib.h>
#include <stdio.h>

int main() {

 int ls[] = {7, 4, 1, 5, 3, 2, 7, 6, 4, 2, 9, 1, 2, 6, 8, 2, 3, 4};
 int num = 0;
 int counter = 0;

printf("Please enter a number: ");
scanf("%d", &num);

for (int i = 0; i < 18; i++)
{
    printf("%d ", ls[i]);
}

for (int i = 0; i < 18; i++)
{
    if (ls[i] < num)
    {
        counter += 1;
    }
    
}

printf("\nThere are %d numbers less than %d in the list", counter, num);


// printf("You input %d", num); verifying input is correct

    return 0;
}
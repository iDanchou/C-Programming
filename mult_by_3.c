#include <stdlib.h>
#include <stdio.h>

int main() {

    // declaring all variables
    int num;
    int i;
    // collects user input and will multiply up to that number
    printf("Please enter a number: ");
    scanf("%d", &num);

    // loop to iterate through each level
   for (i = 0; (i <= num); i++)
    {
        printf("\n%d", i * 3);
    }

    return 0;
}

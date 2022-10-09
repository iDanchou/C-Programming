#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main() {

    char word[20];

    printf("Please enter a string: ");
    scanf("%s", &word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if ((i % 2) == 0)
            word[i] = toupper(word[i]);
        else
            word[i] = tolower(word[i]);
        
    }
    
    printf("%s", &word);

    return 0;
}
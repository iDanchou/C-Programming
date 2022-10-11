#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char collected(char madLib[]) {

    char firstWord[20];
    printf("Please enter word 1: "); // collecting the first word
    scanf("%s", firstWord);

    printf("Please enter word 2: "); // collecting the second word
    char secondWord[20];
    scanf("%s", secondWord);

    printf("Please enter word 3: "); // collecting the third word
    char thirdWord[20];
    scanf("%s", thirdWord);

    printf("Please enter word 4: "); // collecting the third word
    char fourthWord[20];
    scanf("%s", fourthWord);

}


int main() {

    char madLib[] = "Star Wars is a __ __ of __ versus evil in a __ far far away.";

    printf("%s", &madLib);

    return 0;
}
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char name_collecter(char firstName[], char lastName[]) { // function will take both values to create a full name

 // printf("The name you input is %s %s", firstName, lastName); verifying correct input

 char handle[300];

 for (int i = 0; i < strlen(firstName); i++)
 {
    handle[i] = firstName[i];
 }
 
 printf("%s", handle);

 for (int j = strlen(handle); j < strlen(lastName); j++)
 {
    handle[j] = lastName[j];
 }

// printf("%s", handle);

}

int main() {

char fname[20];
char lname[20];
// char fullName[40];

printf("Please enter a first name: ");
scanf("%s", fname);

printf("Please enter a last name: ");
scanf("%s", lname);

char fullName = name_collecter(fname, lname);

// printf("The name you input is %s %s", fname, lname); verifying correct input

    return 0;
}
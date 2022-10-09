#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	FILE *g;
	g = fopen("fight_songs.csv", "r");  // will open the fight_songs.csv file to read 
	FILE *f2;
	f2 = fopen("fight_songs_2.csv", "w"); // will write to selected file, if nonexistent will create the file
	FILE *f3;
	f3 = fopen("ACC_schools.csv", "w"); // careful when writing to a file as it will delete all previous contents
	char *var; // creates a pointer to variable
	char varchar[301]; // preallocates 301 blocks of memeory
	var = &varchar[0];
	char *school;
	char schoolchar[20];
	school = &schoolchar[0];
	char *conf;
	char confchar[20];
	conf = &confchar[0];
	int i = 0;
	int j = 0;
	while (1) {
		//fscanf(g, "%s", var);
		fgets(var, 300, g);
		if (feof(g)) {
			break;
		}
		//fprintf(f2, "%s", var);
		i = 0;
		while (*(var + i) != ',') {
			//printf("%c", *(var + i));
			*(school + i) = *(var + i);
			i = i + 1;
		}
		*(school + i) = '\0';
		i = i + 1;
		j = 0;
		while (*(var + i) != ',') {
			*(conf + j) = *(var + i);
			i = i + 1;
			j = j + 1;
		}
		*(conf + j) = '\0';
		printf("%s: ", school);
		printf("%s\n", conf);
		if (strcmp(conf, "ACC") == 0) {
			fprintf(f3, "%s", var);
		}
	}
	fclose(g);
	fclose(f2);
	fclose(f3);
	return 0;
}
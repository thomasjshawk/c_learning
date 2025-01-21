#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	FILE *tlist;
	char *filename = "list.txt";
	char line[1000];
	int filelength = 0;

	// Checks for existing list.txt, if nonexistent creates it	
	if (access(filename, F_OK) == -1) {
		tlist = fopen("list.txt", "w");

		fclose(tlist);
	} else {
		printf("You have the following items on your to-do list\n");
	}

	// Print existing lines in list.txt, and number them
	tlist = fopen("list.txt", "r");

	while (fgets(line, 1000, tlist)) {
		filelength++;
		printf("%d. %s", filelength, line);
	}

	fclose(tlist);

	// Allows user to append item to list and numbers them
	
	
	




	return 0;
}

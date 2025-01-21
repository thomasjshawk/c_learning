#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	FILE *tlist;
	char *list = "list.txt";
	char line[1000];

	// Checks for existing list.txt, if nonexistent creates it	
	if (access(list, F_OK) == -1) {
		tlist = fopen("list.txt", "w");

		fclose(tlist);
	}

	// Print existing lines in list.txt
	tlist = fopen("list.txt", "r");

	while (fgets(line, 1000, tlist)) {
		printf("%s", line);
	}

	fclose(tlist);

	




	return 0;
}

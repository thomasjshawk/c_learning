#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_file(char *fname, FILE *list);
void print_number(FILE *list, char sline[], int filelen);

int main(){
	FILE *tlist;
	char *filename = "list.txt";
	char line[1000];
	int filelength = 0;

	create_file(filename, tlist);
	
	// Print existing lines in list.txt, and number them
	print_number(tlist, line, filelength);

	// Allows user to append item to list and numbers them
	
	
	




	return 0;
}

// Accepts file name and file pointer, checks if file exists, if it doesn't create file, if it does print header
void create_file(char *fname, FILE *list) {
	if (access(fname, F_OK) == -1) {
		list = fopen("list.txt", "w");

		fclose(list);
	} else {
		printf("You have the following items on your to-do list\n");
	}
}

// Prints each line of existing list.txt file
void print_number(FILE *list, char sline[], int filelen) {
	list = fopen("list.txt", "r");

	while (fgets(sline, 1000, list)) {
		filelen++;
		printf("%d. %s", filelen, sline);
	}

	fclose(list);
}




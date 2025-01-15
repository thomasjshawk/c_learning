#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choose();

int main(){
	unsigned int seed = time(0);
	int p_score = 0;
	int c_score = 0;
	const int w_score = 2;
	int p_choice;
	int c_choice;

	printf("This is rock paper scissors! Best two out of 3 wins!\n");

	while (p_score < 2 && c_score < 2) {
		
		c_choice = rand_r(&seed) % 3 + 1;

		while (p_choice != 1 && p_choice != 2 && p_choice != 3) {
			p_choice = choose();
		}

	}
	return 0;
}

int choose(){
	int choice;	
	printf("Please enter 1 for Rock, 2 for Paper, 3 for Scissors: ");
	scanf("%d", &choice);
	return choice;
}

	

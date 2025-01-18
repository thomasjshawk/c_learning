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

	while (p_score < 2 && c_score < 2) {  /* While loop checks for game winning conditions */ 
		
		c_choice = rand_r(&seed) % 3 + 1; /* Makes random choice for computer */

		do {
			p_choice = choose();
		} while (p_choice != 1 && p_choice != 2 && p_choice != 3);
		
		switch (c_choice) {  /* Prints out what the computer chose */
			case 1:
				printf("Computer chose rock!\n");
				break;
			case 2:
				printf("Computer chose paper!\n");
				break;
			case 3:
				printf("Computer chose scissors!\n");
				break;
		}

		if (p_choice == 1) { /* Activates switch that corresponds to player choice and responding win or loss for computer */
			switch (c_choice) {
				case 1:
					printf("\nTie!\n\n");
					break;
				case 2:
					printf("\n1 point for computer!\n\n");
					c_score++;
					break;
				case 3:
					printf("\n1 point for you!\n\n");
					p_score++;
					break;
			}
		} else if (p_choice == 2) {
			switch (c_choice) {
				case 1:
					printf("\n1 point for you!\n\n");
					p_score++;
					break;
				case 2:
					printf("\nTie!\n\n");
					break;
				case 3:
					printf("\n1 point for computer!\n\n");
					c_score++;
					break;
			}
		} else {
			switch (c_choice) {
				case 1:
					printf("\n1 point for computer!\n\n");
					c_score++;
					break;
				case 2:
					printf("\n1 point for you!\n\n");
					p_score++;
					break;
				case 3:
					printf("\nTie!\n\n");
					break;
			}
		}
	}

	if (p_score == 2) { /* Prints out if you won or lost the game */
		printf("\nYOU WIN!\n");
	} else {
		printf("\nYOU LOSE!\n");
	}
	
	return 0;
}

int choose(){ /* Prompts user for choice of 'weapon' and returns choice */
	int choice;	
	printf("Please enter 1 for Rock, 2 for Paper, 3 for Scissors: ");
	scanf("%d", &choice);
	return choice;
} 

	

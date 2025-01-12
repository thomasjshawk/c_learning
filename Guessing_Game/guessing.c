#include <stdio.h>
#include <stdlib.h>

int player_guess();

int main(){
	char name[15];
	int ran = rand() % (10 - 2) +1;
	int guess;
	int num_guesses = 0;

	printf("What is your first name? ");
	scanf("%s", name);
	
	printf("Hello %s, Welcome to the guessing game, please try to guess\n\
	a random number from 1-10 in as few guesses as possible!\n", name);

	do {
		guess = player_guess();
		num_guesses++;
	} while (guess != ran);

	printf("Success! It took you %d guesses to get %d.\n", num_guesses, ran);

	return 0;
}

int player_guess(){
	int pguess;

	printf("Enter your guess between 1 and 10: ");
	scanf("%d", &pguess);

	return pguess;
}


	

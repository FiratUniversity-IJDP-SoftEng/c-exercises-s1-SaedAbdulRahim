#include <stdio.h>

int main(void) {
    int correctGuess = 3;
    int guess;

    printf("I'm Thinking of a Number between 1-5. Try to Guess!\n");

    while (1) {
        printf("Enter your guess: ");

        if (scanf("%d", &guess) != 1) {
            printf("Invalid input! Please enter a whole number.\n");
            while (getchar() != '\n');
            continue;
        }
        if (guess < 1 || guess > 5) {
            printf("That isn't between 1-5. Use your brain!\n");
        }
        else if (guess == correctGuess) {
            printf("Congratulations! You guessed it right.\n");
        }
        else {
            printf("HAHAHA WRONG! TRY AGAIN\n");
        }
    }

    return 0;
}

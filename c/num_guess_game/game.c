#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int min = 1;
  int max = 100;
  srand(time(NULL));
  int secret_number = (rand() % (max - min + 1)) + min;
  int guess, num_guesses = 0;
  printf("Welcome to the number guessing game!\n");
  printf("I'm thinking of a number between %d and %d. Can you guess it?\n", min, max);

  do {
    printf("Take a guess: ");
    scanf("%d", &guess);
    num_guesses++;

    if (guess < secret_number) {
      printf("Your guess is lower. Try again.\n");
    } else if (guess > secret_number) {
      printf("Your guess is higher. Try again.\n");
    }
  } while (guess != secret_number);

  printf("Congratulations! You guessed the number in %d tries.\n", num_guesses);

  return 0;
}

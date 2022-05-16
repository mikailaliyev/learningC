#include <stdio.h>

int main() {
  int secretNumber = 5;
  int guess;
  int guessCount = 3;

  while (guess != secretNumber && guessCount > 0) {
    printf("Enter a number: ");
    scanf("%d", &guess);
    guessCount--;
  }
  
  guess == 5 ? printf("You won!") : printf("You lost!");
  return 0;
}
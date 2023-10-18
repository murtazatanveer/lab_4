/**
 * This program plays a guessing game with the user.
 * It selects a random number between 1 and 1000 and
 * prompts the user to guess the value, informing them
 * of whether or not it is higher or lower than the
 * actual value.  Once the user guesses correctly, the
 * game ends and the number of guesses is displayed.
 * 
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char **argv) {

  // the game will be played by creating a random
  // number between 1 and 1000
  int n = 1000;

  // seed the random number generator
  srand(time(NULL));
  // the program generates a random number between 1 and 1000
  // the user will try to guess what this number is
  int number = (rand() % n) + 1;
  
  printf("\nMade By : Murtaza Tanveer\nReg no : SP23-BSE-096-2C\n\n");

  printf("Guess-A-Number Game!\n\n");

  int guess;


while(1){

  printf("\n\nEnter a number between 1 and %d : ", n);
  
  scanf("%d",&guess);
  
  if(guess==number){
     printf("\n\nCongratulations, you found it!  Number of guesses: %d\n",number);
     break;
  }

  

}




 
  return 0;
}

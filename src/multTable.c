/**
 * Author: 
 * Date: 
 *
 * This program generates a multiplication table
 * of the size given as a command line argument.
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    printf("Error: provide an integer\n");
    exit(1);
  }

  int n = atoi(argv[1]);

  if(n <= 0) {
    printf("empty table!\n");
    exit(0);
  }
else{

// MADE BY : MURTAZA TANVEER
	// DATE : 10/08/2023
	// REG NO : SP23-BSE-096-2C

  printf("____________MULTIPLICATION TABLE____________\n\n\n");


}


  return 0;
}
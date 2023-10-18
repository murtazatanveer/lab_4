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

  printf("\n____________MULTIPLICATION TABLE____________\n\n\n");

   printf("MADE BY : MURTAZA TANVEER\n\nREG NO  : SP23-BSE-096-2C\n\n\n");


   printf("\n\n-- ");

   int m;
   int x=1;
   int y=1;

   for(int r=1;r<=n;r++){
   	printf("%d\t",r);
   }

   printf("\n\n");

   for(int i=1;i<=n;i++){
   	printf("%d  ",x);
   	x++;
   	  for(int j=1;j<=n;j++){

     m=i*j;
	   printf("%d\t",m);

}
 printf("\n\n");
   }

}



  return 0;
}
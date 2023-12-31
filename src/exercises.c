/**
 * Author(s):
 * Date:
 *
 * This is a series of exercises to introduce loop
 * control structures.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {



  if(argc != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);
  
  int i=0;

  // A simple for loop that prints 0 thru 9
  for( i=0; i<10; i++) {
    printf("%d\n", i);
  }
  
printf("\n\n");

  //1. Rewrite the given for loop as an equivalent while loop

 /* for(int i=10; i<20; i+=3) {
    printf("%d ", i);
  }*/

  // After Rewriting

i=10;
  while(i<20){
printf("%d , ",i);
i=i+3;
  }

  printf("\n\n");


  //2. Rewrite the given while loop as an equivalent for loop
  /*int k = 3;
  while(k > -4) {
    printf("%d ", k);
    k--;
  }*/

// After Rewriting

for(int k=3;k>-4;k--){

printf("%d  ", k);

}


  printf("\n\n");

  //3. Print numbers 1 thru n separated by a comma except for
  //   the last one; example: 1, 2, 3, 4, 5

int a;
for(a=1;a<=n;a++){

if(a==n){

printf("%d",a);
break;

}

printf("%d, ",a);

}

printf("\n\n");



  //4. Print squares of numbers 1 thru n separated by a comma
  //   except for the last one; example: 1, 4, 9, 16, 25


  for(a=1;a<=n;a++){

    if(a==n){

printf("%d",a*a);
break;

}

printf("%d, ",a*a);
  }

printf("\n\n");
  

  //5. Compute the summation of numbers 1 thru n and print
  //   the result; example: 1 + 2 + 3 + 4 + 5 = 15

int s1=0;

for(a=1;a<=n;a++){

  s1=s1+a;
  
}
printf("sum of 1 thru %d = %d\n\n",n,s1);



  //6. Compute the summation of squares of numbers 1 thru n
  //   and print the result; example: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55

int s2=0;
int w;

for(a=1;a<=n;a++){

w=a*a;
s2=s2+w;

}

printf("sum of squares of numbers from 1 to %d is %d\n\n",n,s2);


  //7. Compute the summation of even numbers 1 thru n and print
  //   the result; example (n=5): 2 + 4 = 6

int s3=0;

for(a=1;a<=n;a++){

if(a%2==0){
  s3=s3+a;
}

}

printf("sum of even numbers 1 thru %d is %d\n\n",n,s3);


  //8. Write a solution to the following variation of the FizzBuzz
  //   problem.  Print out integers 1 thru n, one to a line, except
  //   that if the integer is divisible by 7 print "Foo" instead.
  //   If the integer is divisible by 11 print "Bar" instead.  If
  //   the integer is divisible by both 7 and 11, print "FooBar"
  //   instead.


  for(a=1;a<=n;a++){
  
   if((a%7==0) && (a%11==0)){
    printf("FooBar ( %d ) \n\n",a);
  
  }

  else if(a%7==0){
    printf("Foo ( %d ) \n\n",a);
  
  }

else if(a%11==0){
    printf("Bar ( %d ) \n\n",a);
    
  }

 
else{
  printf("%d \n\n",a);
}
  

  }
  

  return 0;
}

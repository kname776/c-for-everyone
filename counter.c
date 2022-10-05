/* Created by: Ky Duong
 Hacktoberfest 2022
 Environment: Visual Studio Code
 Language: C
 Github: https://github.com/inorishizuka*/

/* Allows input and output opperations*/
#include <stdio.h>

/* Initialize main body object*/
int main() {
   /* Declare number variable i, declare start and finish points*/
   int i, start, finish;
   /*initialize start and finish points*/
   start = 1;
   finish = 10;
   /*create a for loop, will loop adding 1 unit per cycle until finish condition is met, or i = 10, i is initilized with the start variable in position 1*/
   for(i = start; i <= finish; i++) 
    /* print number i, until finish condition is met */
      printf("%2d\n", i);
   /* End program*/
   return 0;
}
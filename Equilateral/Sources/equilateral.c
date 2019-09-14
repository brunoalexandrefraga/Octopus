#include <stdio.h>

int main ( int argc, char *argv[] ) {
   int sideA, sideB, sideC;
   

   printf ("Enter with the three sides of the triangle: ");
   
   scanf ("%i %i %i", &sideA, &sideB, &sideC);

   if(sideA == sideB && sideB == sideC){

       printf ("The triangle is equilateral\n");
   } else if (sideA != sideB && sideB != sideC && sideA != sideC) {
       
       printf ("The triangle is scalene\n");
   } else {
       
       printf ("The triangle is isosceles\n");
   }

   return 0;
}

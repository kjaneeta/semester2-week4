
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];

    f[0] = 1;

   for(int i = 0; i<20; ++i)
   {
      f[i] = i * f[i-1];
   }

   for(int i = 0; i<20; ++i)
   {
      printf('Factorial of ' + i + ' = ' + f[i]);
   }

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    return 0;
 }

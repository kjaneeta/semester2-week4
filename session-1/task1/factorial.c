
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    long long f[20];

    f[0] = 1;

   for(int i = 1; i<20; ++i)
   {
      f[i] = i * f[i-1];
   }

   for(int i = 0; i<20; ++i)
   {
      printf("Factorial of %d = %lld\n", i, f[i]);
   }

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    return 0;
 }


/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main( void ) {
    int n = 5;
    float *a, *b, *d;  // stack-based pointers

    // allocation of heap memory for vectors
    a = calloc( n, sizeof(float) );
    b = calloc( n, sizeof(float) );
    d = calloc( n, sizeof(float) ) = 0;

    // Initialize with values
   for(int i = 0; i < n; i++) {
      a[i] = 1.0;
      b[i] = (float)(i + 2.0);  // 2.0, 3.0, 4.0, 5.0, 6.0
   }

    /*
    Code to initialise the vectors with numerical data 
    Code to compute the dot product 
    - does this differ from the initial code?
    - note that loop now run k=0;k<n 
    Store your answer in d
    print your final answer
    */



    /*
    Code to compute the dot product
    Store your answer in d
    print your final answer
    */

    for(int i = 0; i<5; i++)
    {
      d = d + a[i]*b[i];
    }

    printf("%f\n", d);
   

    // explicit deallocation of heap memory before exit */
    free(a);
    free(b);
    free(d);

    return 0;
 }
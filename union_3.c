#include <stdio.h>

union job

{

    struct data

    {

         int x;

         double b;

    }S;

    int a;

} U;

int main() {

    U.S.b = 7;
    
    printf("%f ", U.S.b);
    
    U.a = 4;
   
    printf("%d ", U.a);
    
    U.S.x = 5;

    printf("%d\n", U.S.x);

    // U.a is overwitten . Fix the problem.

    // your code

    return 0;

 }
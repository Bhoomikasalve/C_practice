/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
/*
Print multiplication Table of a number: 
multiplicand * multiplier = product.
*/
int main()
{
    int multiplicand, multiplier;
    printf("Enter number whose table you want to print:\n");
    scanf("%d", &multiplicand);
    multiplier = 1;
    while(multiplier <= 10){
    printf("%d X %d = %d\n", multiplicand, multiplier, multiplier * multiplicand);
    multiplier++;
    }
    return 0;
}

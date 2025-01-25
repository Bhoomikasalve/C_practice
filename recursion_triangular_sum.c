/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//recursion
int triangular_sum(int num)
{
if (num == 0) return 0;
else 
return num + triangular_sum(num - 1);
    
}


int main()
{
    int number;
    printf("Enter number for triangular_sum: \n");
    scanf("%d", &number);
    printf("The triangular sum upto %d is %d", number, triangular_sum(number));
    
    return 0;
}

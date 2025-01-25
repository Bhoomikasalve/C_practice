/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//recursion
int number_of_threes(int num)
{
    
int remain, quot;
if (num == 0) 
return 0;
else{
remain = num % 10;
if (remain == 3) return number_of_threes(num / 10) + 1;
else return number_of_threes(num / 10);
}
}


int main()
{
    int number;
    printf("Enter number for calculating number of threes: \n");
    scanf("%d", &number);
    printf("The number of threes in %d are %d", number, number_of_threes(number));
    
    return 0;
}

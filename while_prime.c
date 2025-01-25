/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
/*
Program to print whether the input number 
is a prime number.
*/
int main()
{
    int num, idx, flag = 1;
    printf("Enter the number:\n");
    scanf("%d", &num);
    idx = 2;
    while(idx < num)
    {
    if(num % idx == 0) flag = 0;
    idx++;
    }
    if(flag == 0) 
    printf("%d is not prime.", num);
    else 
    printf("%d is prime", num);
    
    return 0;
}

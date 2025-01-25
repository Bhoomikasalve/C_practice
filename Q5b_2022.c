/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idx1, idx2;
    for(idx1 = 5; idx1 >= 1; idx1--)
    {
        for(idx2 = 1; idx2 <= idx1; idx2++)
        printf("%d ", idx2);
    
        printf("\n");
    }

    return 0;
}

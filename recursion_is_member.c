/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
//recursion examples
int is_member(char str[], char a)
{
    
if (strlen(str) == 0) return 0;
else{
    char first = str[0];
    if(a == first) return 1;
    else 
    {
    int len = strlen(str);
    char remaining[len - 2];
    for(int idx = 0; idx < len - 2; idx++) remaining[idx] = str[idx + 1];
    return is_member(remaining, a);
    }
}
}


int main()
{
    char alpha, str[] = {'a', 'b', 'c'};
    printf("Enter character to search for in the char array: \n");
    scanf(" %c", &alpha);
    printf("The character %c is present: %d", alpha, is_member(str, alpha));
    
    return 0;
}

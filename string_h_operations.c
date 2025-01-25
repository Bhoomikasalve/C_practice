/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int result;
    printf("Enter string 1:\n");
    scanf("%s", str1);
    
    printf("You entered %s with length: %zu\n", str1, strlen(str1));
    
    printf("Enter string 2:\n");
    scanf("%s", str2);
    
    printf("You entered %s with length: %zu\n", str2, strlen(str2));
    
    strcat(str1, str2);
    
    printf("Concatenated string is: %s\n", str1);
    
    result = strcmp(str1, str2);
    
    printf("Comparing strings: %d\n", result);
    
    strcpy(str1, str2);
    
    printf("Copying string 2 into string 1: %s\n", str1);
    
    return 0;
}

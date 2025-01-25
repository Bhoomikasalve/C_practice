/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int len, idx;
    char temp, str[100];
    printf("Enter string you want to reverse:\n");
    scanf("%s", str);
    for(len = 0; str[len] != '\0'; len++);
    //printf("%d", len); 
    for(idx = 0; idx < len / 2 ; idx++)
    {
        temp = str[idx];
        str[idx] = str[len - 1 - idx];
        str[len - 1 - idx] = temp;
    }
    printf("%s\n", str);
    return 0;
}

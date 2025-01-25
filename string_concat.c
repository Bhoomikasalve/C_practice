/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str1[100], str2[100], str3[100];
    int idx1, idx2;
    printf("Enter string1 to be concatenated: \n");
    scanf("%s", str1);
    
    printf("Enter string2 to be concatenated: \n");
    scanf("%s", str2);
    
    idx1 = 0;
    
    while(str1[idx1] !='\0')
    {
        str3[idx1] = str1[idx1];
        idx1++;
    }
    
    idx2 = 0;
    
    while(str2[idx2] !='\0')
    {
        str3[idx1 + idx2] = str2[idx2];
        idx2++;
    } 
    
    printf("Concatenated string: %s", str3);
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
/*
Program to compare length 
of 2 given strings
*/
int main()
{
    char ch, str_l[100], str_r[100];
    int idx_l = 0, idx_r =0, len_l, len_r, out;
    
    printf("Enter the string on left:");
    
    scanf("%s", str_l);
    
    for(idx_l = 0; str_l[idx_l] != '\0'; idx_l++);
    
    printf("Enter the string on right:");
    
    scanf("%s", str_r);
    
    for(idx_r = 0; str_r[idx_r] != '\0'; idx_r++);
    
    len_l = idx_l;
    printf("%d\n",len_l);
    len_r = idx_r;
    printf("%d\n",len_r);
    if(len_l == len_r) out = 0;
    else if (len_l < len_r) out = -1;
    else out = 1;
    
    printf("%d",out);
    
    return 0;
    
}


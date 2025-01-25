/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idx;
    idx= 0;
    while(idx < 10) {printf("%d\t",idx); idx++;}
    //for(idx = 0; idx < 10; idx++) printf("%d\t",idx);
    printf("\n");
    idx = 0;
    while(idx < 10) {printf("%d\t",idx); idx+=2;}
    //for(idx = 0; idx < 10; idx+=2) printf("%d\t",idx);
    printf("\n");
    idx= 1;
    while(idx < 10) {printf("%d\t",idx); idx+=2;}
    //for(idx = 1; idx < 10; idx+=2) printf("%d\t",idx);
    
    char name[] = "Saransh Jagwani";
    printf("\n");
    idx = 0;
    while(idx < 15) {printf("name[%d]: %c\t",idx, name[idx]); idx++;}
    //for(idx = 0; idx < 15; idx++) printf("name[%d]: %c\t",idx, name[idx]);
    printf("\n");
    idx = 0;
    while(idx < 15) {printf("name[%d]: %c\t",idx, name[idx]); idx+=2;}
    //for(idx = 0; idx < 15; idx+=2) printf("name[%d]: %c\t",idx, name[idx]);
    printf("\n");
    idx = 1;
    while(idx < 15) {printf("name[%d]: %c\t",idx, name[idx]); idx+=2;}
    //for(idx = 1; idx < 15; idx+=2) printf("name[%d]: %c\t",idx, name[idx]);
     
    return 0;
}

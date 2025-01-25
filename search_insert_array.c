/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Searching in array\n");
    
    int pos, idx, elem, len, flag = 0;
    int arr[] = {23,34,45,56,67,78,0,0};
    len = sizeof(arr)/ sizeof(arr[0]);
    printf("Enter element to search\n");
    scanf("%d",&elem);
    for(idx = 0; idx < len; idx++){
        if(arr[idx] == elem){
            flag =1;
            pos = idx;
            break;
        }
    }
    
    if(flag == 1) printf("Element: %d found at position: %d\n",elem, pos);
    else printf("Element not found in array\n");
    
    //Insertion at the beginning of array
    printf("Inserting into array\n");
    printf("Enter element to insert at the beginning\n");
    scanf("%d",&elem);
    for(idx = len - 1; idx > 0; idx--){
        arr[idx] = arr[idx -1];
    }
    arr[0] = elem;
    for(idx = 0; idx < len; idx++) printf("arr[%d] = %d\n", idx, arr[idx]);
    
    //Insertion at the ending of the array
    printf("Enter element to insert at ending of the array\n");
    scanf("%d",&elem);
    for( idx = 0; idx < len; idx++ ){
        arr[idx] = arr[idx + 1];
    }
    arr[len - 1] = elem;
    for(idx = 0; idx < len; idx++) printf("arr[%d] = %d\n", idx, arr[idx]);
    
    
    //Insertion in the specified position in the array
    printf("Enter element to insert at given position in the array\n");
    scanf("%d",&elem);
    printf("Enter the position you want to insert, not beginning or ending\n");
    scanf("%d",&pos);
    for( idx = pos + 1; idx < len; idx++ ){
        arr[idx] = arr[idx + 1];
    }
    arr[pos] = elem;
    for(idx = 0; idx < len; idx++) printf("arr[%d] = %d\n", idx, arr[idx]);
    
     return 0;
}

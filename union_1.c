#include <stdio.h>
#include <string.h>
union Record { 
  int i;
  float f;
  char str[20];
};
int main( ) { 
 
  union Record record;
 
  record.i = 10;
  record.f = 220.5;
  strcpy( record.str, "C Programming");
 
  printf( "record.i : %d\n", record.i);
  printf( "record.f : %f\n", record.f);
  printf( "record.str : %s\n", record.str);
 
  return 0;
}
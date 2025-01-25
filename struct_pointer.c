#include<stdio.h>
struct student{
   int sno;
   char sname[30];
   float marks;
};
int main (){
   struct student s;
   struct student *st;
   printf("enter sno, sname, marks:");
   scanf ("%d%s%f", & s.sno, s.sname, &s. marks);
   st = &s;
   printf ("details of the student are");
   printf (" Number = %d ", st ->sno);
   printf (" name = %s ", st->sname);
   printf (" marks =%f ", st ->marks);
   
   return 0;
}
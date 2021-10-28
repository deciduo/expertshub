#include <stdio.h>
#include <conio.h>

void main()
{
   int no1, no2, out1,o2,o3,o4,o5;
   clrscr();
   printf("Enter Input values : ");
   scanf("%d%d",&no1,&no2);
   //printf("Enter Input 2");
   //scanf("%d",&no2);
   out1=no1+no2;
   printf("Sum of values are %d\n", out1);
   o2=no1-no2;
   printf("Sub of values : %d\n",o2);
   getch();
}
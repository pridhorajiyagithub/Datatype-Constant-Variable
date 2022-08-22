#include<stdio.h>
#include<conio.h>
// swapping two value  (without using 3rd variable)
void main()
{
 int a,b; // a=3 , b=2
 clrscr();
 printf("enter any two value ::");
 scanf("%d %d",&a,&b);
 a = a+b;    // a=5
 b = a-b;    // b=3
 a = a-b;    // a=2

 printf("after swapping a = %d\n",a);
 printf("after swapping b = %d",b);
 getch();



}
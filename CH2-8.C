#include<stdio.h>
#include<conio.h>
// swapping two value
void main()
{
 int a,b,c;
 clrscr();
 printf("enter any two value ::");
 scanf("%d %d",&a,&b);
 c=a;
 a=b;
 b=c;

 printf("after swapping a = %d\n",a);
 printf("after swapping b = %d",b);
 getch();



}
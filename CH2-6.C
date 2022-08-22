#include<stdio.h>
#include<conio.h>
#define PI 3.14
//perimeter of circle
void main()
{
 float pc,r;
 clrscr();
 printf("enter value of radius::");
 scanf("%f",&r);
 pc = 2*PI*r;
 printf("perimeter of circle::%.2f",pc);


 getch();
}
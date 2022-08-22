#include<stdio.h>
#include<conio.h>
//area of triangle
void main()
{
 float area,b,h;
 clrscr();
 printf("enter value of base and height of triangle::");
 scanf("%f%f",&b,&h);
 area = b*h*1/2;
 printf("area of triangle = %.2f",area);
 getch();
}
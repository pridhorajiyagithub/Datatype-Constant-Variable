#include<stdio.h>
#include<conio.h>
#define PI 3.14
// area of circle
void main()
{
 float area,r;
 clrscr();
 printf("enter value of radius::");
 scanf("%f",&r);
 area = PI*r*r;
 printf("area of circle::%.2f",area);


 getch();
}
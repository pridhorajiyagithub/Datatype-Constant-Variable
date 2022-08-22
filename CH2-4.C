#include<stdio.h>
#include<conio.h>
//area of rectangle
void main()
{
 float area,l,w;
 clrscr();
 printf("enter value of length and width::");
 scanf("%f%f",&l,&w);
 area = l*w;
 printf("area of rectangle = %.2f",area);
 getch();
}
#include<stdio.h>
#include<conio.h>
//find simple interest p=principal/r=rate of interest/n=number of year
void main()
{
int p,r,n,i;
 clrscr();
 printf("enter value of principal::");
 scanf("%d",&p);
 printf("enter rate of interest::");
 scanf("%d",&r);
 printf("enter number of year::");
 scanf("%d",&n);
 i = (p*r*n)/100;
 printf("simple interest = %d",i);
 getch();
}
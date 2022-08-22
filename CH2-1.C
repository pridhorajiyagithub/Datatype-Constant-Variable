#include<stdio.h>
#include<conio.h>
// performe all arithmetic opration & display them inside frame...
void main()
{
 int a,b,sum,mul,sub,mod,div;

 clrscr();
 printf("enter any two value::");
 scanf("%d %d",&a,&b);
 sum = a+b;
 printf(" _ _ _ _ SUM_ _ _ _ \n");
 printf("|                  |\n");
 printf("|                  |\n");
 printf("|     %d + %d = %d    |\n",a,b,sum);
 printf("|                  |\n");
 printf("|                  |\n");
 printf(" - - - - - - - - - -\n");

 sub = a-b;
  printf(" _ _ _ _ SUB_ _ _ _ \n");
 printf("|                  |\n");
 printf("|                  |\n");
 printf("|    %d - %d = %d    |\n",a,b,sub);
 printf("|                  |\n");
 printf("|                  |\n");
 printf(" - - - - - - - - - -\n");

 mul=a*b;
  printf(" _ _ _ _ MUL_ _ _ _ \n");
 printf("|                  |\n");
 printf("|                  |\n");
 printf("|  %d * %d = %d   |\n",a,b,mul);
 printf("|                  |\n");
 printf("|                  |\n");
 printf(" - - - - - - - - - -\n");

 div= a / b;
  printf(" _ _ _ _ DIV_ _ _ _ \n");
 printf("|                  |\n");
 printf("|                  |\n");
 printf("|   %d / %d = %d    |\n",a,b,div);
 printf("|                  |\n");
 printf("|                  |\n");
 printf(" - - - - - - - - - -\n");

 mod =a * b/100;
  printf(" _ _ _ _ MOD_ _ _ _ \n");
 printf("|                  |\n");
 printf("|                  |\n");
 printf("|    %d %% %d = %d   |\n",a,b,mod);
 printf("|                  |\n");
 printf("|                  |\n");
 printf(" - - - - - - - - - -\n");
 getch();



}
			//simple interesr calculator;

#include<stdio.h>
#include<conio.h>
void main()
{
int principal;
int rate;
int time;
int interest;
int amount;
clrscr();
printf("\n enter your prinicipal amount.....");
scanf("%d",&principal);
printf("\nenter your annual rate.......");
scanf("%d",&rate);
printf("\n enter your year time when you give money back.....");
scanf("%d",&time);
interest=principal*rate*time/100;
printf("your interest rate is := %d",interest);
amount=principal+interest;
printf("\n your total given money is:=%d",amount);





getch();
}
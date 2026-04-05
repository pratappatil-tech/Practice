//////////////////////////////////////////////////////////////////////
//
//  File name :     Program3.c
//  Descreption :   Get age and Display ticket prize
//  Author :        Pratap Sanjay Patil
//  Date :          05/04/2026
//
//////////////////////////////////////////////////////////////////////
/*
start
   get age as input from the user
     if age is o to 5 0 ticket price
     if age is 5 to 18 700 ticket price
     if age is 18 to 50 999 ticket price
     if age is 50 onword 500 ticket price
  stop
*/

#include<stdio.h>

void DisplayTicketPrize(int iAge)
{
    if((iAge >= 0) & (iAge <= 5))
    {
        printf("Ticket Prize is 0");
    }
    else if((iAge > 5) & (iAge <= 18))
    {
        printf("Ticket Prize is 700");
    }
    else if((iAge > 18) & (iAge <= 50))
    {
        printf("Ticket Prize is 999");
    }
    else
    {
        printf("Ticket prize is 500");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age :\n");
    scanf("%d",&iAge);

    if(iAge >= 100)
    {
        printf("Your age is not Allowed");
        return 1;
    }

    DisplayTicketPrize(iAge);

    return 0;
}
//////////////////////////////////////////////////////////////////////
//
//  File name :     Program5.c
//  Descreption :   Get age and Display ticket prize
//  Author :        Pratap Sanjay Patil
//  Date :          06/04/2026
//
//////////////////////////////////////////////////////////////////////
/*
    Start
        Accept age from user
            If age is less than 5 then there will no ticket
            If it is in between 5 to 18 then it will be 700
            It it is in betwween 18 to 50 it will be 999
            And if it is greater than 50 then it will be 500
    Stop
*/

#include<stdio.h>

# define ERR_INVALID_AGE -1

int CalculateTicket(int iAge)
{
    int iPrize;

    if((iAge < 0) & (iAge > 100))
    {
        return ERR_INVALID_AGE;
    }

    if((iAge >= 0) && (iAge <= 5))
    {
        iPrize = 0;
    }
    else if((iAge > 5) && (iAge <= 18))
    {
        iPrize = 700;
    }
    else if((iAge > 18) && (iAge <= 50))
    {
        iPrize = 999;
    }
    else if(iAge > 50)
    {
        iPrize = 500;
    }

    return iPrize;
}

int main()
{
    int iAge = 0, iRet = 0;

    printf("Enter your Age :\n");
    scanf("%d",&iAge);

    iRet = CalculateTicket(iAge);

    printf("Ticket Prize for you is : %d\n",iRet);

    return 0;
}
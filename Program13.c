///////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program13.c
//  Descreption :   take value from user and Give factorial
//  Author :        Pratap Sanjay Patil
//  Date :          08/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define INVALID_INPUT -1

int Factorial(unsigned int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        return INVALID_INPUT;
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    unsigned int iValue = 0,iRet = 0;
    printf("Enter the Number : \n");
    scanf("%u",&iValue);

    iRet = Factorial(iValue);

    if(iRet == INVALID_INPUT)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("The Factorial of %d is : %d\n",iValue,iRet);
    }
    
    return 0;
}
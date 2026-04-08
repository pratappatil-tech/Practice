///////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program12.c
//  Descreption :   take value from user and Give factorial
//  Author :        Pratap Sanjay Patil
//  Date :          07/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("The Factorial of %d is : %d\n",iValue,iRet);
    
    return 0;
}
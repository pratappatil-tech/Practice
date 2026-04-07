///////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program9.c
//  Descreption :   take value from user and print the sum from 0 to that value
//  Author :        Pratap Sanjay Patil
//  Date :          07/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Sum(int iNo)
{
    int iSum = 0, iCnt = 0;
    for(iCnt = 0;iCnt <= iNo;iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("The Sum is : %d\n",iRet);
    
    return 0;
}
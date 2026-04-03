//////////////////////////////////////////////////////////////////////
//
//  File name :     Program2.c
//  Descreption :   Used to calculate persentage
//  Author :        Pratap Sanjay Patil
//  Date :          03/04/2026
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

float persentage(float iTotal , float iObtain)
{
    float fResult = 0.0;
    fResult = ((iObtain/iTotal)*100);

    return fResult;
}

int main()
{
    int iVal1 = 0, iVal2 = 0;
    float fRet = 0;

    printf("Enter Total value\n");
    scanf("%d",&iVal1);
    
    printf("Enter Obtained value\n");
    scanf("%d",&iVal2);

    fRet = persentage(iVal1,iVal2);

    printf("Persentage is : %.2f%% ",fRet);

    return 0;
}
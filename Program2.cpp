//////////////////////////////////////////////////////////////////////
//
//  File name :     Program2.cpp
//  Descreption :   Used to calculate persentage
//  Author :        Pratap Sanjay Patil
//  Date :          03/04/2026
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class persentageCalculator
{


};

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
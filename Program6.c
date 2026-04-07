//////////////////////////////////////////////////////////////////////
//
//  File name :     Program6.c
//  Descreption :   Display Hello Words 5 times
//  Author :        Pratap Sanjay Patil
//  Date :          07/04/2026
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d : Hello Pratap\n",iCnt);
    }
}

int main()
{

    Display();
    return 0;
}
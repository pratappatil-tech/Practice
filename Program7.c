///////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program7.c
//  Descreption :   Get a Number from user and Display 5 along with its index times
//  Author :        Pratap Sanjay Patil
//  Date :          07/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d : %d\n",iCnt ,iNo);
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the Number : \n");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}
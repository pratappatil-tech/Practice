///////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program8.c
//  Descreption :   take the no as a input from the user and print hello that no times
//  Author :        Pratap Sanjay Patil
//  Date :          07/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d : Hello\n",iCnt);
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
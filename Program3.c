//////////////////////////////////////////////////////////////////////
//
//  File name :     Program3.c
//  Descreption :   Get persentage and Display Classes
//  Author :        Pratap Sanjay Patil
//  Date :          05/04/2026
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayClass(float fValue)
{
    if((fValue == 80) & (fValue > 80.00))
    {
        printf("You got Distiction class");
    }
    else if((fValue > 70.00) & fValue < 80.00)
    {
        printf("You got First Class");
    }
    else if((fValue < 70.00) & (fValue > 60.00))
    {
        printf("You got Second Class");
    }
    else if ((fValue < 60.00) & (fValue >= 35.00))
    {
        printf("You got Pass Class");
    }
    else
    {
        printf("You got Fail Class");
    }
    
}

int main()
{
    float fPer = 0.0f;

    printf("Enter Persentage\n");
    scanf("%f",&fPer);

    DisplayClass(fPer);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program10.c
//  Descreption :   take a no from user and check whether even
//  Author :        Pratap Sanjay Patil
//  Date :          07/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckSum(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CheckSum(iValue);

    if(bRet == true)
    {
        printf("%d : The Number is Even\n",iValue);
    }
    else
    {
        printf("%d : The Number is Not Even\n",iValue);
    }

    return 0;
}
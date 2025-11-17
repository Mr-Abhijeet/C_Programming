#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;
    int iStart;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 != 0)
    {
        iNo -= 1;
    }

    for(iStart = iNo; iStart >= 2; iStart -= 2)
    {
        iFact *= iStart;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Even Factorial of number is %d",iRet);

    return 0;
}
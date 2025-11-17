#include<stdio.h>
#include <stdlib.h>

int Factorial(int iNo)
{
    int iFact = 1;
    iNo = abs(iNo);
    while(iNo > 0)
    {
        iFact = iFact * iNo;
        iNo--;
    }
    return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is %d",iRet);

    return 0;
}
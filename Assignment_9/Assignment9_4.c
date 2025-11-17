#include<stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;
    int iStart = (iNo > 0) ? iNo : -iNo;
    
    while(iStart > 0)
    {
        if(iStart % 2 != 0)
        {
            iFact *= iStart;
        }
        iStart--;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Odd Factorial of number is %d",iRet);
    return 0;
}
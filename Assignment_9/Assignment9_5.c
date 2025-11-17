#include<stdlib.h>
#include<stdio.h>

int EvenFactorial(int n) 
{
    int result = 1;
    for (int i = 2; i <= abs(n); i += 2) 
    {
        result *= i;
    }
    return result;
}

int OddFactorial(int n) 
{
    int result = 1;
    for (int i = 1; i <= abs(n); i += 2) 
    {
        result *= i;
    }
    return result;
}

int FactorialDiff(int iNo) 
{
    return EvenFactorial(iNo) - OddFactorial(iNo);
}

int main() 
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    iRet = FactorialDiff(iValue);
    printf("Factorial difference is %d",iRet);
    return 0;
}
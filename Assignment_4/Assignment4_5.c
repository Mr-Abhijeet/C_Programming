#include<stdio.h>

int FactDiff(int iNo)
{
    int i = 0;
    int sumFactors = 0;
    int sumNonFactors = 0;

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            sumFactors += i;
        }
        else
        {
            sumNonFactors += i;
        }
    }

    return sumFactors - sumNonFactors;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    
    printf("%d",iRet);

    return 0;
}
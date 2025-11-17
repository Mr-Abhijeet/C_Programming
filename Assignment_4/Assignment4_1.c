#include<stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int product = 1;
    
    for(i = 1; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            product = product * i;
        }
    }
    return product;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("%d",iRet);

    return 0;
}
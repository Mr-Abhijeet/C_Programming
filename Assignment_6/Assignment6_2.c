#include<stdio.h>

bool ChkGreater(int iNo)
{
    return iNo > 100;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}
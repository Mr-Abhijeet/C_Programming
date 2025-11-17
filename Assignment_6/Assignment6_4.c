#include<stdio.h>

int Multiply(int a, int b, int c)
{
    if(a == 0 || b == 0 || c == 0)
    {
        if(a == 0 && b == 0 && c == 0)
            return 0;

        else if(a == 0)
            return b * c;

        else if(b == 0)
            return a * c;

        else
            return a * b;
    }

    else
        return a * b * c;
}

int main()
{
    int iValue1 = 0,iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);
    
    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d", iRet);
    
    return 0;
}
#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    
    if(iNo == 0)
    {
        printf("Multiplication table of 0 is not meaningful.\n");
        return;
    }
    
    int iAbsNo = (iNo < 0) ? -iNo : iNo;
    
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iAbsNo * iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    TableRev(iValue);
    
    return 0;
}
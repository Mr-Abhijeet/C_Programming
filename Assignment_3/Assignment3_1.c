#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 1;
    int iNum = 2;

    while(iCnt <= iNo)
    {
        printf("%d ", iNum);
        iNum += 2; // increment by 2 to get next even number
        iCnt++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);

    return 0;
}
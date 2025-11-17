#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    // Write Updater
    while( iCnt < iNo )
    {
        printf("* ");
        iCnt++;  // Updater for iCnt
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number ");
    scanf("%d", &iValue);  // Input format specifier for integer is %d
    Display(iValue);
    return 0;
}
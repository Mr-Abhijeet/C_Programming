#include<stdio.h>

void Display(int iNo)
{
    if(iNo < -9 || iNo > 9)
    {
        printf("Invalid Number\n");
    }
    else
    {
        char *numbers[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        
        if(iNo < 0)
        {
            iNo = -iNo; 
        }
        
        printf("%s\n", numbers[iNo]);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
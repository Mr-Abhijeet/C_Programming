#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int i = 0;
    int absNo = abs(iNo);
    
    for(i = 0; i < absNo; i++)
    {
        printf("* ");
    }
    
    for(i = 0; i < absNo; i++)
    {
        printf("# ");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number ");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}
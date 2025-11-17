#include<stdio.h>

void NonFact(int iNo)
{
    int i = 0;
    printf("Non-factors of %d are: ", iNo);
    for(i = 1; i <= iNo; i++)
    {
        if(iNo % i != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    NonFact(iValue);
    
    return 0;
}
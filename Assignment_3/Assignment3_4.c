#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(smaller(cValue))
    {
        printf("%c", tocapital(cValue));
    }
    else if(capital(cValue))
    {
        printf("%c", tosmaller(cValue));
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");

    scanf(" %c",&cValue);

    DisplayConvert(cValue);
    
    return 0;
}
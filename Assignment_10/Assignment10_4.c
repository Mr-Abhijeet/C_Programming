#include<stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * (5.0/9.0);
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("%.5lf\n", dRet);
    return 0;
}
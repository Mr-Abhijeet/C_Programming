int MultDigits(int iNo)
{
    int iMult = 1;
    if(iNo == 0)
        return 0;
    while(iNo != 0)
    {
        iMult = iMult * (iNo % 10);
        iNo = iNo / 10;
    }
    return iMult;
}
int main()
{ 
    int iValue = 0;

    int iRet = 0;

    printf("Enter number");

    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d", iRet);

    return 0;

}
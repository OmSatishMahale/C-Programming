//  iteration

#include<stdio.h>

int SumDigits(int iNo)
{
    int iSum = 0, iDigit = 0;

    printf("Original value of iNo is %d\n",iNo);

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        iSum = iSum + iDigit;     
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    iRet = SumDigits(iValue);

    printf("Summ  of digits is : %d\n",iRet);
    
    return 0;
}
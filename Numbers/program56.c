#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //input : 6     iCnt = 2
    //input : 8     iCnt = 2
    //input : 9     iCnt = 3
    //input : 12     iCnt = 3

    //input : 13     iCnt = 7
    //input : 17    iCnt = 9
    //input : 23     iCnt = 12
    //input : 29     iCnt = 15

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;          // optimization
        }
    }

    if (iCnt > (iNo/2))    // no factors
    {
        return true;
    }
    else                    // atleast 1 factor
    {    
        return false;
    }
}

int main()
{
    int iValue = 0; 
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is Prime number\n", iValue);
    }
    else
    {
        printf("%d is not Prime number\n", iValue);
    }

    return 0;
}

/*
    time complexity : For Prime -  N/2
    time complexity : For Non Prime -  either 1 or 2

*/
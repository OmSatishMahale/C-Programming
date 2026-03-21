#include<stdio.h>

//  Dynamic Function

void Display(int iFrequency)       
{
    int iCnt = 0;

    //filter
    if(iFrequency < 0)
    {
        printf("Invalid input");
        return;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("Jay Ganensh...\n");
    }   
}

int main()
{
    int iCount = 0;

    printf("Enter te frequency : \n");
    scanf("%d",&iCount);

    Display(iCount);      

    return 0;
}

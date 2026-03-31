#include<stdio.h>

void strcpyX(char *scr, char *dest)
{
    while(*scr != '\0')
    {
        *dest = *scr;

        scr++;
        dest++;     
    } 
    
    *dest = '\0';
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("copied string is : %s\n",Brr);

    return 0;
}
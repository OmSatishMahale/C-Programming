#include<stdio.h>

void strcatX(char *scr, char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while(*scr != '\0')
    {
        *dest = *scr;

        scr++;
        dest++;     
    } 
    
    *dest = '\0';       // *dest =*scr
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter source string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter destination string : \n");
    scanf(" %[^'\n']s",Brr);

    strcatX(Arr,Brr);

    printf("copied string is : %s\n",Brr);

    return 0;
}
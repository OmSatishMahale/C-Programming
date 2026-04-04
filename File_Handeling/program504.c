#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    // O_RDONLY     O_WONLY     o_RDWR     O_TRUNC      O_CREAT    O_APPEND
    fd = open("LB.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("file gets successfully opened with fd : %d\n",fd);
    }

    return 0;
}
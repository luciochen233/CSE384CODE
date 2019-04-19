/*
main_echo.c HW4 CSE384
@author Guoliang Chen
This file contains the main function for 
make echo
*/
#include "header.h"

int main(int argc, char **argv)
{
    if (argc != 4)
        exit(0);

    if (my_strlen(argv[2]) == 1 && argv[2][0] == '@')
    { // if the second argument only have one char and it's @
        //printf("TRUNCATE!!!\n");
        int fd = open(argv[3], O_RDWR | O_TRUNC | O_CREAT, 0666);
        my_echo(fd, argv[1]);
        close(fd);
    }

    else if (my_strlen(argv[2]) == 2 && argv[2][0] == '@' && argv[2][1] == '@')
    {// if the second argument only have two char and they are both @
        //printf("APPEND!!!\n");
        int fd = open(argv[3], O_RDWR | O_APPEND | O_CREAT, 0666);
        my_echo(fd, argv[1]);
        close(fd);
    }
    exit(0);
}

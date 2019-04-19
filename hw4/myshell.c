/*
myshell.c HW4 CSE384
@author Guoliang Chen
This file contains all the method that we need in main
*/
#include "header.h"
int my_strlen(char *str) // to get the length of str
{
    int count = 0;
    for (char *p1 = str; *p1 != '\0'; p1 += 1) //plus one until reach \0
    {
        count++;
    }
    return count;
}

void my_cat(char *pathname) // open up a file
{
    int fd = open(pathname, O_RDWR);
    if (fd == -1)
    {
        printf("the file does not exist!");
        printf("This program will now end\n");
        exit(0);
    }
    char buff[10];
    int len = 0;
    while ((len = read(fd, buff, 10)) != 0) // read until reach the end
    {
        write(1, buff, len);
    }
    close(fd);
}

void my_touch(char *pathname)
{
    int fd = open(pathname, O_RDWR | O_CREAT, 0666); // if not exist, creat.
    if (fd == -1) // if failed, exit
        exit(0);
    close(fd);
}

void my_echo(int fd, char *str)
{
    if (fd == -1)
        exit(0);
    write(fd, str, my_strlen(str));
    write(fd, "\n", 1); //mimic the echo, put a new line after an insertion
}

void my_printf(char *str)
{
    write(1, str, my_strlen(str)); // print to stdout
}

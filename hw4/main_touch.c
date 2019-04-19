/*
main_touch.c HW4 CSE384
@author Guoliang Chen
This file contains the main fuction for 
make touch
*/
#include "header.h"

int main(int argc, char **argv)
{
    if (argc == 1)
        exit(0); // if there's only one argument, then exit
    for (int i = 1; i < argc; i++)
    {
        my_touch(argv[i]); //creat all the files in arguments
    }
    exit(0);
}

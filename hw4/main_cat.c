/*
main_cat.c HW4 CSE384
@author Guoliang Chen
This file contains the main function for 
make cat
*/
#include "header.h"

int main(int argc, char **argv)
{
    if (argc == 1)
        exit(0); // if there's only one argument(no file to cat)
    int i;
    for (i = 1; i < argc; i++) // ability to read more than one file
    {
        my_cat(argv[i]);
    }
    exit(0);
}

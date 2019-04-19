/*
main_echo0.c HW4 CSE384
@author Guoliang Chen
This file contains the main function for 
make echo0
*/
#include "header.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        exit(0); //if there's more or less than two arguments.
    my_echo(1, argv[1]); // only output the second argument
    exit(0);
}

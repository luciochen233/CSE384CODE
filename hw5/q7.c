#include <stdio.h>
#include "csapp.h"
void handler_1(int sig)
{
    printf("you can't end me\n");
    //do Nothing
}
void handler_alarm(int sig)
{
    exit(0);
}
int main(int argc, char **argv)
{
    signal(SIGINT, handler_1);
    signal(SIGALRM, handler_alarm);
    if (argc != 2) //wrong number of argument
        exit(0);
    if (argc < 0 ) //time can't be smaller than 0
        exit(0);
    int x = atoi(argv[1]);
    alarm(x);
    while (1)
    {
    }
}
#include <stdio.h>
#include "csapp.h"
void handler_1(int sig)
{
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
    if (argc != 2)
        exit(0);
    int x = atoi(argv[1]);
    alarm(x);
    while (1)
    {
    }
}
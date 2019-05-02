#include <stdio.h>
#include "csapp.h"
void handler_3(int sig)
{
    printf("3\n");
    signal(SIGINT, SIG_DFL);
}
void handler_2(int sig)
{
    printf("2\n");
    signal(SIGINT, handler_3);
}
void handler_1(int sig)
{
    printf("1\n");
    signal(SIGINT, handler_2);
}
int main()
{
    signal(SIGINT, handler_1);
    while (1)
    {
    }
}
#include <stdio.h>
#include "csapp.h"
void sigint_handler(int sig)
{
    // Print “CSE384-Test”, schedule next alarm for 5 seconds
    //Missing code here
    printf("CSE384-Test\n");
    alarm(5);
}
void alarm_handler(int sig)
{
    //Print “CSE384-Alarm”,set a new alarm for 1 seconds
    //Missing code here
    //static int beeps = 0;
    printf("CSE384-Alarm\n");
    // if (++beeps < 5)
         alarm(1); /* Next SIGALRM delivered in 1 second */
    // else
    // {
    //     printf("BOOM!\n");
    //     exit(0);
    // }
}
int main()
{
    //Missing code here
    if (signal(SIGALRM, alarm_handler) == SIG_ERR) // Install SIGALRM handle
        printf("signal error");
    if (signal(SIGINT, sigint_handler) == SIG_ERR) // Install SIGALRM handle
        printf("signal error");
    alarm(1);
    while (1)
    {
    }
    exit(0);
}
#include <stdio.h>
#include "csapp.h"
void sigint_handler(int sig)
{
    // Print “CSE384-Test”, schedule next alarm for 5 seconds
    
    printf("CSE384-Test\n");
    alarm(5);
}
void alarm_handler(int sig)
{
    //Print “CSE384-Alarm”,set a new alarm for 1 seconds
    
    printf("CSE384-Alarm\n");
    
    alarm(1); 
    
}
int main()
{
    
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
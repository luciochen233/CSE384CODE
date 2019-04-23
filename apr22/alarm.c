#include "csapp.h"
//http://csapp.cs.cmu.edu/2e/ics2/code/include/csapp.h
void unix_error(char *msg) /* Unix-style error */
{
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
    exit(0);
}
void handler(int sig)
{
    static int beeps = 0;
    printf("BEEP\n");
    if (++beeps < 5)
        alarm(1); /* Next SIGALRM delivered in 1 second */
    else
    {
        printf("BOOM!\n");
        exit(0);
    }
}
int main()
{
    if (signal(SIGALRM, handler) == SIG_ERR) // Install SIGALRM handle
        unix_error("signal error");
    alarm(1); /* Next SIGALRM will be delivered in 1s */
    while (1)
    { /* Signal handler returns control here */
    }
    exit(0);
}
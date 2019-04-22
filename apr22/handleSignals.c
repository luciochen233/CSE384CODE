#include "csapp.h"         //http://csapp.cs.cmu.edu/2e/ics2/code/include/csapp.h
void unix_error(char *msg) /* Unix-style error */
{
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
    exit(0);
}
void handler(int sig) /* SIGINT handler */
{
    printf("Caught SIGINT\n");
    exit(0);
}
int main()
{
    if (signal(SIGINT, handler) == SIG_ERR) // Install the SIGINT han
        unix_error("signal error");
    while (1)
    {
        ; /* Signal handler returns control here each time */
    }     //or you can use the system function: pause()
    exit(0);
}
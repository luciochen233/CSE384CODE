#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include "csapp.h"         //http://csapp.cs.cmu.edu/2e/ics2/code/include/csapp.h

void handler(int sig) /* SIGINT handler */
{
    printf("Caught SIGUSER1\n");
    exit(0);
}

int main(){
    printf("pid for this process is: %d\n",(int)getpid());
    if (signal(SIGUSR1, handler) == SIG_ERR) // Install the SIGINT han
        printf("SIG Error");
    while (1)
    {       /* Signal handler returns control here each time */
    }       //or you can use the system function: pause()
    exit(0);
    return 0;
    
}
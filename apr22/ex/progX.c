#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include "csapp.h"         //http://csapp.cs.cmu.edu/2e/ics2/code/include/csapp.h

void handler(int sig) /* SIGINT handler */
{
    static int usr1 = 0;    //counter for SIGUSR1
    static int usr2 = 0;    //counter for SIGUSR2
    if(sig == SIGUSR1){
        usr1++;
        printf("received SIGUSR1\n");
    }
    else if(sig == SIGUSR2){
        usr2++;
        printf("received SIGUSR2\n");
    }

    if(usr1>2 && usr2>3){ //if usr1 is greater than 1 and usr2 is greater than three
        printf("killed\n");
        exit(0);
    }
}


int main(){
    printf("pid for this process is: %d\n",(int)getpid());
    if (signal(SIGUSR1, handler) == SIG_ERR) // Install the SIGINT han
        printf("signal error");

    if (signal(SIGUSR2, handler) == SIG_ERR) // Install the SIGINT han
        printf("signal error");
    
    while (1)
    {
        ; /* Signal handler returns control here each time */
    }     //or you can use the system function: pause()
    exit(0);
    return 0;
    
}
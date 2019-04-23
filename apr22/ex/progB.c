#include <sys/types.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h> /* atoi */
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("input a PID that will terminated with SIGUSR1");
        return 1;
    }

    pid_t pid = (pid_t)atoi(argv[1]); //tranlate string into pid_t
    int sig = SIGUSR1;
    kill(pid, sig);
    exit(0);
}
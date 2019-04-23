#include <sys/types.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h> /*sleep()*/
#include <stdlib.h> /* atoi */
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("input a PID that will terminated with SIGUSR1 and SIGUSR2\n");
        return 1;
    }

    pid_t pid = (pid_t)atoi(argv[1]);

    { // block for sending SIGUSR1 and SIGUSR2
        printf("Sending SIGUSR1 to pid: %d\n", pid);
        kill(pid, SIGUSR1);
        sleep(1); //sleep for one second in between command
        printf("Sending SIGUSR2 to pid: %d\n", pid);
        kill(pid, SIGUSR2);
        sleep(1);
        printf("Sending SIGUSR1 to pid: %d\n", pid);
        kill(pid, SIGUSR1);
        sleep(1);
        printf("Sending SIGUSR2 to pid: %d\n", pid);
        kill(pid, SIGUSR2);
        sleep(1);
        printf("Sending SIGUSR1 to pid: %d\n", pid);
        kill(pid, SIGUSR1);
        sleep(1);
        printf("Sending SIGUSR2 to pid: %d\n", pid);
        kill(pid, SIGUSR2);
    }
    exit(0);
}
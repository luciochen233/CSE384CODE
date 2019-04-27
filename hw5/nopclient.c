#include "socket_helper.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) 
{
    int clientfd, port;
    char *host, buf[MAXLINE];
    if (argc != 3) 
    {
    fprintf(stderr, "usage: %s <host> <port>\n", argv[0]);
    exit(0);
    }
    host = argv[1];
    port = atoi(argv[2]);
    clientfd = open_clientfd(host, port);
    //TODO Your homework code goes below
    exit(0);
}
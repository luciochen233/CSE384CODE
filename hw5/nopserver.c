#include "socket_helper.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char **argv)
{
    int listenfd, connfd, port;
    socklen_t clientlen;
    struct sockaddr_in clientaddr;
    struct hostent *hp;
    char *haddrp;
    if (argc != 2)
    {
        fprintf(stderr, "usage: %s <port>\n", argv[0]);
        exit(0);
    }
    port = atoi(argv[1]);
    listenfd = open_listenfd(port);
    while (1)
    {
        clientlen = sizeof(clientaddr);
        connfd = accept(listenfd, (SA *)&clientaddr, &clientlen);
        printf("Socket connected: %d\n", connfd);
        char buf[100];
        int len = 0;
        while ((len = read(connfd, buf, 100)) <= 0) // read until reach the end
        {
            if(len <0) printf("error");
            write(1, buf, len);
            //printf("read\n");
        }
        printf("\n%s\n",buf);
        
        //TODO Your homework code goes below
    }
    exit(0);
}
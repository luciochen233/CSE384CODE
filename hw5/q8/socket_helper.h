#define MAXLINE 100
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <strings.h> //for bzero()
#include <netdb.h> //for DNS
#define LISTENQ 100
typedef struct sockaddr SA;
extern int open_listenfd(int port);
extern int open_clientfd(char *hostname, int port);
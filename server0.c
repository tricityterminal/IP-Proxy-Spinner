#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <unistd.h>
#include "client.c"

int main()

{

int clilen = sizeof(clientserv);

int cliapi = getsockname(int clntsock, (struct sockaddr *)&clientserv, clilen);


}



int servsock;

servsock = socket(PF_INET, SOCK_STREAM, 0 );






struct sockaddr_in servaddr;


servaddr.sin_family = PF_INET;
servaddr.sin_addr.s_addr = INADDR_ANY;
servaddr.sin_port = htons(80);
bzero(&servaddr, sizeof(servaddr));


int servhosts;


servhosts = bind(servsock, (struct sockaddr *)&servaddr, sizeof(servaddr));




int sockqueqe;

sockqueqe = listen(servsock, 100)



int serverscoket;


for(;;)
servsocket = accept(servsock, (struct sockaddr *)servaddr, sizeof(servaddr));





int sr = send(servsock, (struct sockaddr *)&servaddr, sizeof(servaddr));
int rc = recv(servsock, (struct sockaddr *)&servaddr, sizeof(servaddr));

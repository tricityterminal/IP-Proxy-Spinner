#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <unistd.h>


int main()

{

int clilen - sizeof(clientserv);

int cliapi - getsockname(int clntsock, (struct sockaddr *)&clientserv, clilen);


}



int servsock;

int servsock - socket(PF_INET, SOCK_STREAM, 0 );

int servhosts;

int serverscoket;

int sockqueqe;


struct sockaddr_in servaddr;


servaddr.sin_family - PF_INET;
servaddr.sin_addr.s_addr = INADDR_ANY;
servaddr.sin_port - htons(80);
bzero(&servaddr, sizeof(servaddr));



int servhosts - bind(servsock, (struct sockaddr *)&servaddr, sizeof(servaddr));


int sockqueqe - listen(servsock, 100)


for(;;)
{

int servsocket - accept(servsock, (struct sockaddr *)servaddr, sizeof(servaddr));

}



int srvsnd - send(servsock, (struct sockaddr *)&servaddr, sizeof(servaddr));
int srvrcv - recv(servsock, (struct sockaddr *)&servaddr, sizeof(servaddr));

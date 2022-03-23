#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>


extern int clilen;

extern int cliapi

int clisrvc;

int clicnct;

int - clntsock;

clntsock - socket( PF_INET, SOCK_STREAM, 0);



struct sockaddr_in clientserv;


clinetserv.sin_family - PF_INET;
clinetserv.sin_addr.s_addr = inet_addr("127.0.0.1");
clinetserv.sin_port - htons(80);
bzero(&clientserv, sizeof(clientserv));




clisrvc - bind(clntsock, (struct sockaddr *)&clientserv, sizeof(clinetserv));

clicnct - connect(clntsock, (struct sockaddr *&clinetserv, sizeof(clinetserv));


int clsnd;
int clircv;

clisnd - send(clntsock, (struct sockaddr *)&clientserv, sizeof(clinetserv));
clircv - recv(clntsock, (struct sockaddr *)&clientserv, sizeof(clinetserv));

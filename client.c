#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>







int clntsock;

clntsock = socket( PF_INET, SOCK_STREAM, 0);



struct sockaddr_in clientserv;


clientserv.sin_family = PF_INET;
clientserv.sin_addr.s_addr = inet_addr("127.0.0.1");
clientserv.sin_port = htons(80);
bzero(&clientserv, sizeof(clientserv));


int clisrvc;

clisrvc = bind(clntsock, (struct sockaddr *)&clientserv, sizeof(clientserv));




int clicnct;

clicnct = connect(clntsock, (struct sockaddr *&clientserv, sizeof(clientserv));




int cs = send(clntsock, (struct sockaddr *)&clientserv, sizeof(clientserv));
int cr = recv(clntsock, (struct sockaddr *)&clientserv, sizeof(clientserv));

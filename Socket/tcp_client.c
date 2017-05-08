#include <stdio.h>
#include <stdlib.h>
/*Type and socket functions*/
#include <sys/types.h>
#include <sys/socket.h>
/*Storing address information*/
#include <netinet/in.h>

int main(int argc, char const *argv[]) {

  /*create integer to contain socket information*/
  int networkSocket;
  /*parameters = (socket_domain, socket_type[TCP], protocol[0=default]*/
  networkSocket = socket(AF_INET, SOCK_STREAM, 0);
  /*Above is one side of a socket connection*/

  /*get address for socket - struct addr hold information about address*/
  struct sockAddr in server_address;
  /*Set type of address*/
  server_address.sin_family = AF_INET;
  /*socket port - htons() converts port num into apprpriate data format*/
  server_address.sin_port = htons(9002);
  /*sin_addr is a call to a strcut, this line is calling another feild in sin struct*/
  server_address.sin_addr.s_addr = INADDR_ANY;
  /*INADDR_ANY - conect to any ip address mainly 0.0.0.0.*/

  /*connecting - cast address to correct struct type and pass to function*/
  int connectionStatus = connect(networkSocket, (struct sockAddr *) &server_address, sizeof(server_address));
  /*connect should return an int to confirm connection 0 = true -1 = false*/

  /*check connection status*/
  if (connectionStatus == -1) {
    printf("Socket connection failure. \n\n")
  }

  return 0;
}

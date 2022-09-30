#ifndef Socket_hpp
#define Socket_hpp

#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace SCK {
    
class Socket {

    private:
        struct sockaddr_in address;
        int sock;
        int connection;

    public: 
        Socket(int domain, int socket_type, int protocol, int port, u_long interface) {

        }

        virtual int connect_to_network(int sock, struct sockaddr_in address) = 0; 

        void test_connection(int);

        struct sockaddr_in get_address();

        //getters
        int get_sock();

        int get_connection();

        //setters

        void set_connection(int);
        
};

}
#endif
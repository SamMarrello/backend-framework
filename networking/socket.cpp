#include <socket.hpp>

//default constructor

SCK::Socket::Socket(int domain, int socket_type, int protocol, int port, u_long interface) {
    
    //define address structure
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);
    //establishing socket
    sock = socket(domain, socket_type, protocol);
    test_connection(sock);
    //establishing network connection
    connection = connect_to_network(sock, address);
    test_connection(connection);
}

//virtual function, confirms socket or connection has been properly made

void SCK::Socket::test_connection(int item_to_test) {
    
    if (item_to_test < 0) {
        perror("Failed to connect");
        exit(EXIT_FAILURE);
    }

}

//getter functions

struct sockaddr_in SCK::Socket::get_address() {
    return address;
}

int SCK::Socket::get_sock() {
    return sock;
}

int SCK::Socket::get_connection() {
    return connection;
}
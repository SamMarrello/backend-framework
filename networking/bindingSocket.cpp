#include <BindingSocket.hpp>

SCK::BindingSocket::BindingSocket(int domain, int socket_type, int protocol, int port, u_long interface) 
                                    : Socket(domain, socket_type, protocol, port, interface) {
    
    int result = connect_to_network(get_sock(), get_address());
    test_connection(result);
}   

int SCK::BindingSocket::connect_to_network(int sock, struct sockaddr_in address) {

    return bind(sock, (struct sockaddr *)&address, sizeof(address));
}
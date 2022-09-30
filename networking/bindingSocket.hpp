#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include <socket.hpp>

namespace SCK {

    class BindingSocket : public Socket {

        public:
            BindingSocket(int domain, int socket_type, int protocol, int port, u_long interface) : Socket(domain, socket_type, protocol, port, interface) {

            }

            int connect_to_network(int sock, struct sockaddr_in address);
    };
}
#endif
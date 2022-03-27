#include <iostream>
#include <sstream>
#include <sys/socket.h>
#include <arpa/inet.h>

int main(int argc, char const *argv[])
{
    if (!(argc==3))
    {
        std::cout << "./bscon <ip> <port>" << std::endl;
        return -1;
    }
    
    int port;
    unsigned int cycles = 0;
    const char *host = argv[1];
    std::istringstream port_buffer(argv[2]);
    port_buffer >> port;
    
    while (true)
    {
        struct sockaddr_in server;
        int sock = 0;
        
        sock = socket(AF_INET, SOCK_STREAM, 0);
        server.sin_family = AF_INET;
        server.sin_port = htons(port);
        
        if (connect(sock, (struct sockaddr*)&server, sizeof(server)))
        {
            std::cout << "Соединение прервано" << std::endl;
            return -1;
        }

       std::cout << cycles++;
       std::cout << std::endl;
    }
    
    return 0;
}

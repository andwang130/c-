#include <iostream>
#include "Client.h"
using namespace std;

int main() {
    char *ip="127.0.0.1";
    int port=8000;
    cout<<ip<<endl;
    char *meg="sdsdsdsdsds";
    CClient client(ip,port);
    client.client_init();
    for(int i=0;i<23;i++)
    {
        client.client_send(meg);
    }
    cout<<client.client_recv()<<endl;
    return 0;
}
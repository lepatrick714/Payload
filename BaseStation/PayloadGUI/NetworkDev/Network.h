#include <stdint.h>
#include <string>

using namespace std;

class Network{
    public:
		Network(string ip, int port, bool server);
		void SendPacket(uint32_t packet);
		void SendFile(string message);
		void setMems(string i, int p, bool s);
    private:
		void ServerWorker();
		void ClientWorker();
		string myIP;
		int myPort;
		bool isServer; // True if server, false if client

		string sendingMessage;
		bool sendingImage;

		uint32_t mySendPacket;
};

#include <iostream>

char const message[] = 
R"R(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)R";

int main()
{
    std::cout << message;
}

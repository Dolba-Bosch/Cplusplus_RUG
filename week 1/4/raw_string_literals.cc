/* Command:
    g++ raw_string_literals.cc -o raw_string_literals.out --std=c++26 -Wall\
    -Werror -pedantic -L/usr/local/gcc-14.2.0/lib64/ -lstdc++\
    -I/usr/local/gcc-14.2.0/c++/14.2.0/

    ./raw_string_literals.out > output.txt
*/

#include <iostream>
#include <string>

                  // got rid of the null bytes
std::string const message =  "^\\s+Encryption key:(\\w+)\n"
                             "^\\s+Quality=(\\d+)\n"
                             "^\\s+E?SSID:\"([[:print:]]+)\"\n"
                             "^\\s+ssid=\"([[:print:]]+)\"\n";

                  // OR, to use the raw string literal notation, I'd have to manually
                  // escape every occurence of an escape sequence; in this case that
                  // means '\\' -> '\', '\n' -> <enter>, '\"' -> '"'
std::string const raw_message =  R"R(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)R";

int main ()
{
    std::cout << raw_message;
}

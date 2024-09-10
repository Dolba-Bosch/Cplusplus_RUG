#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "hello " 
        << (argc == 1 ? "world" : "") 
        << (argc == 2 ? argv[1] : "")
        << (argc > 2 ? argv[stoul(argv[1])] : "")
        << '\n';
}

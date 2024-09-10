#include <iostream> // std::cout, std::endl

int main () 
{
                     // good to know: the reason for using `std::endl` is that
                     // a newline can be platform-dependent; on MS Windows it
                     // is \r\n, on Linux it is \n, on old MacOS (<= 9) it is
                     // '\r' and MacOS (>= 10) uses '\n'; also, std::endl has
                     // the side-effect of flushing the buffer, causing disk I/O;

                     // (?) although, next time probably just use "\n" (?)
    std::cout << "Hello World" << std::endl;
}

// ------------------------------------------------------------------------------

/* Command:
    g++ --std=c++26 -Wall -Werror -pedantic main.cc -lstdc++ -o main.out

    ./main.out > output.txt
*/


#include <iostream>

int main ()
{
    size_t value;
    std::cin >> value;

    // (!) assuming that your machine is a 64 bit machine (!)

                                 // use modulo 2 to extract the least significant digit;
                                 // if it's a 1 then the number is odd, else it's even
    std::cout << ( (value % 2 == 1) ? "odd" : "even" ) << '\n';

                                 // use the bitmask to probe the last significant bit,
                                 // instead of using modulo 2
    std::cout << ( ((value & 0b1) == 1) ? "odd" : "even" ) << '\n';

                                 // if a number is odd, then OR'ing it with this bitmask
                                 // will not change it, so the equality would be true and
                                 // thus evaluate to "odd"; if it's even, then the two
                                 // would differ, the equality would be false and evaluate
                                 // to "even"
    std::cout << (( (value | 0b1) == value ) ? "odd" : "even" ) << '\n';

                                 // if the number is odd, then the `value ^ 0b1` will be
                                 // identical to the operation `value - 1`, so the 
                                 // equality would evaluate to True; in case of even, the
                                 // XOR would do nothing, and would differ from the
                                 // rhs `value - 1`
    std::cout << (( (value ^ 0b1) == (value - 1) ) ? "odd" : "even" ) << '\n';

                                 // if toggling the least significant bit makes the number
                                 // larger, then it means it used to be a 0, so it was 
                                 // even; if it becomes smaller, then it used to be odd
    // another variant of the previous
//    std::cout << ( ((value ^ 0b1) < value) ? "odd" : "even" ) << '\n';

                                 // shift the least significant bit into the most
                                 // significant position; this has the effect of 
                                 // truncating all other bits; next, shift it back into
                                 // the last significant position, then evaluate it
                                 // to a bool with the ternary operation
    std::cout << (( (value << 63) != 0 ) ? "odd" : "even" ) << '\n';

    // variant of the previous
//    std::cout << (( (value * 0x8000000000000000ULL) != 0 ) ? "odd" : "even" ) << '\n';

                                 // dividing by 2 would truncate the odd bit; so if when
                                 // adding two halves back together the sum differs from
                                 // the original, then it is an odd integer
    std::cout << (( ((value / 2) * 2) != value ) ? "odd" : "even" ) << '\n';
}


#include <iostream>

using namespace std;

union u 
{
    size_t value;
    struct 
    {
        size_t bit_0: 1;
        size_t bits_1_4: 3;
        size_t bits_4_8: 4;
        size_t bits_8_13: 5;
        size_t bits_13_17: 4;
        size_t bits_17_21: 4;
        size_t bits_21_25: 4;
        size_t bits_25_29: 4;
        size_t bits_29_33: 4;
        size_t bits_33_38: 5;
        size_t bits_38_40: 2;
    } bitfield;

};

int main()
{
    // Create the union and bitfield using designated initialization
    cout << hex << u{.bitfield{0,7,15,10,6,7,15,15,7,0,3}}.value;
}

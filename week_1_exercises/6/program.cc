#include <iostream>

using namespace std;

int main()
{
    size_t value; 
    cin >> value;
    cout << (value % 2 == 0 ? "even" : "odd") << '\n';
    cout << (value & 1 ? "odd" : "even") << '\n';
    cout << ((value + 1) / 2 == value / 2 ? "even" : "odd") << '\n';
    cout << (short((value | 0xFFFE) ^ 0xFFFF) ? "even" : "odd") << '\n';
    cout << (short(value << 15) < 0 ? "odd" : "even") << '\n';
    cout << (short(value*0x8000) < 0 ? "odd" : "even") << '\n';
}

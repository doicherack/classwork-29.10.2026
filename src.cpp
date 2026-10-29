#include <iostream>
#include <cstdlib>
#include <bitset>

int main() {
    int input_a, input_b;
    std::cout << "Enter 'a' (from 0 to 255): ";
    std::cin >> input_a;
    std::cout << "Enter 'b' (from 0 to 255): ";
    std::cin >> input_b;

    if (input_a > 255 || input_b > 255 || input_a < 0 || input_b < 0) {
        std::cerr << "Error!!!" << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::bitset<8> a(input_a);
    std::bitset<8> b(input_b);

    std::bitset<8> c;
    c.set(7, a[7]);
    c.set(6, b[7]);
    c.set(5, a[6]);
    c.set(4, b[6]);
    c.set(3, a[5]);
    c.set(2, b[5]);
    c.set(1, a[4]);
    c.set(0, b[4]);
    
    std::bitset<8> d;
    d.set(7, b[0]);
    d.set(6, a[0]);
    d.set(5, b[1]);
    d.set(4, a[1]);
    d.set(3, b[2]);
    d.set(2, a[2]);
    d.set(1, b[3]);
    d.set(0, a[3]);

    std::cout << "8-bit 'a': " << a << std::endl;
    std::cout << "8-bit 'b': " << b << std::endl;
    std::cout << "Result c: " << c << std::endl;
    std::cout << "Result d: " << d << std::endl;
    return 0;
}
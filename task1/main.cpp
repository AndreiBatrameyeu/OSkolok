#include <iostream>
#include "OSkolok.h"

int main() {
    try {
        std::cout << "Enter n: ";
        uint32_t n;
        std::cin >> n;

        auto sequence = fib(n);

        std::cout << "First " << n << " Fibonacci numbers:\n";
        for (auto num : sequence) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}

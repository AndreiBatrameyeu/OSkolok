#include <iostream>
#include "palindrom.h"

int main() {
    try {
        std::cout << "Enter a number: ";
        int number;
        std::cin >> number;

        if (isPalindrome(number)) {
            std::cout << number << " is a palindrome." << std::endl;
        } else {
            std::cout << number << " is not a palindrome." << std::endl;
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
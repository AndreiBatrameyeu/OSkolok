#include <iostream>
#include <cassert>
#include "../palindrom.h"

void run_all_tests() {
    std::cout << "Running Palindrome tests...\n";

    assert(isPalindrome(0) == true);
    std::cout << "Test 1 passed: 0\n";
    
    assert(isPalindrome(5) == true);
    std::cout << "Test 2 passed: 5\n";

    assert(isPalindrome(121) == true);
    std::cout << "Test 3 passed: 121\n";
    
    assert(isPalindrome(1221) == true);
    std::cout << "Test 4 passed: 1221\n";
    
    assert(isPalindrome(12321) == true);
    std::cout << "Test 5 passed: 12321\n";

    assert(isPalindrome(123) == false);
    std::cout << "Test 6 passed: 123\n";
    
    assert(isPalindrome(1234) == false);
    std::cout << "Test 7 passed: 1234\n";

    assert(isPalindrome(-121) == false);
    std::cout << "Test 8 passed: -121\n";
    
    assert(isPalindrome(-5) == false);
    std::cout << "Test 9 passed: -5\n";

    assert(isPalindrome(10) == false);
    std::cout << "Test 10 passed: 10\n";
    
    assert(isPalindrome(1001) == true);
    std::cout << "Test 11 passed: 1001\n";

    std::cout << "All tests passed.\n";
}

int main() {
    run_all_tests();
    return 0;
}
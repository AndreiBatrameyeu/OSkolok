#include <iostream>
#include <cassert>
#include "../OSkolok.h"

void run_all_tests() {
    std::cout << "Running Fibonacci tests...\n";

    // Test 1: n = 0
    auto result1 = fib(0);
    assert(result1.empty());
    std::cout << "? Test 1 passed: n=0\n";

    // Test 2: n = 1
    auto result2 = fib(1);
    assert(result2.size() == 1);
    assert(result2[0] == 0);
    std::cout << "? Test 2 passed: n=1\n";

    // Test 3: n = 2
    auto result3 = fib(2);
    assert(result3.size() == 2);
    assert(result3[0] == 0);
    assert(result3[1] == 1);
    std::cout << "? Test 3 passed: n=2\n";

    // Test 4: n = 10
    auto result4 = fib(10);
    assert(result4.size() == 10);
    assert(result4[0] == 0);
    assert(result4[1] == 1);
    assert(result4[2] == 1);
    assert(result4[3] == 2);
    assert(result4[4] == 3);
    assert(result4[5] == 5);
    assert(result4[6] == 8);
    assert(result4[7] == 13);
    assert(result4[8] == 21);
    assert(result4[9] == 34);
    std::cout << "? Test 4 passed: n=10\n";

    // Test 5: overflow check
    try {
        auto result5 = fib(95);
        assert(false && "Should have thrown exception");
    }
    catch (const std::exception& e) {
        std::cout << "? Test 5 passed: overflow exception caught\n";
    }

    std::cout << "?? All tests passed!\n";
}

int main() {
    run_all_tests();
    return 0;
}
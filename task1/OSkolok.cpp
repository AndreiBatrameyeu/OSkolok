#include "OSkolok.h"
#include <stdexcept>
#include <vector>
#include <cstdint>
#include <climits>
std::vector<long long> fib(int n) {
    if (n == 0) {
        return {};
    }
    if (n > 94) {
        throw std::overflow_error("n too large: would cause overflow");
    }

    std::vector<long long> sequence;
    sequence.reserve(n);

    if (n >= 1) {
        sequence.push_back(0);
    }
    if (n >= 2) {
        sequence.push_back(1);
    }

    for (int i = 2; i < n; ++i) {
   
        if (sequence[i - 1] > LLONG_MAX - sequence[i - 2]) {
            throw std::overflow_error("Fibonacci number would overflow");
        }
        long long next = sequence[i - 1] + sequence[i - 2];
        sequence.push_back(next);
    }

    return sequence;
}

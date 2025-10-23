#include "palindrom.h"
#include <vector>

bool isPalindrome(int number) {
    if (number < 0) {
        return false;
    }
    
    if (number < 10) {
        return true;
    }
    
    if (number == 0) {
        return true;
    }
    
    std::vector<int> digits;
    int temp = number;
    
    while (temp > 0) {
        digits.push_back(temp % 10);
        temp /= 10;
    }
    
    int left = 0;
    int right = digits.size() - 1;
    
    while (left < right) {
        if (digits[left] != digits[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}
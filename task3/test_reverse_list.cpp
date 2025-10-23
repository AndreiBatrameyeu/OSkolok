#include <iostream>
#include <cassert>
#include <vector>
#include "../reverse_list.h"

void run_all_tests() {
    std::cout << "Running Reverse List tests...\n";

    ListNode* test1 = createList({});
    ListNode* result1 = reverseList(test1);
    assert(listToVector(result1) == std::vector<int>{});
    deleteList(result1);
    std::cout << "Test 1 passed: empty list\n";

    ListNode* test2 = createList({ 1 });
    ListNode* result2 = reverseList(test2);
    assert(listToVector(result2) == std::vector<int>{1});
    deleteList(result2);
    std::cout << "Test 2 passed: single element\n";

    ListNode* test3 = createList({ 1, 2, 3 });
    ListNode* result3 = reverseList(test3);
    assert(listToVector(result3) == std::vector<int>{3, 2, 1});
    deleteList(result3);
    std::cout << "Test 3 passed: multiple elements\n";

    ListNode* test4 = createList({ 1, 2 });
    ListNode* result4 = reverseList(test4);
    assert(listToVector(result4) == std::vector<int>{2, 1});
    deleteList(result4);
    std::cout << "Test 4 passed: two elements\n";

    ListNode* test5 = createList({ 5, 4, 3, 2, 1 });
    ListNode* result5 = reverseList(test5);
    assert(listToVector(result5) == std::vector<int>{1, 2, 3, 4, 5});
    deleteList(result5);
    std::cout << "Test 5 passed: five elements\n";

    std::cout << "All tests passed.\n";
}

int main() {
    run_all_tests();
    return 0;
}
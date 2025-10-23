#include <iostream>
#include <vector>
#include "reverse_list.h"

int main() {
    try {
        std::vector<int> values = { 1, 2, 3, 4, 5 };
        ListNode* head = createList(values);

        std::cout << "Original list: ";
        std::vector<int> original = listToVector(head);
        for (int val : original) {
            std::cout << val << " ";
        }
        std::cout << std::endl;

        ListNode* reversed = reverseList(head);

        std::cout << "Reversed list: ";
        std::vector<int> reversedVec = listToVector(reversed);
        for (int val : reversedVec) {
            std::cout << val << " ";
        }
        std::cout << std::endl;

        deleteList(reversed);
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
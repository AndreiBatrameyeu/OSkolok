#include "reverse_list.h"
#include <vector>

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;

    while (current != nullptr) {
        ListNode* nextTemp = current->next;
        current->next = prev;
        prev = current;
        current = nextTemp;
    }

    return prev;
}

ListNode* createList(const std::vector<int>& values) {
    if (values.empty()) return nullptr;

    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;

    for (size_t i = 1; i < values.size(); ++i) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }

    return head;
}

std::vector<int> listToVector(ListNode* head) {
    std::vector<int> result;
    ListNode* current = head;

    while (current != nullptr) {
        result.push_back(current->val);
        current = current->next;
    }

    return result;
}

void deleteList(ListNode* head) {
    ListNode* current = head;

    while (current != nullptr) {
        ListNode* next = current->next;
        delete current;
        current = next;
    }
}
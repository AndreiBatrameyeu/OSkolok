#pragma once

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head);
ListNode* createList(const std::vector<int>& values);
std::vector<int> listToVector(ListNode* head);
void deleteList(ListNode* head);
#include<bits/stdc++.h>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* swapPairs(ListNode* head) {
    // Create a dummy node pointing to head
    ListNode dummy(0);
    dummy.next = head;

    // Use prev to track node before the pair
    ListNode* prev = &dummy;

    while (prev->next && prev->next->next) {
        ListNode* first = prev->next;
        ListNode* second = first->next;

        // Swapping the nodes
        first->next = second->next;
        second->next = first;
        prev->next = second;

        // Move prev to the end of the swapped pair
        prev = first;
    }

    // Return new head (could have changed)
    return dummy.next;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next->next = new ListNode(7);
    head->next->next->next->next->next->next->next = new ListNode(8);
    head->next->next->next->next->next->next->next->next = new ListNode(9);
    head->next->next->next->next->next->next->next->next->next = new ListNode(10);
    ListNode* swappedHead = swapPairs(head);
    while (swappedHead) {
        std::cout << swappedHead->val << " ";
        swappedHead = swappedHead->next;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class ListNode {
    public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode * middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    ListNode* middle = middleNode(head);
    cout << middle->val;
}
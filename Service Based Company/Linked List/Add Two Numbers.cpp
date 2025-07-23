#include <iostream> // Needed for cout
using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *ans = new ListNode(-1); // Dummy node
    ListNode* it = ans;
    int carry = 0;

    while(l1 || l2 || carry) {
        int a = l1 ? l1->val : 0;
        int b = l2 ? l2->val : 0;
        int sum = a + b + carry;
        int digit = sum % 10;
        carry = sum / 10;

        it->next = new ListNode(digit);
        it = it->next;

        l1 = l1 ? l1->next : nullptr;
        l2 = l2 ? l2->next : nullptr;
    }

    ListNode* finalAns = ans->next;
    delete ans; // delete dummy node
    return finalAns;
}

int main() {
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode* ans = addTwoNumbers(l1, l2);
    while(ans) {
        cout << ans->val << " ";
        ans = ans->next;
    }
}

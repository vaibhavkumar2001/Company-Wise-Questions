#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL) {
            fast = fast->next;
            if(fast != NULL) {
                fast = fast->next;
                slow = slow->next;
            }
            if(slow == fast) {
                break;
            }
        }
        if(fast == NULL) {
            return NULL;
        }
        //Maine slow ko head wapas se bhej diya
        slow = head;
        while(fast != slow) {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = head->next->next;
}
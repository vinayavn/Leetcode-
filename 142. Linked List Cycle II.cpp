/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> ListNode_set;
        while(head!=nullptr && !ListNode_set.count(head)){
            ListNode_set.insert(head);
            head = head->next;
        }
        return head;
    }
    // the above is my own suboptimal solution with O(n) space and time complexity, bext is O(1) space complexity
};
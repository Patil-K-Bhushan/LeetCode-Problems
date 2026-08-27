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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        unordered_set<ListNode*> nodes_set;

        while (headA != NULL) {
            nodes_set.insert(headA);
            headA = headA->next;
        }

        while (headB != NULL) {
            if (nodes_set.find(headB) != nodes_set.end()) {
                return headB;
            }
            headB = headB->next;
        }

        return NULL;
    }
};
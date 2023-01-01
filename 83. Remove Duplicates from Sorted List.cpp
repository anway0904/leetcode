/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if(head==NULL) return head;
        ListNode* tmp1 = head;
        ListNode* tmp2 = head->next;

        while(tmp2)
        {
            if (tmp2->val == tmp1->val)
            {
                while(tmp2->val == tmp1->val) 
                {
                    tmp2 = tmp2->next;
                    if(tmp2 == NULL) break;
                }
                tmp1->next = tmp2;
            }

            if(tmp1) tmp1 = tmp1->next;
            if(tmp2) tmp2 = tmp2->next;
        }

        return head;
    }
};

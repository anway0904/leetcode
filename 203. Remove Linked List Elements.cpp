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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;

        ListNode* tmp1 = head; 
        ListNode* tmp2 = head->next;

        //To make sure val is not the head
        while(head->val == val) 
        {
            head=head->next;
            if(head==NULL) return NULL;
        }

        while(tmp2!=NULL)
        {
            if(tmp2->val == val)
            {   while(tmp2->val == val)
                {
                    tmp2 = tmp2->next;
                    if(tmp2==NULL)
                    {
                        tmp1->next = NULL;
                        return head;
                    }
                }
                tmp1->next = tmp2;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        return head;  
    }
};

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
    //ListNode *head_merged = new ListNode();
    ListNode *head_merged = NULL;
    ListNode *tmp;

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        int val_new;

        if(list1 == NULL && list2 == NULL) return NULL;
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        while(list1 != NULL || list2 != NULL)
        {
            if(list1 != NULL && list2 == NULL)
            {
                while(list1 != NULL)
                {
                    addNode(list1->val);
                    list1 = list1->next;
                }

                return head_merged;
            }

            if(list2 != NULL && list1 == NULL)
            {
                while(list2 != NULL)
                {
                    addNode(list2->val);
                    list2 = list2->next;
                }

                return head_merged;
            }

            if(list1->val <= list2->val)
            {
                addNode(list1->val);
                list1 = list1->next;
            }

            else if(list1->val > list2->val)
            {
                addNode(list2->val);
                list2 = list2->next;
            } 
        }

        return head_merged;
    }

    void addNode(int n)
    {
        if(head_merged == NULL)
        {
            head_merged = new ListNode();
            head_merged->next = NULL;
            head_merged->val = n;
            tmp = head_merged;
        }

        else
        {
            tmp->next = new ListNode();
            tmp = tmp->next;
            tmp->val = n;
            tmp->next = NULL;
        }
    }
};

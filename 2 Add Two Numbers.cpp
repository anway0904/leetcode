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
    ListNode* result = NULL;
    ListNode* tmp;

    void addNode(int n)
    {
        if(result == NULL)
        {
            result = new ListNode();
            result->next = NULL;
            result->val = n;
            tmp = result;
        }

        else
        {
            tmp->next = new ListNode();
            tmp = tmp->next;
            tmp->val = n;
            tmp->next = NULL;
        }

    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n;
        bool carry = 0;

        while(l1 != NULL || l2 != NULL)
        {   
            n = (l1==NULL)? ((carry)? l2->val+1 : l2->val) : 
                ((l2==NULL)? ((carry)?l1->val+1 : l1->val) : 
                (carry)? (l1->val + l2->val + 1):(l1->val + l2->val));

            cout << n << endl;
            carry = (n>=10)? 1:0;

            if(carry && n>=10) addNode(n-10);
            else if(carry) addNode(n+1);
            else addNode(n);

            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(carry) addNode(1); 
        return result;
    }
};

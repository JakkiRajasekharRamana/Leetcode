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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* dummy = new ListNode(0);
        ListNode* final = dummy;
        ListNode* Temp = head->next; 

        int sum=0;

        while(Temp!=nullptr){
            if(Temp->val==0){

                final->next=new ListNode(sum);
                final=final->next;
                sum=0;
            }
            else{
                sum=sum+Temp->val;
            }
            
            Temp=Temp->next;


        }

        return dummy->next;
    }
};

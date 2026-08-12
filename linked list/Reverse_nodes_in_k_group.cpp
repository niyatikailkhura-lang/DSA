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
   ListNode*reverse(ListNode*temp){
    if(temp==NULL || temp->next==NULL){
        return temp;
    }
    ListNode*newhead=reverse(temp->next);
    ListNode*front=temp->next;
    front->next=temp;
    temp->next=NULL;
    return newhead;
   }
   ListNode*findkthnode(ListNode*temp,int k){
    k=k-1;
    while(temp!=NULL && k>0){
        k--;
        temp=temp->next;

    }
    return temp;
   }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp=head;
        ListNode*nextNode;
        ListNode*prev;
        while(temp!=NULL){
            ListNode*kth=findkthnode(temp,k);
            if(kth==NULL){
                if(prev) prev->next=temp;
                break;
            }
            nextNode=kth->next;
            kth->next=NULL;
            reverse(temp);
            if(temp==head){
                head=kth;
                prev=temp;
                temp=nextNode;
            }
            else{
                prev->next=kth;
                prev=temp;
                temp=nextNode;
            }
        }
        return head;
    }
};
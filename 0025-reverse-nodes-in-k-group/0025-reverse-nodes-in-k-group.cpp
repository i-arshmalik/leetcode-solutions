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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) 
            return head;
        int i = 0;
        ListNode *temp = head;
        while(temp != NULL && i != k) {
            i++;
            temp = temp->next;
        }
        if(i < k) return head;

        ListNode *prev = reverseKGroup(temp,k);

        i = 0;  
        temp = head;
        while(i != k) {
            ListNode *next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            i++;
        }
        return prev;
    }
};
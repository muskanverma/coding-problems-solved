/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * 
 * @Output Integer
 */
 listnode* reverseList(listnode* curr){
     listnode* first = curr;
     listnode* second = NULL;
     if(first){
         second = first->next;
     }
     if(!second){
         return first;
     }
     else{
         listnode* h = reverseList(second);
         first->next = second->next;
         second->next = first;
         return h;
     }
 }
 
int lPalin(listnode* head) {
    
    listnode* fast = head;
    listnode* slow = head;
    listnode* ptr1 = head;
    if(ptr1==NULL || ptr1->next==NULL){
        return 1;
    }
    else if(ptr1->next->next==NULL){
        if(ptr1->val!=ptr1->next->val){
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
         while(fast!=NULL&&fast->next!=NULL&&fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
          }
          listnode* mid = slow;
        
         mid->next = reverseList(mid->next);
         listnode* ptr2 = mid->next;
        while(ptr2!=NULL){
            if(ptr1->val!=ptr2->val){
                return 0;
            }
            else{
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
        }
    }
    return 1;
}

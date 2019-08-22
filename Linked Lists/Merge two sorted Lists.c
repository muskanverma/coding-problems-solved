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
 * @input B : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */

listnode* mergeTwoLists(listnode* head1, listnode* head2) {
    
    listnode* head3 = (listnode*)malloc(sizeof(listnode));
    head3->val = 0;
    head3->next = NULL;
    listnode* temp1 = head1;
    listnode* temp2 = head2;
    listnode* temp3 = head3;
    while(head3!=NULL &&(temp1!=NULL || temp2!=NULL)){
        int data;
        if(temp1==NULL){
            data = temp2->val;
            temp2 = temp2->next;
        }
        else if(temp2==NULL){
            data = temp1->val;
            temp1 = temp1->next;
        }
        else if(temp1->val>temp2->val){
            data = temp2->val;
            temp2 = temp2->next;
        }
        else{
            data = temp1->val;
            temp1 = temp1->next;
        }
        listnode* nyi = (listnode*)malloc(sizeof(listnode));
        nyi->val = data;
        nyi->next = NULL;
        // if( == NULL){
        // head3 = nyi;
        // }
        // else{
            temp3->next = nyi;
            temp3 = temp3->next;
    //}
        //head3 = insertAtEnd(head3,data);
    }
    return head3->next;
}

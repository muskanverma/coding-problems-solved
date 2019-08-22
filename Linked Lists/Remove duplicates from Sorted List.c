/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    public ListNode deleteDuplicates(ListNode start) {
        if(start==null||start.next==null){
            return start;
        }
        else{
            ListNode prev = start;
            //ListNode curr = prev.next;
            while(prev!=null){
                ListNode curr = prev;
                while(curr!=null && prev.val==curr.val){
                    curr = curr.next;
                }
                    prev.next = curr;
                    prev = prev.next;
            }
        }
        return start;
    }
}

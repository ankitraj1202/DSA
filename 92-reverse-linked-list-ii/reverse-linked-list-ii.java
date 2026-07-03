/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseBetween(ListNode head, int left, int right) {
       ListNode dummy =new ListNode(0);
       dummy.next=head;
       ListNode leftPre=dummy;
       ListNode currnode=head;
       for(int i=0;i<left-1;i++){
        leftPre=leftPre.next;
        currnode=currnode.next;
       }
       ListNode prenode=null;
       ListNode sublisthead=currnode;
       for(int i=0;i<right-left+1;i++){
        ListNode nextnode=currnode.next;
        currnode.next=prenode;
        prenode=currnode;
        currnode=nextnode;
       }
       leftPre.next=prenode;
       sublisthead.next=currnode;
       return dummy.next;
    }
}
    



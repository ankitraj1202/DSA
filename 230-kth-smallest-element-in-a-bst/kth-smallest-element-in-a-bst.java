/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    List<Integer>v=new ArrayList<>();
    void f(TreeNode root,List<Integer>v ){
        if(root == null)    return;
        v.add(root.val);
       f(root.left, v);
        f(root.right, v);      
    }
    public int kthSmallest(TreeNode root, int k) {
        f(root,v);
        Collections.sort(v);
        return v.get(k-1);
    }
}
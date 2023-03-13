https://leetcode.com/problems/maximum-depth-of-binary-tree/

//---------------METHOD 1--------------------

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        else{
            int LNode = maxDepth(root->left);
            int RNode = maxDepth(root->right);

            if(LNode<RNode)
                return (RNode + 1);
            else
                return (LNode + 1);
        }
    }
};


//---------------METHOD 2--------------------

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        return max(maxDepth(root->left), maxDepth(root->right))+1;
    }

#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
class Solution {
public:
    int height(TreeNode* root) {
        if(root == NULL) {
            return NULL;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int finalAns = max(leftHeight,rightHeight) + 1;
        return finalAns;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) {
            return NULL;
        }
        int option1 = diameterOfBinaryTree(root->left);
        int option2 = diameterOfBinaryTree(root->right);
        int option3 = height(root->left) + height(root->right);
        int diameter = max(option1,max(option2,option3));
        return diameter;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    Solution obj;
    cout << obj.diameterOfBinaryTree(root);
}
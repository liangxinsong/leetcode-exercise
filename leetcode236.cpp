#include<iostream>
#include<unordered_map>

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

int main(){
    TreeNode* Three, Five, one, Six, Two, Zero, Eight, Seven, Four;
    Three->val = 3; Three->left = Five; Three->right = One;
    Five->val = 5; Five->left = Six; Five->right = Two;
    One->val = 1; One->left = Zero; One->right = Eight;
    Six->val = 6; Six->left = nullptr; Six->right = nullptr;
    Two->val = 2; Two->left = Seven; Two->right = Four;
    Zero->val = 0; Zero->left = nullptr; Zero->right = nullptr;
    Eight->val = 8; Eight->left = nullptr; Eight->right = nullptr;
    Seven->val = 7; Seven->left = nullptr; Seven->right = nullptr;
    Four->val = 4; Four->left = nullptr; Four->right = nullptr;

    unordered_map<int, TreeNode>fa;
    unordered_map<int, int>vis;
}

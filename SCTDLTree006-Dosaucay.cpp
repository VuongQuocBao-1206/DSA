#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) 
            return 0;
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        return 1 + max(leftDepth, rightDepth);
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        TreeNode* root = new TreeNode(1);
        queue<TreeNode*> q;
        q.push(root);
        for(int i = 0; i < n/2; i++){
            TreeNode* cur = q.front();
            q.pop();
            int a;
            cin >> a;
            if(a != -1){
                cur->left = new TreeNode(a);
                q.push(cur->left);
            }
            cin >> a;
            if(a != -1){
                cur->right = new TreeNode(a);
                q.push(cur->right);
            }
        }
        cout << Solution().maxDepth(root) << endl;
    }
}

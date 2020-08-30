// leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root == nullptr)
            return vector<vector<int> > ();

        vector<vector<int> > res;
        queue<TreeNode*> que;
        que.push(root);

        bool ltor = true;

        while (!que.empty())
        {
            int size = que.size();
            vector<int> r(size);

            for (int i = 0; i < size; i++)
            {
                TreeNode* temp= que.front();
                que.pop();

                int index = ltor ? i : (size - i - 1);

                r[index] = temp->val;

                if (temp->left)
                    que.push(temp->left);
                if (temp->right)
                    que.push(temp->right);
            }
            ltor = !ltor;
            res.push_back(r);
        }

        return ans;
    }
};

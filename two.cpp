vector<int> levelOrder(Node* root)
{
     queue<Node*>q;
     vector<int>v;
        if(root==NULL) return v;
        q.push(root);
        while(q.empty()!=true)
        {   
            int n=q.size();
            for(int i=0;i<n;i++)
            {   Node* t=q.front();q.pop();
                v.push_back(t->data);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return v;
    }
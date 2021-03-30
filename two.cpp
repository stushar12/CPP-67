 vector<int> levelOrder(Node* node)
    {
     vector<int> v;
    queue<Node*> Queue; 
    Queue.push(node);


    while(!Queue.empty())
    {
        Node* Current_Node = Queue.front();
        Queue.pop();
       v.push_back(Current_Node->data);

        if(Current_Node->left!=NULL) 
        Queue.push(Current_Node->left);
        
        if(Current_Node->right!=NULL) 
        Queue.push(Current_Node->right);
    }
    return v;
    }

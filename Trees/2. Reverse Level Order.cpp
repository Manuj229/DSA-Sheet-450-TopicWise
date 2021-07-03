vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> v;
    stack<int> st;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        st.push(curr->data);
        if(curr->right != NULL) q.push(curr->right);
        if(curr->left != NULL) q.push(curr->left);
        
    }
    while(!st.empty()){
        v.push_back(st.top());
        st.pop();
    }
    return v;
}
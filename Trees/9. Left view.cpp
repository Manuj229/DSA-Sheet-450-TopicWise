vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> v;
   if(root == NULL) return v;
   queue<Node*> q;
   q.push(root);
   while(!q.empty()){
       int cnt = q.size();
       for(int i =0;i<cnt;i++){
           Node* curr = q.front();
           q.pop();
           if(i==0){
               v.push_back(curr->data);
           }
           if(curr->left!=NULL) q.push(curr->left);
           if(curr->right!=NULL) q.push(curr->right);
       }
   }
   
   return v;
}

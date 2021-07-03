  public:
    // Function to return the diameter of a Binary Tree.
    int diameterutil(Node* root, int & res) {
        // Your code here
        if(root==NULL)
            return 0;
            
        int lh = diameterutil(root->left, res);
        int rh = diameterutil(root->right, res);
        res = max(res, lh+rh+1);
        
        return 1 + max(lh, rh);
        
    }
    int diameter(Node* root){
        int res = 0;
        diameterutil(root, res);
        return res;
    }
};
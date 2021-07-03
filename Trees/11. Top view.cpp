    vector<int> topView(Node *root)
    {
        //Your code here
        map<int, int>mp;
        queue<pair<Node *, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            if(mp.find(it.second) == mp.end())
                mp[it.second] = ((it.first)->data);
                
            if((it.first)->left != NULL) q.push({(it.first)->left, it.second-1});
            if((it.first)->right != NULL) q.push({(it.first)->right, it.second+1});
        }
        vector<int> v;
        for(auto x: mp){
            v.push_back(x.second);
        }
        return v;
    }
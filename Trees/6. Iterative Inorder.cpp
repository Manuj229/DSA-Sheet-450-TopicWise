#include <bits/stdc++.h>
#include<iostream>
//#define int long long
#define endl "\n"
using namespace std;
struct Node
{
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

inorderIterative(Node* root){
    stack<Node*> st;
    Node *curr = root;
    while(!st.empty() || curr!=NULL){
        if(curr!=NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{
            curr = st.top();
            st.pop();
            cout<<curr->data<<" ";
            curr = curr->right;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    inorderIterative(root);
 
    return 0;
}

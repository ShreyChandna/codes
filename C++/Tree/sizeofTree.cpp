#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
int size(Node *root)
{   
    if(root==NULL)
    return 0;
    else 
    return 1+size(root->left)+size(root->right);
}
int main()
{
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    cout<<size(root);
    return 0;
}
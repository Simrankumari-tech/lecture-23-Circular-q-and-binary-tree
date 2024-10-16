#include<bits/stdc++.h>
using namespace std;
class node{
    public :
    int data;
    node*left, *right;
    node( int d){
        data = d;
        left = right = NULL;
    }
};
node*BuildTree (){
   int data ;
   cin >> data ;
   
   if(data == -1 ) return NULL;
   node* root = new node(data);
   root -> left = BuildTree();
   root ->right = BuildTree();
   return root;
}
void preorder(node*root){
    if(!root ) return ;
    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);
    
}
void Inorder(node*root){
    if(!root ) return;
    Inorder(root ->left);
    cout << root ->data << " " ;
    Inorder(root ->right);
}
void postorder(node*root){
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int height(node*root){
    if(!root) return 0;
    int left = height(root->left);
    int right = height(root ->right);
    return max(left , right )+1;
}
int countnode(node*root){
    if(!root) return 0;
    return countnode(root->left) + countnode(root->right) +1;
}
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
    
    
    
    node* root = BuildTree();
    preorder(root);
    cout << endl;
    Inorder(root);
    cout << endl; 
    postorder(root);
    cout << endl;
    
   cout << "height : " << height(root ) << endl;
   cout << "node : " << countnode(root) << endl;
   return 0;
}

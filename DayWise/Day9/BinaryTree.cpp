//          1
//     2        3
//  4    5   6   7

#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node *left, *right;
  Node(int data){
    this->data = data;
    left = right = NULL;
  }
};

void printPreOrder(struct Node* node){
  if(node==NULL)
    return;
  cout<<node->data<<" ";
  printPreOrder(node->left);
  printPreOrder(node->right);
}

void postOrder(struct Node* node){
  if(node==NULL)
    return;
  postOrder(node->left);
  postOrder(node->right);
  cout<<node->data<<" ";
}

void inOrder(struct Node* node){
  if(node == NULL)
    return;
  inOrder(node->left);
  cout<<node->data<<" ";
  inOrder(node->right);
}

int main(){
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  cout<<"PreOrder: ";
  printPreOrder(root);
  cout<<endl<<"PostOrder: ";
  postOrder(root);
  cout<<endl<<"Inorder: ";
  inOrder(root);
}

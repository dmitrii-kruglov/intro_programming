#include <iostream>

struct node{
  int value;
  node* right;
  node* left;
};

void addRightNode(node* a, int value){
  node* b = new node();
  b->value = value;
  b->right = nullptr;
  b->left = nullptr;
  a->right = b;
}
int main(){
  node root = {9, nullptr, nullptr};
  addRightNode(&root, 5);
  std::cout << root.right->value << std::endl;
  addRightNode(root.right, 6);
  std::cout << root.right->right->value << std::endl;
}
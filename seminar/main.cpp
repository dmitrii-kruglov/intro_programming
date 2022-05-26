#include <iostream>

struct root{
    int value;
    root* right;
    root* left;
};

void addRightNode(root* a, int value){
  root* rr = new root();
  rr->value = value;
  rr->right = nullptr;
  rr->left = nullptr;
  a->right = rr;
}

int main(){
  root tree;
  tree = {4, nullptr, nullptr};
  addRightNode(&tree, 6);
  addRightNode(tree.right, 7);
  std::cout << tree.right->value << std::endl;
  std::cout << tree.right->right->value << std::endl;
}
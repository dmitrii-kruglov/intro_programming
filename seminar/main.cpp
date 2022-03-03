#include <iostream>
#include "chess.h"

using namespace std;
using namespace chess;

bool test(){
  bool test1 = chess::in_scope({1, 8}) == true;
  bool test2 = in_scope({1, 3}) == false;
  bool test3 = in_scope({22, 9}) == false;
  return test1 || test2 || test3;
}

int main(){
   if(test())
    task1();
  else {
    cerr << "Tests failed!!" << endl;
    return 1;
  }
}
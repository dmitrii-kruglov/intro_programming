#include "chess.h"
using namespace std;
using namespace chess;

bool test(){
  bool test1 = right({5, 8}, {6, 7}) == true;  
  bool test2 = right({1, 8}, {1, 6}) == false;  
  bool test3 = right({2, 6}, {3, 7}) == true;
  bool test4 = right({1, 1}, {2, 2}) == true;
  return test1 && test2 && test3 && test4;
}

int main() {
  if(test())
    task1();
  else {
    cout << "Tests failed!" << endl;
    return 1;
  }
}

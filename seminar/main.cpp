#include <iostream>
using namespace std;

bool right(int row, int coloumn, int in_row, int in_coloumn) {
  if(row == in_row)
    return abs(coloumn - in_coloumn) == 1;
  else if(coloumn == in_coloumn)
    return abs(row - in_row) == 1;
  else 
    return abs(row - in_row) == 1 && abs(coloumn - in_coloumn) == 1;
}

void task1(){
  int i, r, c;
  cout << "Posotion:" << endl;
  cin >> r >> c;
  for(i = 1; i <= 8; i++){
    if(right(r, c, r + 1, i))
        cout << r + 1 << ' ' << i << endl;
  }
}

bool test(){
  bool test1 = right(5, 8, 6, 7) == true;  
  bool test2 = right(1, 8, 1, 6) == false;  
  bool test3 = right(2, 6, 3, 7) == true;
  bool test4 = right(1, 1, 2, 2) == true;
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

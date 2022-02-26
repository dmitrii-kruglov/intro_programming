#include <iostream>
using namespace std;

struct position {
  int row;
  int coloumn;
};

bool right(position pos_king, position pos_in) {
  if(pos_king.row == pos_in.row)
    return abs(pos_king.coloumn - pos_in.coloumn) == 1;
  else if(pos_king.coloumn == pos_in.coloumn)
    return abs(pos_king.row - pos_in.row) == 1;
  else 
    return abs(pos_king.row - pos_in.row) == 1 
        && abs(pos_king.coloumn - pos_in.coloumn) == 1;
}

void task1(){
  int i;
  position pos1;
  cout << "Posotion:" << endl;
  cin >> pos1.row >> pos1.coloumn;
  for(i = 1; i <= 8; i++){
    position new_pos = {pos1.row + 1, i};
    if(right(pos1, new_pos))
        cout << new_pos.row << ' ' << new_pos.coloumn << endl;
  }
}

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

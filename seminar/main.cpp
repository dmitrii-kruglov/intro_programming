#include <iostream>
using namespace std;

bool in_scope(int coloumn, int row){
  return coloumn >= 1 && coloumn <= 8 && row >= 1 &&  row <= 8;
}

void task1() {
      int c, a, c1, a1;
    cerr << "Position:" << endl;
    cin >> a >> c;
    {
      //new_position = move_two_up_one_left(a, c);
        a1 = a - 1;
        c1 = c + 2;
    }
    if(in_scope(a1, c1))
        cout << a1 << ' ' << c1 << endl;   
}


bool test(){
  bool test1 = in_scope(1, 8) == true;
  bool test2 = in_scope(1, 3) == false;
  bool test3 = in_scope(22, 9) == false;
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
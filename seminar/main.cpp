#include <iostream>

using namespace std;

int main() {
  int a, b;
  cout << "Input 2 ints:" << endl;
  cin >> a >> b;
  cout << a + b << endl;
  cout << a - b << endl;
  cout << a / b << endl;
  cout << a * b << endl;
  cout << a % b << endl;
  // a = a + 1
  cout << ++a << endl;
  cout << a << endl;
  // a = a - 1
  cout << a-- << endl;
  cout << a << endl;

  //return 0;
}

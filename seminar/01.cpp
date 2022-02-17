#include <iostream>

using namespace std;

void cout_hello() {
  cout << "Hello World!" << endl;
}

int sum(int a, int b) {
  return a + b;
}

int main() {
  int c, d;
  cin >> c >> d;
  int s = sum(c, d);
  cout << s << endl;
  //return 0;
}

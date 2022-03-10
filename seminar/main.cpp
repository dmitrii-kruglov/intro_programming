#include <iostream>
using namespace std;

int main() {
  string str1, str2 = "_ff";
  cout << "Input string:" << endl;
  cin >> str1;
  
  cout << str1.size();
  
  // "0123456" => "012"+str2+"3456" => "012_ff3456"
  cout << str1.insert(3, str2);
  // "01234567" => "4567"
  str2 = str1.substr(4);
  
  cout << str1 << endl;
  cout << str2 << endl;
}

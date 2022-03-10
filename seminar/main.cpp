#include <iostream>
using namespace std;


int main(){
  string str1, str2;
  cin >> str1 >> str2;
  //getline(cin, str1);

  str1 += ";" + str2;
  // abcd < abc2
  if(str1 <= str2)
    cout << "YES";
  else
    cout << "NO";

  //012__aaa34567
  str1.insert(3, "__");
  str1.insert(5, str2);

  cout << str1 << endl;

  str2 = str1.substr(4, 3);

  cout << str2 << endl;
}
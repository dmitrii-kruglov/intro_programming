#include <iostream>
using namespace std;

int last(int digit) {
  return digit % 10;
}

int prev_last(int digit) {
  return digit / 10 % 10;
}

int first_in_two(int digit) {
  return digit / 10;
}

int first_in_three(int digit) {
  if (digit >= 100) {
    return digit / 100;
  }
  else {
    cout << "Error!!!";
    return 0;
  }

}

int first(int digit) {
  while (digit > 10) 
    digit = digit / 10;
  return digit;
}

int count_v0(int digit) {
  int count = 0;
  while (digit > 0) {
    digit = digit / 10;
    count++;
  }
  return count;
}

int count(int digit) {
  int count = 0;
  do {
    count++;
    digit = digit / 10;
  } while (digit > 0);
  return count;
}

int main() {
  int a;

  cout << "Input 1 int:" << endl;
  cin >> a;
  cout << "last:" << last(a) << endl;
  
  cout << "Input 1 int:" << endl;
  cin >> a;
  cout << "prev_last:" << prev_last(a) << endl;
  
  cout << "Input 1 int:" << endl;
  cin >> a;
  cout << "first_in_two:" << first_in_two(a) << endl;
  
  cout << "Input 1 int:" << endl;
  cin >> a;
  cout << "first_in_three:" << first_in_three(a) << endl;

  cout << "Input 1 int:" << endl;
  cin >> a;
  cout << "first:" << first(a) << endl;  

  cout << "Input 1 int:" << endl;
  cin >> a;
  cout << "count:" << count(a) << endl;  
}

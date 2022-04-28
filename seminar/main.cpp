#include <iostream>
using namespace std;

struct drob {
  int ch;
  int zn;
};

int greatest_common_divisor(int a, int b) {
  if (a % b == 0)
    return b;
  if (b % a == 0)
    return a;
  if (a > b)
    return greatest_common_divisor(a%b, b);
  return greatest_common_divisor(a, b%a);
}

void socr(drob& d){
  int nod = greatest_common_divisor(d.zn, d.ch);
  d.zn /= nod;
  d.ch /= nod;
}

int main()
{  
  drob d1 = {3, 6};
  socr(d1);
  cout << d1.ch << "/" << d1.zn;
}
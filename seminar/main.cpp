#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int** array = new int*[n];
  array[0] = new int[4];
  array[1] = new int[2];
  array[2] = new int[3];
  array[3] = new int[6];
  array[4] = new int[1];

  for(int i =0; i < n; i++)
     cin >> array[i];

  int s = 0;
  for(int i =0; i < n; i++)
      s += array[i];
  
  cout << "SUM: " << s << endl;
  
  for(int i; i < n; i++)
    delete [] array[i];
  delete [] array;

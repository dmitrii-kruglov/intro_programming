#include <iostream>
using namespace std;

int sum(int* array, int n){
  int s = 0;
  int* el;
  for(int* i = array; i < &array[n]; i++){
    s += *i;
  }
  return s;
}

int main(){
  int n;
  cin >> n;
  
  int array[n];
  for(int i = 0; i < n; i++)
    cin >> array[i];

  cout << "SUM = " << sum(array, n) << endl;
}
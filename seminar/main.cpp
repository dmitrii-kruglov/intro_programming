#include <iostream>
using namespace std;

int* input_array(int  n){
  int* array = new int[n];
  for(int i = 0; i < n; i++)
    cin >> array[i];
  return array;
}

int sum(int** array, int  n, int m){
  int sum = 0;
  for(int i = 0; i < n; i++)  
    for(int j =0; j < m; j++)
      sum += array[i][j];
  return sum;
}

void delet_array(int** arr){  
  for(int i =0; i < 3; i++)
    delete[] arr[i];
  delete[] arr;
}

int main(){
  int* n = new int;
  *n = 3;
  int** my_two_massive = new int*[(*n)];
  for(int i = 0; i < *n; i++)
    my_two_massive[i] = input_array(7);
  
  cout << sum(my_two_massive, *n, 7) << endl;
  
  delet_array(my_two_massive);
  delete n;
}
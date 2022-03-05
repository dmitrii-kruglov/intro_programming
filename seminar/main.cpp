#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int array[n][m];
  for(int i =0; i < n; i++)
    for(int j =0; j < m; j++)
      cin >> array[i][j];

  int s = 0;
  for(int i =0; i < n; i++)
    for(int j =0; j < m; j++)
      s += array[i][j];
  
  cout << "SUM: " << s << endl;
}

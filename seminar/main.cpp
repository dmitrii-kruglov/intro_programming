#include <iostream>
using namespace std;

int sum(int x, int y) 
{
    return x+y;
}

int dif(int x, int y)
{
    return x-y;
} 

int* mas_sum(int p, int l[], int h[])
{
  int* d = new int[p];
  for (int i = 0; i <p; i++)
        d[i] = sum (l[i], h[i]);
  return d;
}

int* mas_dif(int p, int l[ ], int h[ ])
{
  int* d = new int[p];
    for (int i = 0; i < p; i++)
        d[i] = dif(l[ i ], h[ i ]);
  return d;
}

int main()
{
    int n;
    char k;
    cout << "Введите количество чисел, которые могут быть в массиве: ";
    cin>>n;
    int a[ n ];
    int b[ n ];
    int* c;
    cout << "Введите числа массива: ";
    for ( int i = 0; i < n; i++)
        cin >> a[ i ];
    cout << "Выберите операцию + или - : ";
    cin >> k;
    cout << "Введите числа массива: ";
    for (int i = 0; i < n; i++)
        cin >> b[ i ];
    if (k == '+')
       c = mas_sum( n, a, b);
    else
       c = mas_dif( n, a, b);
    
    cout << "Ответ: " << endl;
    for (int i = 0; i < n; i++)
      cout << "c[" << i << "]:" << c[i] << endl;
  delete c;
}
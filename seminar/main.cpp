#include <iostream>
using namespace std;

string USER = "user";
string PASSWORD = "123";

float task1(int a, int b){
  if (b == 0)
      throw "Деление на 0!";
  return (float)a / b;
}

bool log_in(string log){
  string password;
  for(int i = 0; i < 3; i++){
    cout << "Введите пароль:";
    cin >> password;
    if(log == USER && password == PASSWORD)
      return true;
    else
      cout << "Неудачная попытка!" << endl;
  }
  if(log == USER)
    throw 1;
  else
    throw 2;
}

int main()
{ 
  int a1, a2;
  cout << "Введите два числа:";
  cin >> a1 >> a2;
  try{
     float c =  task1(a1, a2);
     cout << "Результат деления: " << c;
  } catch (const char* error){
    cout << "ERROR: " << error;
  }
  string login;
  cout << "Введите логин:";
  cin >> login;
  try{
      log_in(login);
      cout << "Успешный вход";
    } catch(const int i){
      if(i == 1)
        cout << "Введен три раза некорректный пароль" << endl;
      if(i == 2)
        cout << "Введен некорректный логин" << endl;
    }
}
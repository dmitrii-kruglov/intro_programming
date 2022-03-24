#include <iostream>
using namespace std;
// Вводится строка.
// Разделитель слов – пробел.
// Продублировать в строке все слова, начинающиеся с «A»
// вывести

//i - первая буква слова
string next_word(string full_str, int *i){
  if(full_str[*i] != ' ' && *i < full_str.size()) {
    return full_str[(*i)++] + next_word(full_str, i);
  }
  return "";
}

int main() {
  string str1;
  cout << "Input string:" << endl;
  getline(cin, str1);
  
  for(int i = 0; i < str1.size(); i++){
    string word = " " + next_word(str1, &i);
    if (word[1] == 'A' || word[1] == 'a'){
      str1.insert(i, word);
      i += word.size();
    }      
  }  
  cout << str1 << endl;
}

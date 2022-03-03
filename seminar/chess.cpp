#include "chess.h"
using namespace std;

bool chess::right(position pos_king, position pos_in) {
  if(pos_king.row == pos_in.row)
    return abs(pos_king.coloumn - pos_in.coloumn) == 1;
  else if(pos_king.coloumn == pos_in.coloumn)
    return abs(pos_king.row - pos_in.row) == 1;
  else 
    return abs(pos_king.row - pos_in.row) == 1 
        && abs(pos_king.coloumn - pos_in.coloumn) == 1;
}

void chess::task1(){
  int i;
  position pos1;
  cout << "Posotion:" << endl;
  cin >> pos1.row >> pos1.coloumn;
  for(i = 1; i <= 8; i++){
    position new_pos = {pos1.row + 1, i};
    if(chess::right(pos1, new_pos))
        cout << new_pos.row << ' ' << new_pos.coloumn << endl;
  }
}
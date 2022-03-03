#include <iostream>
#include "chess.h"
using namespace std;
using namespace chess;

bool chess::in_scope(posion p){
  return p.coloumn >= 1 && p.coloumn <= 8 && p.row >= 1 &&  p.row <= 8;
}

posion move_two_up_one_left(posion p){
  posion p1;
  p1.coloumn = p.coloumn - 1;
  p1.row = p.row + 2;
  return p1;
}

void chess::task1() {
    posion p, new_position;
    cerr << "Position:" << endl;
    cin >> p.coloumn >> p.row;
    new_position = move_two_up_one_left(p);
    if(in_scope(new_position))
        cout << new_position.coloumn << ' ' << new_position.row << endl;   
}
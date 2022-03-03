#include <iostream>

#define CHESS
#ifdef CHESS

namespace chess {
  struct position {
      int row;
      int coloumn;
  };
  
  void task1();
  bool right(position pos_king, position pos_in);
}
#endif
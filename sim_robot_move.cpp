#include <iostream>
#include <string.h>
#include <unistd.h> //unix delay added with usleep

using namespace std;

void robot_move(string move) {

  int xAxis, yAxis;
  int l=move.size();

  for (int i = 0; i < l; i++) {
    if (move[i]=='U'){
        yAxis++;
        usleep(1000000);
        cout << "(" << xAxis << ", " << yAxis << ")" << endl;
    }
    
     else if (move[i]=='D'){
         yAxis--;
         usleep(1000000);
         cout << "(" << xAxis << ", " << yAxis << ")" << endl;
	}
  
      else if (move[i]=='L'){
         xAxis--;
         usleep(1000000);
         cout << "(" << xAxis << ", " << yAxis << ")" << endl;
	}
    
      else if (move[i]=='R'){
          xAxis++;
          usleep(1000000);
          cout << "(" << xAxis << ", " << yAxis << ")" << endl;
	}
    
   }
   cout << "Final Position : (" << xAxis << ", " << yAxis << ")" << endl;
}

int main() {

    //List of input moves
    string move = "URLLDDRUDDRUUDLURRDDRRLLU";
    
    //execute function
    robot_move(move);
    return 0;
}

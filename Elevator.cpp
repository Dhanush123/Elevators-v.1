#include "Elevator.h"
#include "Panel.h"

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

#include <cstdlib>

Elevator::Elevator(unsigned int capacity, int speed, int start)
:speed(speed), CAPACITY(capacity), direction(IDLE), atFloorIndex(-1), timer(0){
  atFloorIndex = start;
}

ostream& operator<<(ostream& out, const Elevator& e){
  string status = e.atFloorIndex != -1 ? "door is OPEN|" : "  ";
  string where;
  if(e.direction == e.UP){
    where = " going UP ";
  }
  else if(e.direction == e.DOWN){
    where = " going DOWN ";
  }
  else{
    where = " idle ";
  }
  out << setw(10) << "Elevator at  " << e.location << where << "   " << e.riders.size() << "  riders " << status << e.panel;
  return out;
}
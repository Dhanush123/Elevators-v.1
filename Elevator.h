#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <vector>
using namespace std;

#include "Rider.h"
#include "Floor.h"
#include "Panel.h"

class Elevator
{
  static const int IDLE = 0; 
  static const int UP = 1;
  static const int DOWN = -1;

  // elevator metrics
  const int speed; // inches per second, up or down
  const unsigned int CAPACITY; 
  int location; // inches above ground level
  int direction; // equal to IDLE, UP, DOWN
  int atFloorIndex; // -1 if door is closed
  int timer;

  vector<Rider> riders;
  
  public:
  Elevator(unsigned int, int, int);
  operator int() const {return location;}

  Panel panel;
  
  // friend function
  friend ostream& operator<<(ostream&, const Elevator&); 
};

#endif
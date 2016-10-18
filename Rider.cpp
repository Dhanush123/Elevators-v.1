#import "Rider.h"

Rider::Rider(int f, int t)
:from(f), to(t){
}

Rider& Rider::operator=(const Rider& r){
  const_cast<int&>(this->from) = r.from;
  const_cast<int&>(this->to) = r.to;
  return *this;
}

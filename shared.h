#ifndef SHARED_H__
#define SHARED_H__

#include "shared_EXPORTS.h"

extern "C" void SHARED_EXPORT f();

class SHARED_EXPORT X {
public:
  X();
  void mX();
};

#endif

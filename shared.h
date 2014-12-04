#ifndef SHARED_H__
#define SHARED_H__

#include "shared_EXPORTS.h"

#ifdef __cplusplus
extern "C" {
#endif

void SHARED_EXPORT f();

#ifdef __cplusplus
} // end extern "C"
#endif

class SHARED_EXPORT X {
public:
  X();
  void mX();
};

#endif

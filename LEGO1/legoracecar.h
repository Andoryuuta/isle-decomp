#ifndef LEGORACECAR_H
#define LEGORACECAR_H

#include "legocarraceactor.h"

// VTABLE 0x100d58b8
class LegoRaceCar : public LegoCarRaceActor
{
public:
  // OFFSET: LEGO1 0x10014290
  inline virtual const char *ClassName() const override // vtable+0x0c
  {
    // 0x100f0548
    return "LegoRaceCar";
  }

  // OFFSET: LEGO1 0x100142b0
  inline virtual MxBool IsA(const char *name) const override // vtable+0x10
  {
    return !strcmp(name, LegoRaceCar::ClassName()) || LegoCarRaceActor::IsA(name);
  }
};

#endif // LEGORACECAR_H

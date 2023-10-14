#ifndef MXOBJECTFACTORY_H
#define MXOBJECTFACTORY_H

#include "mxcore.h"
#include "mxatomid.h"

// VTABLE 0x100dc220
class MxObjectFactory : public MxCore
{
public:
  MxObjectFactory();

  // OFFSET: LEGO1 0x10008f70
  inline virtual const char *ClassName() const override // vtable+0x0c
  {
    // 0x100f0730
    return "MxObjectFactory";
  }

  // OFFSET: LEGO1 0x10008f80
  inline virtual MxBool IsA(const char *name) const override // vtable+0x10
  {
    return !strcmp(MxObjectFactory::ClassName(), name) || MxCore::IsA(name);
  }

  virtual MxCore *Create(const char *name); // vtable 0x14
  virtual void Delete(MxCore *); // vtable 0x18

private:
  MxAtomId m_idMxPresenter;
  MxAtomId m_idMxCompositePresenter;
  MxAtomId m_idMxVideoPresenter;
  MxAtomId m_idMxFlcPresenter;
  MxAtomId m_idMxSmkPresenter;
  MxAtomId m_idMxStillPresenter;
  MxAtomId m_idMxWavePresenter;
  MxAtomId m_idMxMIDIPresenter;
  MxAtomId m_idMxEventPresenter;
  MxAtomId m_idMxLoopingFlcPresenter;
  MxAtomId m_idMxLoopingSmkPresenter;
  MxAtomId m_idMxLoopingMIDIPresenter;
};

#endif // MXOBJECTFACTORY_H

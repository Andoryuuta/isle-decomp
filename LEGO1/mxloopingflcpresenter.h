#ifndef MXLOOPINGFLCPRESENTER_H
#define MXLOOPINGFLCPRESENTER_H

#include "mxflcpresenter.h"

#include "decomp.h"

// VTABLE 0x100dc480
// SIZE 0x6c
class MxLoopingFlcPresenter : public MxFlcPresenter
{
public:
  MxLoopingFlcPresenter();
  virtual ~MxLoopingFlcPresenter() override;

  // OFFSET: LEGO1 0x100b4380
  inline virtual const char* ClassName() const override // vtable+0xc
  {
    // 0x10101e20
    return "MxLoopingFlcPresenter";
  }

private:
  void Init();
  void Destroy(MxBool p_fromDestructor);

  undefined4 m_unk68;
};

#endif // MXLOOPINGFLCPRESENTER_H

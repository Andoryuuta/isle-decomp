#include "mxobjectfactory.h"

#include "mxpresenter.h"
#include "mxcompositepresenter.h"
#include "mxvideopresenter.h"
#include "mxflcpresenter.h"
#include "mxsmkpresenter.h"
#include "mxstillpresenter.h"
#include "mxwavepresenter.h"
#include "mxmidipresenter.h"
#include "mxeventpresenter.h"
#include "mxloopingflcpresenter.h"
#include "mxloopingsmkpresenter.h"
#include "mxloopingmidipresenter.h"

#include "decomp.h"

DECOMP_SIZE_ASSERT(MxObjectFactory, 0x38); // 100af1db

// OFFSET: LEGO1 0x100b0d80
MxObjectFactory::MxObjectFactory()
{
  this->m_idMxPresenter = MxAtomId("MxPresenter", LookupMode_Exact);
  this->m_idMxCompositePresenter = MxAtomId("MxCompositePresenter", LookupMode_Exact);
  this->m_idMxVideoPresenter = MxAtomId("MxVideoPresenter", LookupMode_Exact);
  this->m_idMxFlcPresenter = MxAtomId("MxFlcPresenter", LookupMode_Exact);
  this->m_idMxSmkPresenter = MxAtomId("MxSmkPresenter", LookupMode_Exact);
  this->m_idMxStillPresenter = MxAtomId("MxStillPresenter", LookupMode_Exact);
  this->m_idMxWavePresenter = MxAtomId("MxWavePresenter", LookupMode_Exact);
  this->m_idMxMIDIPresenter = MxAtomId("MxMIDIPresenter", LookupMode_Exact);
  this->m_idMxEventPresenter = MxAtomId("MxEventPresenter", LookupMode_Exact);
  this->m_idMxLoopingFlcPresenter = MxAtomId("MxLoopingFlcPresenter", LookupMode_Exact);
  this->m_idMxLoopingSmkPresenter = MxAtomId("MxLoopingSmkPresenter", LookupMode_Exact);
  this->m_idMxLoopingMIDIPresenter = MxAtomId("MxLoopingMIDIPresenter", LookupMode_Exact);
}

// OFFSET: LEGO1 0x100b12c0
MxCore *MxObjectFactory::Create(const char *name)
{
  MxAtomId atom(name, LookupMode_Exact);
  MxCore* object = NULL;

  if (this->m_idMxPresenter == atom)
  {
    object = new MxPresenter();
  }
  else if (this->m_idMxCompositePresenter == atom)
  {
    object = new MxCompositePresenter();
  }
  else if (this->m_idMxVideoPresenter == atom)
  {
    object = new MxVideoPresenter();
  }
  else if (this->m_idMxFlcPresenter == atom)
  {
    object = new MxFlcPresenter();
  }
  else if (this->m_idMxSmkPresenter == atom)
  {
    object = new MxSmkPresenter();
  }
  else if (this->m_idMxStillPresenter == atom)
  {
    object = new MxStillPresenter();
  }
  else if (this->m_idMxWavePresenter == atom)
  {
    object = new MxWavePresenter();
  }
  else if (this->m_idMxMIDIPresenter == atom)
  {
    object = new MxMIDIPresenter();
  }
  else if (this->m_idMxEventPresenter == atom)
  {
    object = new MxEventPresenter();
  }
  else if (this->m_idMxLoopingFlcPresenter == atom)
  {
    object = new MxLoopingFlcPresenter();
  }
  else if (this->m_idMxLoopingSmkPresenter == atom)
  {
    object = new MxLoopingSmkPresenter();
  }
  else if (this->m_idMxLoopingMIDIPresenter == atom)
  {
    object = new MxLoopingMIDIPresenter();
  }

  return object;
}

// OFFSET: LEGO1 0x100b1a30
void MxObjectFactory::Delete(MxCore *obj)
{
  delete obj;
}

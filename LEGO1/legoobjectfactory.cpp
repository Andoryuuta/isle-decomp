#include "legoobjectfactory.h"

// Stub classes
class LegoMeterPresenter {};
class Lego3DWavePresenter {};
class LegoRaceCar {};
class LegoAct2 {};
class Act2State {};
class LegoRaceCarBuildState {};
class LegoCopterBuildState {};
class LegoDuneCarBuildState {};
class LegoJetskiBuildState {};
class Act2Actor {};
class Act2GenActor {};
class Motocycle {};
class Act3Cop {};
class Act3Brickster {};
class PizzeriaState {};
class CaveEntity {};
class JailEntity {};
class RaceSkel {};


#include "legoentitypresenter.h"
#include "legoactorpresenter.h"
#include "legoworldpresenter.h"
#include "legoworld.h"
#include "legomodelpresenter.h"
#include "legotexturepresenter.h"
#include "legophonemepresenter.h"
#include "legoflctexturepresenter.h"
#include "legopalettepresenter.h"
#include "legopathpresenter.h"
#include "legoanimpresenter.h"
#include "legoloopinganimpresenter.h"
#include "legolocomotionanimpresenter.h"
#include "legohideanimpresenter.h"
#include "legopartpresenter.h"
#include "legocarbuildanimpresenter.h"
#include "legoactioncontrolpresenter.h"
// #include "legometerpresenter.h"
#include "legoloadcachesoundpresenter.h"
// #include "lego3dwavepresenter.h"
#include "legoactor.h"
#include "legopathactor.h"
// #include "legoracecar.h"
#include "legojetski.h"
#include "jetskirace.h"
#include "legoentity.h"
#include "legocarraceactor.h"
#include "legojetskiraceactor.h"
#include "legocarbuild.h"
#include "infocenter.h"
#include "legoanimactor.h"
#include "mxcontrolpresenter.h"
#include "registrationbook.h"
#include "historybook.h"
#include "elevatorbottom.h"
#include "infocenterdoor.h"
#include "score.h"
#include "scorestate.h"
#include "hospital.h"
#include "isle.h"
#include "police.h"
#include "gasstation.h"
// #include "legoact2.h"
// #include "act2state.h"
#include "carrace.h"
// #include "legoracecarbuildstate.h"
// #include "legocopterbuildstate.h"
// #include "legodunecarbuildstate.h"
// #include "legojetskibuildstate.h"
#include "hospitalstate.h"
#include "infocenterstate.h"
#include "policestate.h"
#include "gasstationstate.h"
#include "skateboard.h"
#include "helicopter.h"
#include "helicopterstate.h"
#include "dunebuggy.h"
#include "pizza.h"
#include "pizzamissionstate.h"
// #include "act2actor.h"
#include "act2brick.h"
// #include "act2genactor.h"
#include "act2policestation.h"
#include "act3.h"
#include "act3state.h"
#include "doors.h"
#include "legoanimmmpresenter.h"
#include "racecar.h"
#include "jetski.h"
#include "bike.h"
// #include "motocycle.h"
#include "ambulance.h"
#include "ambulancemissionstate.h"
#include "towtrack.h"
#include "towtrackmissionstate.h"
// #include "act3cop.h"
// #include "act3brickster.h"
#include "act3shark.h"
#include "bumpbouy.h"
#include "act3actor.h"
#include "jetskiracestate.h"
#include "carracestate.h"
#include "act1state.h"
#include "pizzeria.h"
#include "pizzeriastate.h"
#include "infocenterentity.h"
#include "hospitalentity.h"
#include "gasstationentity.h"
#include "policeentity.h"
#include "beachhouseentity.h"
#include "racestandsentity.h"
#include "jukeboxentity.h"
#include "radiostate.h"
// #include "caveentity.h"
// #include "jailentity.h"
#include "mxcompositemediapresenter.h"
#include "jukebox.h"
#include "jukeboxstate.h"
// #include "raceskel.h"
#include "animstate.h"

#include "decomp.h"

DECOMP_SIZE_ASSERT(LegoObjectFactory, 0x1c8); //10058f54

// OFFSET: LEGO1 0x10006e40
LegoObjectFactory::LegoObjectFactory()
{
// #define X(V) this->m_id##V = MxAtomId(#V, LookupMode_Exact);
//   FOR_LEGOOBJECTFACTORY_OBJECTS(X)
// #undef X

  this->m_idLegoEntityPresenter = MxAtomId("LegoEntityPresenter", LookupMode_Exact);
  this->m_idLegoActorPresenter = MxAtomId("LegoActorPresenter", LookupMode_Exact);
  this->m_idLegoWorldPresenter = MxAtomId("LegoWorldPresenter", LookupMode_Exact);
  this->m_idLegoWorld = MxAtomId("LegoWorld", LookupMode_Exact);
  this->m_idLegoModelPresenter = MxAtomId("LegoModelPresenter", LookupMode_Exact);
  this->m_idLegoTexturePresenter = MxAtomId("LegoTexturePresenter", LookupMode_Exact);
  this->m_idLegoPhonemePresenter = MxAtomId("LegoPhonemePresenter", LookupMode_Exact);
  this->m_idLegoFlcTexturePresenter = MxAtomId("LegoFlcTexturePresenter", LookupMode_Exact);
  this->m_idLegoPalettePresenter = MxAtomId("LegoPalettePresenter", LookupMode_Exact);
  this->m_idLegoPathPresenter = MxAtomId("LegoPathPresenter", LookupMode_Exact);
  this->m_idLegoAnimPresenter = MxAtomId("LegoAnimPresenter", LookupMode_Exact);
  this->m_idLegoLoopingAnimPresenter = MxAtomId("LegoLoopingAnimPresenter", LookupMode_Exact);
  this->m_idLegoLocomotionAnimPresenter = MxAtomId("LegoLocomotionAnimPresenter", LookupMode_Exact);
  this->m_idLegoHideAnimPresenter = MxAtomId("LegoHideAnimPresenter", LookupMode_Exact);
  this->m_idLegoPartPresenter = MxAtomId("LegoPartPresenter", LookupMode_Exact);
  this->m_idLegoCarBuildAnimPresenter = MxAtomId("LegoCarBuildAnimPresenter", LookupMode_Exact);
  this->m_idLegoActionControlPresenter = MxAtomId("LegoActionControlPresenter", LookupMode_Exact);
  this->m_idLegoMeterPresenter = MxAtomId("LegoMeterPresenter", LookupMode_Exact);
  this->m_idLegoLoadCacheSoundPresenter = MxAtomId("LegoLoadCacheSoundPresenter", LookupMode_Exact);
  this->m_idLego3DWavePresenter = MxAtomId("Lego3DWavePresenter", LookupMode_Exact);
  this->m_idLegoActor = MxAtomId("LegoActor", LookupMode_Exact);
  this->m_idLegoPathActor = MxAtomId("LegoPathActor", LookupMode_Exact);
  this->m_idLegoRaceCar = MxAtomId("LegoRaceCar", LookupMode_Exact);
  this->m_idLegoJetski = MxAtomId("LegoJetski", LookupMode_Exact);
  this->m_idJetskiRace = MxAtomId("JetskiRace", LookupMode_Exact);
  this->m_idLegoEntity = MxAtomId("LegoEntity", LookupMode_Exact);
  this->m_idLegoCarRaceActor = MxAtomId("LegoCarRaceActor", LookupMode_Exact);
  this->m_idLegoJetskiRaceActor = MxAtomId("LegoJetskiRaceActor", LookupMode_Exact);
  this->m_idLegoCarBuild = MxAtomId("LegoCarBuild", LookupMode_Exact);
  this->m_idInfocenter = MxAtomId("Infocenter", LookupMode_Exact);
  this->m_idLegoAnimActor = MxAtomId("LegoAnimActor", LookupMode_Exact);
  this->m_idMxControlPresenter = MxAtomId("MxControlPresenter", LookupMode_Exact);
  this->m_idRegistrationBook = MxAtomId("RegistrationBook", LookupMode_Exact);
  this->m_idHistoryBook = MxAtomId("HistoryBook", LookupMode_Exact);
  this->m_idElevatorBottom = MxAtomId("ElevatorBottom", LookupMode_Exact);
  this->m_idInfocenterDoor = MxAtomId("InfocenterDoor", LookupMode_Exact);
  this->m_idScore = MxAtomId("Score", LookupMode_Exact);
  this->m_idScoreState = MxAtomId("ScoreState", LookupMode_Exact);
  this->m_idHospital = MxAtomId("Hospital", LookupMode_Exact);
  this->m_idIsle = MxAtomId("Isle", LookupMode_Exact);
  this->m_idPolice = MxAtomId("Police", LookupMode_Exact);
  this->m_idGasStation = MxAtomId("GasStation", LookupMode_Exact);
  this->m_idLegoAct2 = MxAtomId("LegoAct2", LookupMode_Exact);
  this->m_idAct2State = MxAtomId("Act2State", LookupMode_Exact);
  this->m_idCarRace = MxAtomId("CarRace", LookupMode_Exact);
  this->m_idLegoRaceCarBuildState = MxAtomId("LegoRaceCarBuildState", LookupMode_Exact);
  this->m_idLegoCopterBuildState = MxAtomId("LegoCopterBuildState", LookupMode_Exact);
  this->m_idLegoDuneCarBuildState = MxAtomId("LegoDuneCarBuildState", LookupMode_Exact);
  this->m_idLegoJetskiBuildState = MxAtomId("LegoJetskiBuildState", LookupMode_Exact);
  this->m_idHospitalState = MxAtomId("HospitalState", LookupMode_Exact);
  this->m_idInfocenterState = MxAtomId("InfocenterState", LookupMode_Exact);
  this->m_idPoliceState = MxAtomId("PoliceState", LookupMode_Exact);
  this->m_idGasStationState = MxAtomId("GasStationState", LookupMode_Exact);
  this->m_idSkateBoard = MxAtomId("SkateBoard", LookupMode_Exact);
  this->m_idHelicopter = MxAtomId("Helicopter", LookupMode_Exact);
  this->m_idHelicopterState = MxAtomId("HelicopterState", LookupMode_Exact);
  this->m_idDuneBuggy = MxAtomId("DuneBuggy", LookupMode_Exact);
  this->m_idPizza = MxAtomId("Pizza", LookupMode_Exact);
  this->m_idPizzaMissionState = MxAtomId("PizzaMissionState", LookupMode_Exact);
  this->m_idAct2Actor = MxAtomId("Act2Actor", LookupMode_Exact);
  this->m_idAct2Brick = MxAtomId("Act2Brick", LookupMode_Exact);
  this->m_idAct2GenActor = MxAtomId("Act2GenActor", LookupMode_Exact);
  this->m_idAct2PoliceStation = MxAtomId("Act2PoliceStation", LookupMode_Exact);
  this->m_idAct3 = MxAtomId("Act3", LookupMode_Exact);
  this->m_idAct3State = MxAtomId("Act3State", LookupMode_Exact);
  this->m_idDoors = MxAtomId("Doors", LookupMode_Exact);
  this->m_idLegoAnimMMPresenter = MxAtomId("LegoAnimMMPresenter", LookupMode_Exact);
  this->m_idRaceCar = MxAtomId("RaceCar", LookupMode_Exact);
  this->m_idJetski = MxAtomId("Jetski", LookupMode_Exact);
  this->m_idBike = MxAtomId("Bike", LookupMode_Exact);
  this->m_idMotocycle = MxAtomId("Motocycle", LookupMode_Exact);
  this->m_idAmbulance = MxAtomId("Ambulance", LookupMode_Exact);
  this->m_idAmbulanceMissionState = MxAtomId("AmbulanceMissionState", LookupMode_Exact);
  this->m_idTowTrack = MxAtomId("TowTrack", LookupMode_Exact);
  this->m_idTowTrackMissionState = MxAtomId("TowTrackMissionState", LookupMode_Exact);
  this->m_idAct3Cop = MxAtomId("Act3Cop", LookupMode_Exact);
  this->m_idAct3Brickster = MxAtomId("Act3Brickster", LookupMode_Exact);
  this->m_idAct3Shark = MxAtomId("Act3Shark", LookupMode_Exact);
  this->m_idBumpBouy = MxAtomId("BumpBouy", LookupMode_Exact);
  this->m_idAct3Actor = MxAtomId("Act3Actor", LookupMode_Exact);
  this->m_idJetskiRaceState = MxAtomId("JetskiRaceState", LookupMode_Exact);
  this->m_idCarRaceState = MxAtomId("CarRaceState", LookupMode_Exact);
  this->m_idAct1State = MxAtomId("Act1State", LookupMode_Exact);
  this->m_idPizzeria = MxAtomId("Pizzeria", LookupMode_Exact);
  this->m_idPizzeriaState = MxAtomId("PizzeriaState", LookupMode_Exact);
  this->m_idInfoCenterEntity = MxAtomId("InfoCenterEntity", LookupMode_Exact);
  this->m_idHospitalEntity = MxAtomId("HospitalEntity", LookupMode_Exact);
  this->m_idGasStationEntity = MxAtomId("GasStationEntity", LookupMode_Exact);
  this->m_idPoliceEntity = MxAtomId("PoliceEntity", LookupMode_Exact);
  this->m_idBeachHouseEntity = MxAtomId("BeachHouseEntity", LookupMode_Exact);
  this->m_idRaceStandsEntity = MxAtomId("RaceStandsEntity", LookupMode_Exact);
  this->m_idJukeBoxEntity = MxAtomId("JukeBoxEntity", LookupMode_Exact);
  this->m_idRadioState = MxAtomId("RadioState", LookupMode_Exact);
  this->m_idCaveEntity = MxAtomId("CaveEntity", LookupMode_Exact);
  this->m_idJailEntity = MxAtomId("JailEntity", LookupMode_Exact);
  this->m_idMxCompositeMediaPresenter = MxAtomId("MxCompositeMediaPresenter", LookupMode_Exact);
  this->m_idJukeBox = MxAtomId("JukeBox", LookupMode_Exact);
  this->m_idJukeBoxState = MxAtomId("JukeBoxState", LookupMode_Exact);
  this->m_idRaceSkel = MxAtomId("RaceSkel", LookupMode_Exact);
  this->m_idAnimState = MxAtomId("AnimState", LookupMode_Exact);
}

// OFFSET: LEGO1 0x10009a90
MxCore *LegoObjectFactory::Create(const char *name)
{
  MxAtomId atom(name, LookupMode_Exact);

//   if (0) {
// #define X(V) } else if (this->m_id##V == atom) { return (MxCore *)new V;
//   FOR_LEGOOBJECTFACTORY_OBJECTS(X)
// #undef X
//   } else {
//     return NULL;
//   }

  MxCore* object = (MxCore*)NULL;
  void* unk = &object;

  if (this->m_idLegoEntityPresenter == atom)
  {
    object = (MxCore*)new LegoEntityPresenter();
  }
  else if (this->m_idLegoActorPresenter == atom)
  {
    object = (MxCore*)new LegoActorPresenter();
  }
  else if (this->m_idLegoWorldPresenter == atom)
  {
    object = (MxCore*)new LegoWorldPresenter();
  }
  else if (this->m_idLegoWorld == atom)
  {
    object = (MxCore*)new LegoWorld();
  }
  else if (this->m_idLegoModelPresenter == atom)
  {
    object = (MxCore*)new LegoModelPresenter();
  }
  else if (this->m_idLegoTexturePresenter == atom)
  {
    object = (MxCore*)new LegoTexturePresenter();
  }
  else if (this->m_idLegoPhonemePresenter == atom)
  {
    object = (MxCore*)new LegoPhonemePresenter();
  }
  else if (this->m_idLegoFlcTexturePresenter == atom)
  {
    object = (MxCore*)new LegoFlcTexturePresenter();
  }
  else if (this->m_idLegoPalettePresenter == atom)
  {
    object = (MxCore*)new LegoPalettePresenter();
  }
  else if (this->m_idLegoPathPresenter == atom)
  {
    object = (MxCore*)new LegoPathPresenter();
  }
  else if (this->m_idLegoAnimPresenter == atom)
  {
    object = (MxCore*)new LegoAnimPresenter();
  }
  else if (this->m_idLegoLoopingAnimPresenter == atom)
  {
    object = (MxCore*)new LegoLoopingAnimPresenter();
  }
  else if (this->m_idLegoLocomotionAnimPresenter == atom)
  {
    object = (MxCore*)new LegoLocomotionAnimPresenter();
  }
  else if (this->m_idLegoHideAnimPresenter == atom)
  {
    object = (MxCore*)new LegoHideAnimPresenter();
  }
  else if (this->m_idLegoPartPresenter == atom)
  {
    object = (MxCore*)new LegoPartPresenter();
  }
  else if (this->m_idLegoCarBuildAnimPresenter == atom)
  {
    object = (MxCore*)new LegoCarBuildAnimPresenter();
  }
  else if (this->m_idLegoActionControlPresenter == atom)
  {
    object = (MxCore*)new LegoActionControlPresenter();
  }
  else if (this->m_idLegoMeterPresenter == atom)
  {
    object = (MxCore*)new LegoMeterPresenter();
  }
  else if (this->m_idLegoLoadCacheSoundPresenter == atom)
  {
    object = (MxCore*)new LegoLoadCacheSoundPresenter();
  }
  else if (this->m_idLego3DWavePresenter == atom)
  {
    object = (MxCore*)new Lego3DWavePresenter();
  }
  else if (this->m_idLegoActor == atom)
  {
    object = (MxCore*)new LegoActor();
  }
  else if (this->m_idLegoPathActor == atom)
  {
    object = (MxCore*)new LegoPathActor();
  }
  else if (this->m_idLegoRaceCar == atom)
  {
    object = (MxCore*)new LegoRaceCar();
  }
  else if (this->m_idLegoJetski == atom)
  {
    object = (MxCore*)new LegoJetski();
  }
  else if (this->m_idJetskiRace == atom)
  {
    object = (MxCore*)new JetskiRace();
  }
  else if (this->m_idLegoEntity == atom)
  {
    object = (MxCore*)new LegoEntity();
  }
  else if (this->m_idLegoCarRaceActor == atom)
  {
    object = (MxCore*)new LegoCarRaceActor();
  }
  else if (this->m_idLegoJetskiRaceActor == atom)
  {
    object = (MxCore*)new LegoJetskiRaceActor();
  }
  else if (this->m_idLegoCarBuild == atom)
  {
    object = (MxCore*)new LegoCarBuild();
  }
  else if (this->m_idInfocenter == atom)
  {
    object = (MxCore*)new Infocenter();
  }
  else if (this->m_idLegoAnimActor == atom)
  {
    object = (MxCore*)new LegoAnimActor();
  }
  else if (this->m_idMxControlPresenter == atom)
  {
    object = (MxCore*)new MxControlPresenter();
  }
  else if (this->m_idRegistrationBook == atom)
  {
    object = (MxCore*)new RegistrationBook();
  }
  else if (this->m_idHistoryBook == atom)
  {
    object = (MxCore*)new HistoryBook();
  }
  else if (this->m_idElevatorBottom == atom)
  {
    object = (MxCore*)new ElevatorBottom();
  }
  else if (this->m_idInfocenterDoor == atom)
  {
    object = (MxCore*)new InfocenterDoor();
  }
  else if (this->m_idScore == atom)
  {
    object = (MxCore*)new Score();
  }
  else if (this->m_idScoreState == atom)
  {
    object = (MxCore*)new ScoreState();
  }
  else if (this->m_idHospital == atom)
  {
    object = (MxCore*)new Hospital();
  }
  else if (this->m_idIsle == atom)
  {
    object = (MxCore*)new Isle();
  }
  else if (this->m_idPolice == atom)
  {
    object = (MxCore*)new Police();
  }
  else if (this->m_idGasStation == atom)
  {
    object = (MxCore*)new GasStation();
  }
  else if (this->m_idLegoAct2 == atom)
  {
    object = (MxCore*)new LegoAct2();
  }
  else if (this->m_idAct2State == atom)
  {
    object = (MxCore*)new Act2State();
  }
  else if (this->m_idCarRace == atom)
  {
    object = (MxCore*)new CarRace();
  }
  else if (this->m_idLegoRaceCarBuildState == atom)
  {
    object = (MxCore*)new LegoRaceCarBuildState();
  }
  else if (this->m_idLegoCopterBuildState == atom)
  {
    object = (MxCore*)new LegoCopterBuildState();
  }
  else if (this->m_idLegoDuneCarBuildState == atom)
  {
    object = (MxCore*)new LegoDuneCarBuildState();
  }
  else if (this->m_idLegoJetskiBuildState == atom)
  {
    object = (MxCore*)new LegoJetskiBuildState();
  }
  else if (this->m_idHospitalState == atom)
  {
    object = (MxCore*)new HospitalState();
  }
  else if (this->m_idInfocenterState == atom)
  {
    object = (MxCore*)new InfocenterState();
  }
  else if (this->m_idPoliceState == atom)
  {
    object = (MxCore*)new PoliceState();
  }

  // We have to split this else-if chain here as MSVC++ 4.2 can't seem to
  // handle more than 98 else-ifs before erroring with:
  // "fatal error C1026: parser stack overflow, program too complex"
  if (this->m_idGasStationState == atom)
  {
    object = (MxCore*)new GasStationState();
  }
  else if (this->m_idSkateBoard == atom)
  {
    object = (MxCore*)new SkateBoard();
  }
  else if (this->m_idHelicopter == atom)
  {
    object = (MxCore*)new Helicopter();
  }
  else if (this->m_idHelicopterState == atom)
  {
    object = (MxCore*)new HelicopterState();
  }
  else if (this->m_idDuneBuggy == atom)
  {
    object = (MxCore*)new DuneBuggy();
  }
  else if (this->m_idPizza == atom)
  {
    object = (MxCore*)new Pizza();
  }
  else if (this->m_idPizzaMissionState == atom)
  {
    object = (MxCore*)new PizzaMissionState();
  }
  else if (this->m_idAct2Actor == atom)
  {
    object = (MxCore*)new Act2Actor();
  }
  else if (this->m_idAct2Brick == atom)
  {
    object = (MxCore*)new Act2Brick();
  }
  else if (this->m_idAct2GenActor == atom)
  {
    object = (MxCore*)new Act2GenActor();
  }
  else if (this->m_idAct2PoliceStation == atom)
  {
    object = (MxCore*)new Act2PoliceStation();
  }
  else if (this->m_idAct3 == atom)
  {
    object = (MxCore*)new Act3();
  }
  else if (this->m_idAct3State == atom)
  {
    object = (MxCore*)new Act3State();
  }
  else if (this->m_idDoors == atom)
  {
    object = (MxCore*)new Doors();
  }
  else if (this->m_idLegoAnimMMPresenter == atom)
  {
    object = (MxCore*)new LegoAnimMMPresenter();
  }
  else if (this->m_idRaceCar == atom)
  {
    object = (MxCore*)new RaceCar();
  }
  else if (this->m_idJetski == atom)
  {
    object = (MxCore*)new Jetski();
  }
  else if (this->m_idBike == atom)
  {
    object = (MxCore*)new Bike();
  }
  else if (this->m_idMotocycle == atom)
  {
    object = (MxCore*)new Motocycle();
  }
  else if (this->m_idAmbulance == atom)
  {
    object = (MxCore*)new Ambulance();
  }
  else if (this->m_idAmbulanceMissionState == atom)
  {
    object = (MxCore*)new AmbulanceMissionState();
  }
  else if (this->m_idTowTrack == atom)
  {
    object = (MxCore*)new TowTrack();
  }
  else if (this->m_idTowTrackMissionState == atom)
  {
    object = (MxCore*)new TowTrackMissionState();
  }
  else if (this->m_idAct3Cop == atom)
  {
    object = (MxCore*)new Act3Cop();
  }
  else if (this->m_idAct3Brickster == atom)
  {
    object = (MxCore*)new Act3Brickster();
  }
  else if (this->m_idAct3Shark == atom)
  {
    object = (MxCore*)new Act3Shark();
  }
  else if (this->m_idBumpBouy == atom)
  {
    object = (MxCore*)new BumpBouy();
  }
  else if (this->m_idAct3Actor == atom)
  {
    object = (MxCore*)new Act3Actor();
  }
  else if (this->m_idJetskiRaceState == atom)
  {
    object = (MxCore*)new JetskiRaceState();
  }
  else if (this->m_idCarRaceState == atom)
  {
    object = (MxCore*)new CarRaceState();
  }
  else if (this->m_idAct1State == atom)
  {
    object = (MxCore*)new Act1State();
  }
  else if (this->m_idPizzeria == atom)
  {
    object = (MxCore*)new Pizzeria();
  }
  else if (this->m_idPizzeriaState == atom)
  {
    object = (MxCore*)new PizzeriaState();
  }
  else if (this->m_idInfoCenterEntity == atom)
  {
    object = (MxCore*)new InfoCenterEntity();
  }
  else if (this->m_idHospitalEntity == atom)
  {
    object = (MxCore*)new HospitalEntity();
  }
  else if (this->m_idGasStationEntity == atom)
  {
    object = (MxCore*)new GasStationEntity();
  }
  else if (this->m_idPoliceEntity == atom)
  {
    object = (MxCore*)new PoliceEntity();
  }
  else if (this->m_idBeachHouseEntity == atom)
  {
    object = (MxCore*)new BeachHouseEntity();
  }
  else if (this->m_idRaceStandsEntity == atom)
  {
    object = (MxCore*)new RaceStandsEntity();
  }
  else if (this->m_idJukeBoxEntity == atom)
  {
    object = (MxCore*)new JukeBoxEntity();
  }
  else if (this->m_idRadioState == atom)
  {
    object = (MxCore*)new RadioState();
  }
  else if (this->m_idCaveEntity == atom)
  {
    object = (MxCore*)new CaveEntity();
  }
  else if (this->m_idJailEntity == atom)
  {
    object = (MxCore*)new JailEntity();
  }
  else if (this->m_idMxCompositeMediaPresenter == atom)
  {
    object = (MxCore*)new MxCompositeMediaPresenter();
  }
  else if (this->m_idJukeBox == atom)
  {
    object = (MxCore*)new JukeBox();
  }
  else if (this->m_idJukeBoxState == atom)
  {
    object = (MxCore*)new JukeBoxState();
  }
  else if (this->m_idRaceSkel == atom)
  {
    object = (MxCore*)new RaceSkel();
  }
  else if (this->m_idAnimState == atom)
  {
    object = (MxCore*)new AnimState();
  }

  return object;
}

// OFFSET: LEGO1 0x1000fb30
void LegoObjectFactory::Delete(MxCore *obj)
{
  delete obj;
}

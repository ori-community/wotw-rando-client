#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RacePrepareState.h>
#include <Modloader/app/structs/RaceSystem.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/RaceConfiguration.h>

namespace app::classes::RacePrepareState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::RacePrepareState * this_ptr, app::RaceSystem* race_system))
    IL2CPP_REGISTER_METHOD(0x00712170, void, OnEnter, (app::RacePrepareState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00712B60, void, OnExit, (app::RacePrepareState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00712EB0, void, UpdateState, (app::RacePrepareState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007134B0, void, PrepareRace, (app::RacePrepareState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007148C0, app::IEnumerator*, ShowFlythroughUi, (app::RacePrepareState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00714A10, void, FadeIn, (app::RacePrepareState * this_ptr, app::Action* on_complete))
    IL2CPP_REGISTER_METHOD(0x00714B30, void, FlythroughFinished, (app::RacePrepareState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04702A98, RacePrepareState_FlythroughFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00714C40, void, FlythroughSkipCompleted, (app::RacePrepareState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473CE50, RacePrepareState_FlythroughSkipCompleted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00714F80, void, LockEquipment, (app::RacePrepareState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, (app::RacePrepareState * this_ptr, app::RaceConfiguration* config))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, (app::RacePrepareState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00715190, void, RestartRaceRequested, (app::RacePrepareState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007151F0, void, CancelRaceRequested, (app::RacePrepareState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, (app::RacePrepareState * this_ptr))
} // namespace app::classes::RacePrepareState

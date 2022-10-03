#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RaceStopState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::RaceStopState * this_ptr, app::RaceSystem* race_system))
    IL2CPP_REGISTER_METHOD(0x0071BC20, void, OnEnter, (app::RaceStopState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475D140, RaceStopState_OnEnter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0071C190, void, OnPlayerArrivedUpdate, (app::RaceStopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0071C670, void, OnPlayerInterruptedUpdate, (app::RaceStopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0071C980, void, LogException, (app::RaceStopState * this_ptr, app::Exception* ex))
    IL2CPP_REGISTER_METHOD(0x0071CA20, void, OnRaceFinished, (app::RaceStopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0071D1C0, void, PlayOutcomeTimeline, (app::RaceStopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0071D2C0, float, CalculatePreciseFinishTime, (app::RaceStopState * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x0071D520, void, CancelRecording, (app::RaceStopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0071D610, void, RepositionOriToEndline, (app::RaceStopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0071D830, bool, get_IsOutcomeTimelineFinished, (app::RaceStopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0071D910, void, UpdateState, (app::RaceStopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0071E030, void, UpdateOutcomeVisuals, (app::RaceStopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0071E160, void, OnExit, (app::RaceStopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0071E290, void, StopRelatedTimelines, (app::RaceStopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, (app::RaceStopState * this_ptr, app::RaceConfiguration* config))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, (app::RaceStopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestartRaceRequested, (app::RaceStopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CancelRaceRequested, (app::RaceStopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, (app::RaceStopState * this_ptr))
} // namespace app::classes::RaceStopState

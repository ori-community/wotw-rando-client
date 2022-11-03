#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::StartRaceDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x009B24D0, void, ctor, (app::StartRaceDebugMenuItem * this_ptr, app::String* path, app::String* text))
    IL2CPP_REGISTER_METHOD(0x009B26A0, void, OnSelectedFixedUpdate, (app::StartRaceDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B2C10, void, NextRace, ())
    IL2CPP_REGISTER_METHOD(0x009B2D60, void, PreviousRace, ())
    IL2CPP_REGISTER_METHOD(0x009B2EB0, bool, StartRace, (app::StartRaceDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B3170, void, OnFinishedLoadingRaceScene, (app::StartRaceDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04778720, StartRaceDebugMenuItem_OnFinishedLoadingRaceScene__MethodInfo)
} // namespace app::classes::StartRaceDebugMenuItem

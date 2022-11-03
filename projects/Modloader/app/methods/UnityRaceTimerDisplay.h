#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityRaceTimerDisplay {
    IL2CPP_REGISTER_METHOD(0x012ABFF0, void, Awake, (app::UnityRaceTimerDisplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012AC3D0, void, OnEnable, (app::UnityRaceTimerDisplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012AC400, void, FixedUpdate, (app::UnityRaceTimerDisplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012ACB60, bool, CheckValueChanged, (int32_t * cache, int32_t value))
    IL2CPP_REGISTER_METHOD(0x012AC3D0, void, InvalidateCaches, (app::UnityRaceTimerDisplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UnityRaceTimerDisplay * this_ptr))
} // namespace app::classes::UnityRaceTimerDisplay

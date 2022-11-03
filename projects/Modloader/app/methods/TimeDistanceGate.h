#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TimeDistanceGate {
    IL2CPP_REGISTER_METHOD(0x010EFE70, void, ctor, (app::TimeDistanceGate * this_ptr, float time_cooldown, float distance_cooldown))
    IL2CPP_REGISTER_METHOD(0x010EFF60, bool, UpdateGate, (app::TimeDistanceGate * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x010F0130, void, AddGateRandomization, (app::TimeDistanceGate * this_ptr, float time_amplitude, float distance_amplitude))
} // namespace app::classes::TimeDistanceGate

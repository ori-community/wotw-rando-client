#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KillVolumeChaseController {
    IL2CPP_REGISTER_METHOD(0x00E749A0, app::Vector3, get_SeinPos, (app::KillVolumeChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E74A90, app::Vector3, get_AvalanchePos, (app::KillVolumeChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E74BF0, void, OnEnable, (app::KillVolumeChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E74CD0, void, OnDisable, (app::KillVolumeChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E74D90, void, SetSpeedToAnimations, (app::KillVolumeChaseController * this_ptr, float speed))
    IL2CPP_REGISTER_METHOD(0x00E74EF0, void, OnFixedUpdate, (app::KillVolumeChaseController * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x002FD490, app::SuspendableMask__Enum, get_Mask, (app::KillVolumeChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_Mask, (app::KillVolumeChaseController * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x006142D0, bool, get_IsSuspended, (app::KillVolumeChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006142E0, void, set_IsSuspended, (app::KillVolumeChaseController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::KillVolumeChaseController * this_ptr))
} // namespace app::classes::KillVolumeChaseController

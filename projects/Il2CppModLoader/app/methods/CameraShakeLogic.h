#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraShakeLogic {
    IL2CPP_REGISTER_METHOD(0x00B1D790, void, Awake, (app::CameraShakeLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1D830, void, OnDestroy, (app::CameraShakeLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1D8D0, void, UpdateOffset, (app::CameraShakeLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (app::CameraShakeLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (app::CameraShakeLogic * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FC830, app::SuspendableMask__Enum, get_Mask, (app::CameraShakeLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1DF40, void, set_Mask, (app::CameraShakeLogic * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00856B30, void, ctor, (app::CameraShakeLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1DFF0, void, cctor, ())
} // namespace app::classes::CameraShakeLogic

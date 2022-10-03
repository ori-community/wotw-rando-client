#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DynamicCameraWeightZone {
    IL2CPP_REGISTER_METHOD(0x00BE9CE0, float, GetWeight, (app::Vector3 primary_target_position))
    IL2CPP_REGISTER_METHOD(0x00BE9FD0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00BEA0A0, void, OnEnable, (app::DynamicCameraWeightZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEA160, void, OnDisable, (app::DynamicCameraWeightZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEA240, void, OnDestroy, (app::DynamicCameraWeightZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEA320, app::Rect, get_Bounds, (app::DynamicCameraWeightZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEA670, void, set_Bounds, (app::DynamicCameraWeightZone * this_ptr, app::Rect value))
    IL2CPP_REGISTER_METHOD(0x00BEA910, void, ctor, (app::DynamicCameraWeightZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEA940, void, cctor, ())
} // namespace app::classes::DynamicCameraWeightZone

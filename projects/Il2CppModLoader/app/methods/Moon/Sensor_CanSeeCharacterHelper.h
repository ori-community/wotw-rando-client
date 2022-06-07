#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Sensor_CanSeeCharacterHelper {
    IL2CPP_REGISTER_METHOD(0x00120590, void, Init, (app::Sensor_CanSeeCharacterHelper__Boxed * this_ptr, app::Sensor * sensor))
    IL2CPP_REGISTER_METHOD(0x001205D0, void, Dispose, (app::Sensor_CanSeeCharacterHelper__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001205E0, void, Cancel, (app::Sensor_CanSeeCharacterHelper__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001205F0, void, SetTarget, (app::Sensor_CanSeeCharacterHelper__Boxed * this_ptr, app::Vector3 _start, app::Vector2 _target, bool _target_in_range))
}

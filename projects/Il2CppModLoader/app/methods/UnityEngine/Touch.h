#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Touch {
    IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, get_fingerId, (app::Touch__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002292E0, app::Vector2, get_position, (app::Touch__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00229300, app::TouchPhase__Enum, get_phase, (app::Touch__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9B00, app::TouchType__Enum, get_type, (app::Touch__Boxed * this_ptr))
}

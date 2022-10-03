#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::VisualDebug::LineEntity {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_Mode, (app::LineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011929E0, void, ctor, (app::LineEntity * this_ptr, app::Vector3 start, app::Vector3 end, app::Color color))
    IL2CPP_REGISTER_METHOD(0x01192A10, void, Set, (app::LineEntity * this_ptr, app::Vector3 start, app::Vector3 end, app::Color color))
    IL2CPP_REGISTER_METHOD(0x01192A40, void, Render, (app::LineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01192B80, int32_t, GetHashCode, (app::LineEntity * this_ptr))
} // namespace app::classes::Moon::VisualDebug::LineEntity

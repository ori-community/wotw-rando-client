#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SmoothLinesPlugin {
    IL2CPP_REGISTER_METHOD(0x006D2B30, void, OnEnable, (app::SmoothLinesPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006D2BC0, void, SmoothLines, (app::SmoothLinesPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006D31E0, app::Vector2, CalculateTangentOut, (app::Vector3 position, app::Vector3 previous_position, app::Vector3 next_position, float tangent_multiplier))
    IL2CPP_REGISTER_METHOD(0x006D34B0, app::Vector2, CalculateTangentIn, (app::Vector3 position, app::Vector3 previous_position, app::Vector3 next_position, float tangent_multiplier))
    IL2CPP_REGISTER_METHOD(0x006D3790, void, ctor, (app::SmoothLinesPlugin * this_ptr))
} // namespace app::classes::SmoothLinesPlugin

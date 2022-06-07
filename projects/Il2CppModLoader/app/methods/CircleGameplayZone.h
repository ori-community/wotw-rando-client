#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CircleGameplayZone {
    IL2CPP_REGISTER_METHOD(0x01323F40, void, OnValidate, (app::CircleGameplayZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01324000, bool, ContainsPoint, (app::CircleGameplayZone * this_ptr, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x01324150, void, ctor, (app::CircleGameplayZone * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CircleGameplayZone.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::CircleGameplayZone {
    IL2CPP_REGISTER_METHOD(0x01323F40, void, OnValidate, (app::CircleGameplayZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01324000, bool, ContainsPoint, (app::CircleGameplayZone * this_ptr, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x01324150, void, ctor, (app::CircleGameplayZone * this_ptr))
} // namespace app::classes::CircleGameplayZone

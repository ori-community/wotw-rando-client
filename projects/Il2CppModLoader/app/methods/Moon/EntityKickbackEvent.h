#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::EntityKickbackEvent {
    IL2CPP_REGISTER_METHOD(0x01220930, void, ctor, (app::EntityKickbackEvent * this_ptr, app::Entity* entity, app::DamageResult damage_result, app::Vector2 direction, float multiplier, bool instant, app::Vector2 force_before_multiplier))
}

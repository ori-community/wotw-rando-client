#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityKickbackEvent.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Moon::EntityKickbackEvent {
    IL2CPP_REGISTER_METHOD(0x01220930, void, ctor, (app::EntityKickbackEvent * this_ptr, app::Entity* entity, app::DamageResult damage_result, app::Vector2 direction, float multiplier, bool instant, app::Vector2 force_before_multiplier))
}

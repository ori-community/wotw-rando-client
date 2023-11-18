#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/Entity.h>

namespace app::classes::Moon::EntityDamageEvent {
    IL2CPP_REGISTER_METHOD(0x0121E360, void, ctor, (app::EntityDamageEvent * this_ptr, app::Entity* entity, app::DamageResult damage_result))
}

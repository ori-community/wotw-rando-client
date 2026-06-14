#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityDeathEvent.h>

namespace app::classes::Moon::EntityDeathEvent {
    IL2CPP_REGISTER_METHOD(0x0121E360, void, ctor, app::EntityDeathEvent* this_ptr, app::Entity* entity, app::DamageResult damage_result)
}

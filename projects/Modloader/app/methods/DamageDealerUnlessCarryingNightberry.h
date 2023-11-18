#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageDealerUnlessCarryingNightberry.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::DamageDealerUnlessCarryingNightberry {
    IL2CPP_REGISTER_METHOD(0x00DC7DF0, void, Awake, (app::DamageDealerUnlessCarryingNightberry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC7E70, void, DealDamage, (app::DamageDealerUnlessCarryingNightberry * this_ptr, app::GameObject* target, app::DamageOwner* damage_owner))
    IL2CPP_REGISTER_METHOD(0x00DC81B0, void, ctor, (app::DamageDealerUnlessCarryingNightberry * this_ptr))
} // namespace app::classes::DamageDealerUnlessCarryingNightberry

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OriDamage.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/DamageOwner.h>

namespace app::classes::OriDamage {
    IL2CPP_REGISTER_METHOD(0x0043B9F0, void, ctor, (app::OriDamage * this_ptr, float amount, app::Vector2 force, app::Vector3 position, app::DamageType__Enum type, app::AbilityType__Enum ability_type, app::GameObject* sender, int32_t damage_i_d, app::DamageOwner* owner))
}

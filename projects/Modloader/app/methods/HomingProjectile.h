#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HomingProjectile {
    IL2CPP_REGISTER_METHOD(0x00B5D330, void, FixedUpdate, (app::HomingProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5D660, void, SetProjectileParameters, (app::HomingProjectile * this_ptr, app::Transform* target, float turning_speed, float damage, app::DamageWeight__Enum damage_weight, app::DamageLayerMask__Enum damage_layer_mask, app::DamageOwner* damage_owner, app::AbilityType__Enum ability_type))
    IL2CPP_REGISTER_METHOD(0x00B5D6B0, void, ctor, (app::HomingProjectile * this_ptr))
} // namespace app::classes::HomingProjectile

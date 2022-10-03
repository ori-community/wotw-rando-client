#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ProjectileDamageDealer {
    IL2CPP_REGISTER_METHOD(0x00C7B450, void, Awake, (app::ProjectileDamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7B510, void, DealDamage, (app::ProjectileDamageDealer * this_ptr, app::GameObject* target, app::DamageOwner* damage_owner))
    IL2CPP_REGISTER_METHOD(0x00C7B600, float, AmountOfDamage, (app::ProjectileDamageDealer * this_ptr, app::GameObject* target))
    IL2CPP_REGISTER_METHOD(0x00C7B6F0, void, ctor, (app::ProjectileDamageDealer * this_ptr))
} // namespace app::classes::ProjectileDamageDealer

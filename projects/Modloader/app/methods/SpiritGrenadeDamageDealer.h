#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SpiritGrenadeDamageDealer.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::SpiritGrenadeDamageDealer {
    IL2CPP_REGISTER_METHOD(0x00D58E60, void, Awake, app::SpiritGrenadeDamageDealer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D58F90, void, DealDamage, app::SpiritGrenadeDamageDealer* this_ptr, app::GameObject* target, app::DamageOwner* damage_owner)
    IL2CPP_REGISTER_METHOD(0x00D596A0, void, OnRecieveDamage, app::SpiritGrenadeDamageDealer* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00D597F0, void, ctor, app::SpiritGrenadeDamageDealer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::SpiritGrenadeDamageDealer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::SpiritGrenadeDamageDealer* this_ptr)
} // namespace app::classes::SpiritGrenadeDamageDealer

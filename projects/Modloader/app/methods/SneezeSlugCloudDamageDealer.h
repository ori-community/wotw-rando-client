#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SneezeSlugCloudDamageDealer {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_BypassPlayerInvincibility, (app::SneezeSlugCloudDamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED82A0, void, OnEnable, (app::SneezeSlugCloudDamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED82C0, void, DealDamage, (app::SneezeSlugCloudDamageDealer * this_ptr, app::GameObject* target, app::DamageOwner* damage_owner))
    IL2CPP_REGISTER_METHOD(0x00ED8440, void, ctor, (app::SneezeSlugCloudDamageDealer * this_ptr))
} // namespace app::classes::SneezeSlugCloudDamageDealer

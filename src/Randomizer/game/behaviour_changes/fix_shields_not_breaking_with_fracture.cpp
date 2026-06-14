#include <Modloader/app/methods/EnemyShield.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

namespace {
    using namespace app::classes;

    // Fractured Grenades only produce damage with damage weight = medium, causing shields
    // not to break. I guess this just is an error in the grenade prefab.
    IL2CPP_INTERCEPT(void, EnemyShield, ResolveDamage, app::EnemyShield* this_ptr, app::DamageResult* damage_result) {
        if (
            damage_result->Damage->fields.m_damageType == app::DamageType__Enum::Grenade &&
            damage_result->Damage->fields.m_damageWeight == app::DamageWeight__Enum::Medium
        ) {
            modloader::ScopedSetter _(damage_result->Damage->fields.m_damageWeight, app::DamageWeight__Enum::Heavy);
            next::EnemyShield::ResolveDamage(this_ptr, damage_result);
            return;
        }

        next::EnemyShield::ResolveDamage(this_ptr, damage_result);
    }
}

#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/app/types/GrenadeBurst.h>
#include <Modloader/app/methods/GrenadeBurst.h>
#include <Modloader/app/methods/Damage.h>
#include <Modloader/app/methods/SpiritTurret.h>
#include <Modloader/app/methods/DealDamageOverTime.h>
#include <Modloader/app/methods/Moon/Vitals.h>

namespace {
    using namespace app::classes;

    // Override the Sentry explosion damage type to not make Sentry explosion deaths count as Grenade
    IL2CPP_INTERCEPT(void, SpiritTurret, Explode, app::SpiritTurret * this_ptr) {
        const auto explosion_grenade_burst = il2cpp::unity::get_component<app::GrenadeBurst>(this_ptr->fields.ExplosionPrefab, types::GrenadeBurst::get_class());
        explosion_grenade_burst->fields.DamageType = app::DamageType__Enum::SpiritSentry;

        return next::SpiritTurret::Explode(this_ptr);
    }

    auto is_inside_grenade_burst_deal_damage = false;

    // Because Moon just copy&pasted the explosion from Grenade to Sentry,
    // Sentry explosions cause the same effect as Grenade explosions.
    // Unfortunately due to this, it is normally impossible to differentiate
    // between something that burns because of a Grenade and something
    // that burns because of Sentry.
    IL2CPP_INTERCEPT(void, GrenadeBurst, DealDamage, app::GrenadeBurst * this_ptr) {
        modloader::ScopedSetter _(is_inside_grenade_burst_deal_damage, true);
        return next::GrenadeBurst::DealDamage(this_ptr);
    }

    // So when Damage is constructed or Reset inside GrenadeBurst::DealDamage and
    // the damage type is SpiritTurret (from SpiritTurret::Explode above),
    // we set the damage type back to Grenade to still make it possible to melt
    // ice and light lanterns while smuggling the information about Sentry
    // into the ability_type field of the Damage.
    IL2CPP_INTERCEPT(void, Damage, ctor, app::Damage * this_ptr, float amount, app::Vector2 force, app::Vector3 position, app::DamageType__Enum type, app::AbilityType__Enum ability_type, app::GameObject* sender, int32_t damage_i_d, app::DamageOwner* owner, app::SpiritShardType__Enum shard_type, bool ignore_kickback, app::DamageWeight__Enum weight, float speed_transfer, bool bypass_players_invincibility) {
        if (is_inside_grenade_burst_deal_damage && type == app::DamageType__Enum::SpiritSentry) {
            type = app::DamageType__Enum::Grenade;
            ability_type = app::AbilityType__Enum::SpiritSentrySpell;
        }

        next::Damage::ctor(this_ptr, amount, force, position, type, ability_type, sender, damage_i_d, owner, shard_type, ignore_kickback, weight, speed_transfer, bypass_players_invincibility);
    }

    IL2CPP_INTERCEPT(void, Damage, Reset, app::Damage * this_ptr, float amount, app::Vector2 force, app::Vector3 position, app::DamageType__Enum type, app::AbilityType__Enum ability_type, app::GameObject* sender, int32_t damage_i_d, app::DamageOwner* owner, app::SpiritShardType__Enum shard_type, bool ignore_kickback, app::DamageWeight__Enum weight, float speed_transfer, bool bypass_players_invincibility) {
        if (is_inside_grenade_burst_deal_damage && type == app::DamageType__Enum::SpiritSentry) {
            type = app::DamageType__Enum::Grenade;
            ability_type = app::AbilityType__Enum::SpiritSentrySpell;
        }

        next::Damage::Reset(this_ptr, amount, force, position, type, ability_type, sender, damage_i_d, owner, shard_type, ignore_kickback, weight, speed_transfer, bypass_players_invincibility);
    }

    // The previous steps account for almost everything except when something dies
    // because of the fire damage caused by Sentry (and not the initial explosion damage).
    // Unfortunately, Moon special cases Grenade fire damage handling and resets
    // the ability type on the DealDamageOverTime component back to Grenade.
    // That behavior is hard coded into the game, so the only option we have here
    // is to catch the freshly created DealDamageOverTime in the act and copy
    // over our altered ability type.

    auto catch_deal_damage_over_time_component = false;
    app::DealDamageOverTime* caught_deal_damage_over_time_component = nullptr;

    IL2CPP_INTERCEPT(void, DealDamageOverTime, Awake, app::DealDamageOverTime * this_ptr) {
        if (catch_deal_damage_over_time_component) {
            caught_deal_damage_over_time_component = this_ptr;
        }

        next::DealDamageOverTime::Awake(this_ptr);
    }

    IL2CPP_INTERCEPT(void, Moon::Vitals, HandleFireShard, app::Vitals * this_ptr, app::Damage* damage) {
        catch_deal_damage_over_time_component = true;
        next::Moon::Vitals::HandleFireShard(this_ptr, damage);
        catch_deal_damage_over_time_component = false;

        if (caught_deal_damage_over_time_component != nullptr) {
            caught_deal_damage_over_time_component->fields.AbilityType = damage->fields.m_abilityType;
            caught_deal_damage_over_time_component = nullptr;
        }
    }
}

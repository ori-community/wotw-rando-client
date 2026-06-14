#include <Core/api/game/player.h>
#include <Modloader/app/methods/SpiritGrenade.h>
#include <Modloader/app/methods/DamageDealer.h>
#include <Modloader/interception.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

namespace {
    using namespace app::classes;

    // SpiritGrenade.DamageOwner is the owner of the grenade and should not change over the
    // lifetime of a grenade.
    // SpiritGrenade.DamageDealer.SpiritGrenade is the owner of the damage a grenade deals.
    // It is equal to SpiritGrenade.DamageOwner at first but can change, e.g. when bashing
    // or deflecting.

    IL2CPP_INTERCEPT(void, SpiritGrenade, OnRecieveDamage, app::SpiritGrenade* this_ptr, app::Damage* damage) {
        const auto previous_damage_layer = this_ptr->fields.DamageDealer->fields.DamageLayerMask;
        const auto previous_damage = DamageDealer::get_Damage(this_ptr->fields.DamageDealer);
        const auto previous_damage_owner = this_ptr->fields.DamageOwner;

        next::SpiritGrenade::OnRecieveDamage(this_ptr, damage);

        if (previous_damage_layer != this_ptr->fields.DamageDealer->fields.DamageLayerMask) {
            if (!this_ptr->fields.m_isBashed) {
                this_ptr->fields.m_preBashedDamage = previous_damage;
                this_ptr->fields.m_isBashed = true;
            }
        }

        // The vanilla game wrongly sets SpiritGrenade.DamageOwner to Ori when deflecting
        // grenades, even on grenades thrown by enemies.
        // So we just set it back to the value it had before.
        this_ptr->fields.DamageOwner = previous_damage_owner;
    }

    IL2CPP_INTERCEPT(void, SpiritGrenade, OnDamageDealt, app::SpiritGrenade* this_ptr, app::DamageDealer* damage_dealer, app::DamageResult damage_result) {
        // In SpiritGrenade.OnDamageDealt(), the game wrongly uses SpiritGrenade.DamageOwner
        // as the damage owner. Instead, it should have used SpiritGrenade.DamageDealer.DamageOwner.
        // This fix does exactly that.
        modloader::ScopedSetter _(this_ptr->fields.DamageOwner, this_ptr->fields.DamageDealer->fields.DamageOwner);
        next::SpiritGrenade::OnDamageDealt(this_ptr, damage_dealer, damage_result);
    }
} // namespace

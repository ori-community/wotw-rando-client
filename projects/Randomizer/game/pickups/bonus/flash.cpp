#include <Modloader/app/methods/SeinCharacter.h>
#include <Modloader/il2cpp_helpers.h>
#include <Randomizer/constants.h>
#include <Randomizer/macros.h>

#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/SeinGlowSpell.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace app::classes;

namespace {
    core::api::uber_states::UberState flash_damage_multiplier(UberStateGroup::RandoUpgrade, 93);
    core::api::uber_states::UberState flash_tick_interval(UberStateGroup::RandoUpgrade, 94);

    IL2CPP_INTERCEPT(void, SeinGlowSpell, DealDamageInRadius, app::SeinGlowSpell * this_ptr, float amount, float radius, float force) {
        this_ptr->fields.Balancing->fields.DamageOverTimeTickRate = flash_tick_interval.get<float>();
        return next::SeinGlowSpell::DealDamageInRadius(this_ptr, amount, radius, force);
    }

    IL2CPP_INTERCEPT(bool, SeinGlowSpell, DealDamage, app::SeinGlowSpell * this_ptr, app::IAttackable* attackable, float amount, app::Vector3 direction, float force, app::Damage* damage, bool should_instantiate_v_f_x) {
        return next::SeinGlowSpell::DealDamage(this_ptr, attackable, amount * flash_damage_multiplier.get<float>(), direction, force, damage, should_instantiate_v_f_x);
    }

}
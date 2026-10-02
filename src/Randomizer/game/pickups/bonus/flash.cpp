#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/SeinCharacter.h>
#include <Modloader/app/methods/SeinGlowSpell.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


using namespace app::classes;

namespace {
    auto& flash_damage_multiplier = randomizer::uber_states::state<"randoUpgrades", "flashDamageMultiplier">();
    auto& flash_tick_interval = randomizer::uber_states::state<"randoUpgrades", "flashTickInterval">();

    IL2CPP_INTERCEPT(void, SeinGlowSpell, DealDamageInRadius, app::SeinGlowSpell * this_ptr, float amount, float radius, float force) {
        this_ptr->fields.Balancing->fields.DamageOverTimeTickRate = flash_tick_interval.get();
        return next::SeinGlowSpell::DealDamageInRadius(this_ptr, amount, radius, force);
    }

    IL2CPP_INTERCEPT(bool, SeinGlowSpell, DealDamage, app::SeinGlowSpell * this_ptr, app::IAttackable* attackable, float amount, app::Vector3 direction, float force, app::Damage* damage, bool should_instantiate_v_f_x) {
        return next::SeinGlowSpell::DealDamage(this_ptr, attackable, amount * flash_damage_multiplier.get(), direction, force, damage, should_instantiate_v_f_x);
    }
}

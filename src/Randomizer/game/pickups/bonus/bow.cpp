#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/BowArrow.h>
#include <Modloader/app/methods/SeinBowAttack.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace {
    using namespace app::classes;

    auto& rapid_fire_upgrade_state = randomizer::uber_states::state<"randoUpgrades", "bowRapidFireIntervalDurationMultiplier">();
    auto& splinter_long_range_state = randomizer::uber_states::state<"randoUpgrades", "splinterLongerRange">();

    float rapid_fire_cooldown;

    IL2CPP_INTERCEPT(void, SeinBowAttack, OnAwake, app::SeinBowAttack* this_ptr) {
        next::SeinBowAttack::OnAwake(this_ptr);
        rapid_fire_cooldown = this_ptr->fields.RapidFireCooldown;
    }

    IL2CPP_INTERCEPT(void, SeinBowAttack, UpdateCharacterState, app::SeinBowAttack* this_ptr) {
        this_ptr->fields.RapidFireCooldown = rapid_fire_cooldown * rapid_fire_upgrade_state.get();
        next::SeinBowAttack::UpdateCharacterState(this_ptr);
    }

    IL2CPP_INTERCEPT(void, BowArrow, Release, app::BowArrow* this_ptr, app::DamageOwner* damageOwner, bool charged) {
        next::BowArrow::Release(this_ptr, damageOwner, charged);
        if (splinter_long_range_state.get()) {
            this_ptr->fields.DissipationTimer = -1.f; // resets it to the default value
        }
    }

} // namespace

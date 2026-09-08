#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/methods/SeinBowAttack.h>
#include <Modloader/app/methods/BowArrow.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <vector>

namespace {
    using namespace app::classes;

    core::api::uber_states::UberState rapid_fire_upgrade(UberStateGroup::RandoUpgrade, 10);
    core::api::uber_states::UberState normal_dissipation_on_splinter(UberStateGroup::RandoUpgrade, 97);

    float rapid_fire_cooldown;

    IL2CPP_INTERCEPT(void, SeinBowAttack, OnAwake, app::SeinBowAttack * this_ptr) {
        next::SeinBowAttack::OnAwake(this_ptr);
        rapid_fire_cooldown = this_ptr->fields.RapidFireCooldown;
    }

    IL2CPP_INTERCEPT(void, SeinBowAttack, UpdateCharacterState, app::SeinBowAttack * this_ptr) {
        this_ptr->fields.RapidFireCooldown = rapid_fire_cooldown * rapid_fire_upgrade.get<float>();
        next::SeinBowAttack::UpdateCharacterState(this_ptr);
    }

    IL2CPP_INTERCEPT(void, BowArrow, Release, app::BowArrow * this_ptr, app::DamageOwner * damageOwner, bool charged) {
        next::BowArrow::Release(this_ptr, damageOwner, charged);
        if (normal_dissipation_on_splinter.get<bool>()) {
            this_ptr->fields.DissipationTimer = -1.f; // resets it to the default value
        }
    }

} // namespace

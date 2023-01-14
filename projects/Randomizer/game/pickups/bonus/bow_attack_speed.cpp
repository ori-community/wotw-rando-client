#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/methods/SeinBowAttack.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <vector>

namespace {
    float rapid_fire_cooldown;

    IL2CPP_INTERCEPT(SeinBowAttack, void, OnAwake, (app::SeinBowAttack * this_ptr)) {
        next::SeinBowAttack::OnAwake(this_ptr);
        rapid_fire_cooldown = this_ptr->fields.RapidFireCooldown;
    }

    core::api::uber_states::UberState rapid_fire_upgrade(UberStateGroup::RandoUpgrade, 10);
    IL2CPP_INTERCEPT(SeinBowAttack, void, UpdateCharacterState, (app::SeinBowAttack * this_ptr)) {
        this_ptr->fields.RapidFireCooldown = rapid_fire_cooldown * rapid_fire_upgrade.get<float>();
        next::SeinBowAttack::UpdateCharacterState(this_ptr);
    }
} // namespace

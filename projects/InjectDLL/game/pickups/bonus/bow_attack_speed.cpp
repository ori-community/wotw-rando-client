#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <vector>

using namespace modloader::console;

namespace
{
    float rapid_fire_cooldown;
    IL2CPP_INTERCEPT(, SeinBowAttack, void, OnAwake, (app::SeinBowAttack* this_ptr)) {
        SeinBowAttack::OnAwake(this_ptr);
        rapid_fire_cooldown = this_ptr->fields.RapidFireCooldown;
    }

    uber_states::UberState rapid_fire_upgrade(UberStateGroup::RandoUpgrade, 10);
    IL2CPP_INTERCEPT(, SeinBowAttack, void, UpdateCharacterState, (app::SeinBowAttack* this_ptr)) {
        this_ptr->fields.RapidFireCooldown = rapid_fire_cooldown * rapid_fire_upgrade.get<float>();
        SeinBowAttack::UpdateCharacterState(this_ptr);
    }
}


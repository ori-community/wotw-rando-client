#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <vector>

using namespace modloader::console;

namespace
{
    constexpr int BOW_RAPID_FIRE_ID = 10;

    float rapid_fire_cooldown;

    IL2CPP_INTERCEPT(, SeinBowAttack, void, OnAwake, (app::SeinBowAttack* this_ptr)) {
        SeinBowAttack::OnAwake(this_ptr);
        rapid_fire_cooldown = this_ptr->fields.RapidFireCooldown;
    }

    IL2CPP_INTERCEPT(, SeinBowAttack, void, UpdateCharacterState, (app::SeinBowAttack* this_ptr)) {
        this_ptr->fields.RapidFireCooldown = rapid_fire_cooldown * uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, BOW_RAPID_FIRE_ID);
        SeinBowAttack::UpdateCharacterState(this_ptr);
    }
}


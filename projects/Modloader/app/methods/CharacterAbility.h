#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/CharacterAbility.h>
#include <Modloader/app/structs/PlayerAbilities.h>

namespace app::classes::CharacterAbility {
    IL2CPP_REGISTER_METHOD(0x01046690, void, ctor, app::CharacterAbility* this_ptr, app::PlayerAbilities* player_abilities, app::AbilityType__Enum ability_type)
    IL2CPP_REGISTER_METHOD(0x010466A0, bool, get_HasAbility, app::CharacterAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010466D0, void, set_HasAbility, app::CharacterAbility* this_ptr, bool value)
} // namespace app::classes::CharacterAbility

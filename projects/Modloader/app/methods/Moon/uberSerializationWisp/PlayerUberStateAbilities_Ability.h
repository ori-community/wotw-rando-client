#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerUberStateAbilities_Ability.h>
#include <Modloader/app/structs/AbilityType__Enum.h>

namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateAbilities_Ability {
    IL2CPP_REGISTER_METHOD(0x00F35540, void, ctor, (app::PlayerUberStateAbilities_Ability * this_ptr, app::AbilityType__Enum type))
}

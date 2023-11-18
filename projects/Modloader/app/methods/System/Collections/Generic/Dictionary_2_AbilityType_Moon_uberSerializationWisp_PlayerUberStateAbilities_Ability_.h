#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/PlayerUberStateAbilities_Ability.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ * this_ptr, app::AbilityType__Enum key, app::PlayerUberStateAbilities_Ability* value))
    IL2CPP_REGISTER_METHOD(0x02EAA0E0, app::PlayerUberStateAbilities_Ability*, get_Item, (app::Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ * this_ptr, app::AbilityType__Enum key))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ * this_ptr, app::AbilityType__Enum key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_

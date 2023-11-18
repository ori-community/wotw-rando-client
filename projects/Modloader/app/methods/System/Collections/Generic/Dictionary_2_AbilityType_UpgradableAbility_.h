#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_AbilityType_UpgradableAbility_.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/UpgradableAbility.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_AbilityType_UpgradableAbility_ {
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_AbilityType_UpgradableAbility_ * this_ptr, app::AbilityType__Enum key, app::UpgradableAbility* value))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_AbilityType_UpgradableAbility_ * this_ptr, app::AbilityType__Enum key))
    IL2CPP_REGISTER_METHOD(0x02EAA0E0, app::UpgradableAbility*, get_Item, (app::Dictionary_2_AbilityType_UpgradableAbility_ * this_ptr, app::AbilityType__Enum key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_AbilityType_UpgradableAbility_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_AbilityType_UpgradableAbility_

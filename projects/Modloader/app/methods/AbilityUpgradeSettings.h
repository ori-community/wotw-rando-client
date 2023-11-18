#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityUpgradeSettings.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/UpgradableAbility.h>

namespace app::classes::AbilityUpgradeSettings {
    IL2CPP_REGISTER_METHOD(0x004B3B30, void, Awake, (app::AbilityUpgradeSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B3CB0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x004B3D30, bool, HasSettingsForAbility, (app::AbilityUpgradeSettings * this_ptr, app::AbilityType__Enum ability))
    IL2CPP_REGISTER_METHOD(0x004B3DF0, app::UpgradableAbility*, GetUpgradableAbility, (app::AbilityUpgradeSettings * this_ptr, app::AbilityType__Enum ability))
    IL2CPP_REGISTER_METHOD(0x004B3E90, void, ctor, (app::AbilityUpgradeSettings * this_ptr))
} // namespace app::classes::AbilityUpgradeSettings

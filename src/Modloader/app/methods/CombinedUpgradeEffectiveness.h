#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CombinedUpgradeEffectiveness.h>
#include <Modloader/app/structs/CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum.h>
#include <Modloader/app/structs/Single__Array.h>

namespace app::classes::CombinedUpgradeEffectiveness {
    IL2CPP_REGISTER_METHOD(
        0x011DE590,
        app::Single__Array*,
        GetForType,
        app::CombinedUpgradeEffectiveness* this_ptr,
        app::CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum type
    )
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, app::CombinedUpgradeEffectiveness* this_ptr)
} // namespace app::classes::CombinedUpgradeEffectiveness

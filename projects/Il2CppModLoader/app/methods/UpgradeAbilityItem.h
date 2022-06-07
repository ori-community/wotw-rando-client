#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UpgradeAbilityItem {
    IL2CPP_REGISTER_METHOD(0x013AF3B0, int32_t, get_MaxLevel, (app::UpgradeAbilityItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AF3D0, int32_t, GetCostForLevel, (app::UpgradeAbilityItem * this_ptr, int32_t level))
    IL2CPP_REGISTER_METHOD(0x013AF560, void, ctor, (app::UpgradeAbilityItem * this_ptr))
}

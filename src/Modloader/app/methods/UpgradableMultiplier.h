#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpgradableMultiplier.h>

namespace app::classes::UpgradableMultiplier {
    IL2CPP_REGISTER_METHOD(0x013ADCA0, float, get_Multiplier, app::UpgradableMultiplier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpgradableMultiplier* this_ptr)
} // namespace app::classes::UpgradableMultiplier

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpgradableAbility.h>

namespace app::classes::UpgradableAbility {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpgradableAbility* this_ptr)
}

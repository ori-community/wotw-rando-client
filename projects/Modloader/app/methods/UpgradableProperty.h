#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UpgradableProperty.h>

namespace app::classes::UpgradableProperty {
    IL2CPP_REGISTER_METHOD(0x013AE010, void, ctor, (app::UpgradableProperty * this_ptr))
}

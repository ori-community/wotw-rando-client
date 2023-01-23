#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OriUpgradeMenuItem.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::OriUpgradeMenuItem {
    IL2CPP_REGISTER_METHOD(0x00440FF0, void, ctor, (app::OriUpgradeMenuItem * this_ptr, app::String* str))
    IL2CPP_REGISTER_METHOD(0x004410E0, void, OnSelectedFixedUpdate, (app::OriUpgradeMenuItem * this_ptr))
} // namespace app::classes::OriUpgradeMenuItem

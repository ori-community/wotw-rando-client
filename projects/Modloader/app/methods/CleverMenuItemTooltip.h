#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItemTooltip.h>

namespace app::classes::CleverMenuItemTooltip {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CleverMenuItemTooltip * this_ptr))
}

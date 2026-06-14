#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NavigationAgentLegacy.h>

namespace app::classes::NavigationAgentLegacy {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::NavigationAgentLegacy* this_ptr)
}

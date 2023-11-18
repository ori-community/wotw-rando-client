#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SimpleNavigationAgent.h>

namespace app::classes::MoonNavigation::SimpleNavigationAgent {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SimpleNavigationAgent * this_ptr))
}

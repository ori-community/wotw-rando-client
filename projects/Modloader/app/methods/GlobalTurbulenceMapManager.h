#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GlobalTurbulenceMapManager.h>

namespace app::classes::GlobalTurbulenceMapManager {
    IL2CPP_REGISTER_METHOD(0x007FA2A0, void, ctor, app::GlobalTurbulenceMapManager* this_ptr)
}

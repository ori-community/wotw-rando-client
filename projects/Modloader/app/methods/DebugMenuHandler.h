#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebugMenuHandler.h>

namespace app::classes::DebugMenuHandler {
    IL2CPP_REGISTER_METHOD(0x00DF3B30, void, FixedUpdate, (app::DebugMenuHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DF3DE0, void, ctor, (app::DebugMenuHandler * this_ptr))
} // namespace app::classes::DebugMenuHandler

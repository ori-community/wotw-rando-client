#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DebugMenuHandler {
    IL2CPP_REGISTER_METHOD(0x00DF3B30, void, FixedUpdate, (app::DebugMenuHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DF3DE0, void, ctor, (app::DebugMenuHandler * this_ptr))
}

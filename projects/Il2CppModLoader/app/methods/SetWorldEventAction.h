#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SetWorldEventAction {
    IL2CPP_REGISTER_METHOD(0x005A5250, void, Perform, (app::SetWorldEventAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetWorldEventAction * this_ptr))
}

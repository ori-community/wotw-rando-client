#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WarmupMenuAction {
    IL2CPP_REGISTER_METHOD(0x008D3640, void, Perform, (app::WarmupMenuAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::WarmupMenuAction * this_ptr))
}

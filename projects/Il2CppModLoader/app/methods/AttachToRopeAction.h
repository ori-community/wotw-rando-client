#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AttachToRopeAction {
    IL2CPP_REGISTER_METHOD(0x00850F60, void, Perform, (app::AttachToRopeAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::AttachToRopeAction * this_ptr))
}

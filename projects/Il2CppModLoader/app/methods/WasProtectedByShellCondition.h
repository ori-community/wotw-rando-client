#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WasProtectedByShellCondition {
    IL2CPP_REGISTER_METHOD(0x008D3780, bool, Validate, (app::WasProtectedByShellCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WasProtectedByShellCondition * this_ptr))
}

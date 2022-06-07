#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::IsFullyInstalledCondition {
    IL2CPP_REGISTER_METHOD(0x00645F00, bool, Validate, (app::IsFullyInstalledCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsFullyInstalledCondition * this_ptr))
}

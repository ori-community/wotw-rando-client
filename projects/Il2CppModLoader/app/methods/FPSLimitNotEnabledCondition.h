#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FPSLimitNotEnabledCondition {
    IL2CPP_REGISTER_METHOD(0x00988CF0, bool, Validate, (app::FPSLimitNotEnabledCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FPSLimitNotEnabledCondition * this_ptr))
}

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HDREnabledCondition {
    IL2CPP_REGISTER_METHOD(0x0109B270, bool, Validate, (app::HDREnabledCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HDREnabledCondition * this_ptr))
}

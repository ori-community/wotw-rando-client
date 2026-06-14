#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HDREnabledCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HDREnabledCondition {
    IL2CPP_REGISTER_METHOD(0x0109B270, bool, Validate, app::HDREnabledCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::HDREnabledCondition* this_ptr)
} // namespace app::classes::HDREnabledCondition

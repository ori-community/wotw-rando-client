#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FPSLimitNotEnabledCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::FPSLimitNotEnabledCondition {
    IL2CPP_REGISTER_METHOD(0x00988CF0, bool, Validate, app::FPSLimitNotEnabledCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::FPSLimitNotEnabledCondition* this_ptr)
} // namespace app::classes::FPSLimitNotEnabledCondition

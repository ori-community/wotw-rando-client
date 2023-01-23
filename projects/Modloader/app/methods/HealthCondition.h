#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HealthCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HealthCondition {
    IL2CPP_REGISTER_METHOD(0x010A1490, bool, Validate, (app::HealthCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047907E8, HealthCondition_Validate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HealthCondition * this_ptr))
} // namespace app::classes::HealthCondition

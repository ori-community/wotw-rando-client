#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IsRunningAutomationCondition.h>

namespace app::classes::IsRunningAutomationCondition {
    IL2CPP_REGISTER_METHOD(0x00647660, bool, Validate, app::IsRunningAutomationCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::IsRunningAutomationCondition* this_ptr)
} // namespace app::classes::IsRunningAutomationCondition

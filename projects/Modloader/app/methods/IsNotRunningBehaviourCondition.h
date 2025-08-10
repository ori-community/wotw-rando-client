#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IsNotRunningBehaviourCondition.h>

namespace app::classes::IsNotRunningBehaviourCondition {
    IL2CPP_REGISTER_METHOD(0x006469D0, void, Awake, app::IsNotRunningBehaviourCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00646B50, bool, Validate, app::IsNotRunningBehaviourCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00646F30, void, ctor, app::IsNotRunningBehaviourCondition* this_ptr)
} // namespace app::classes::IsNotRunningBehaviourCondition

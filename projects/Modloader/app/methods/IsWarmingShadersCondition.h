#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IsWarmingShadersCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::IsWarmingShadersCondition {
    IL2CPP_REGISTER_METHOD(0x00648D30, bool, Validate, (app::IsWarmingShadersCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsWarmingShadersCondition * this_ptr))
} // namespace app::classes::IsWarmingShadersCondition

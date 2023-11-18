#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetWorldEventCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::GetWorldEventCondition {
    IL2CPP_REGISTER_METHOD(0x00E12D60, bool, Validate, (app::GetWorldEventCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E12E70, void, ctor, (app::GetWorldEventCondition * this_ptr))
} // namespace app::classes::GetWorldEventCondition

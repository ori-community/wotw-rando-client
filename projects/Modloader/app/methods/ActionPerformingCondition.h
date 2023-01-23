#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ActionPerformingCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ActionPerformingCondition {
    IL2CPP_REGISTER_METHOD(0x004C50F0, bool, Validate, (app::ActionPerformingCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ActionPerformingCondition * this_ptr))
} // namespace app::classes::ActionPerformingCondition

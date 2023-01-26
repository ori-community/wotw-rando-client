#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RopeGrabbedCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::RopeGrabbedCondition {
    IL2CPP_REGISTER_METHOD(0x0136CB40, bool, Validate, (app::RopeGrabbedCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RopeGrabbedCondition * this_ptr))
} // namespace app::classes::RopeGrabbedCondition

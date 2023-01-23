#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HasOreCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HasOreCondition {
    IL2CPP_REGISTER_METHOD(0x0109EAA0, bool, Validate, (app::HasOreCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HasOreCondition * this_ptr))
} // namespace app::classes::HasOreCondition

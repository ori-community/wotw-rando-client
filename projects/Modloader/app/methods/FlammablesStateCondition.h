#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FlammablesStateCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::FlammablesStateCondition {
    IL2CPP_REGISTER_METHOD(0x01270010, bool, Validate, (app::FlammablesStateCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010384E0, void, ctor, (app::FlammablesStateCondition * this_ptr))
} // namespace app::classes::FlammablesStateCondition

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TurtleDamageCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::TurtleDamageCondition {
    IL2CPP_REGISTER_METHOD(0x013D8350, bool, Validate, (app::TurtleDamageCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TurtleDamageCondition * this_ptr))
} // namespace app::classes::TurtleDamageCondition

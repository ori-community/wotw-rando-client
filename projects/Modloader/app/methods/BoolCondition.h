#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BoolCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::BoolCondition {
    IL2CPP_REGISTER_METHOD(0x00D39E30, bool, Validate, (app::BoolCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BoolCondition * this_ptr))
} // namespace app::classes::BoolCondition

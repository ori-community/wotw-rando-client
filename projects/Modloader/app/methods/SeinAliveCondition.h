#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinAliveCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SeinAliveCondition {
    IL2CPP_REGISTER_METHOD(0x00D840B0, bool, Validate, (app::SeinAliveCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinAliveCondition * this_ptr))
} // namespace app::classes::SeinAliveCondition

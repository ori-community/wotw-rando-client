#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IsOnlineCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::IsOnlineCondition {
    IL2CPP_REGISTER_METHOD(0x006473B0, bool, Validate, (app::IsOnlineCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsOnlineCondition * this_ptr))
} // namespace app::classes::IsOnlineCondition

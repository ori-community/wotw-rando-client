#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::IsServiceOnlineCondition {
    IL2CPP_REGISTER_METHOD(0x00647AA0, bool, Validate, (app::IsServiceOnlineCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsServiceOnlineCondition * this_ptr))
} // namespace app::classes::IsServiceOnlineCondition

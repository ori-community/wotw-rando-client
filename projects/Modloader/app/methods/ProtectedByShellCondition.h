#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ProtectedByShellCondition {
    IL2CPP_REGISTER_METHOD(0x00C7DC80, bool, Validate, (app::ProtectedByShellCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ProtectedByShellCondition * this_ptr))
} // namespace app::classes::ProtectedByShellCondition

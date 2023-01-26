#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WasProtectedByShellCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::WasProtectedByShellCondition {
    IL2CPP_REGISTER_METHOD(0x008D3780, bool, Validate, (app::WasProtectedByShellCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WasProtectedByShellCondition * this_ptr))
} // namespace app::classes::WasProtectedByShellCondition

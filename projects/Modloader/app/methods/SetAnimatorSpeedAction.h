#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetAnimatorSpeedAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SetAnimatorSpeedAction {
    IL2CPP_REGISTER_METHOD(0x005A1AC0, void, Perform, (app::SetAnimatorSpeedAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetAnimatorSpeedAction * this_ptr))
} // namespace app::classes::SetAnimatorSpeedAction

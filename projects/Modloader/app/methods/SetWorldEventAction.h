#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetWorldEventAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SetWorldEventAction {
    IL2CPP_REGISTER_METHOD(0x005A5250, void, Perform, (app::SetWorldEventAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetWorldEventAction * this_ptr))
} // namespace app::classes::SetWorldEventAction

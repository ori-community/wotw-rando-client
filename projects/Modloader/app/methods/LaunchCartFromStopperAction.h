#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LaunchCartFromStopperAction.h>

namespace app::classes::LaunchCartFromStopperAction {
    IL2CPP_REGISTER_METHOD(0x00F22930, void, Perform, app::LaunchCartFromStopperAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::LaunchCartFromStopperAction* this_ptr)
} // namespace app::classes::LaunchCartFromStopperAction
